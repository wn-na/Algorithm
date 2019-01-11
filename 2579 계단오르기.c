#include <stdio.h>
int arr[2][500];
int max(int a,int b){return a > b ? a : b;}
int main(){
int k,r=0;
scanf("%d",&k);
for(int i = 0; i < k ; i++)
	scanf("%d",&arr[0][i]);

// 첫번째 계단
arr[1][0] = arr[0][0];
// 두번째 계단은 첫번째 두번째를 밟던가 아니면 두번째 바로온경우
arr[1][1] = max(arr[0][0] + arr[0][1], arr[0][1]);
// 세번째 계단은 첫번째 세번째 혹은 두번째 세번째
arr[1][2] = max(arr[0][0] + arr[0][2], arr[0][1] + arr[0][2]);

for(int i = 3; i < k ; i++)
// 결국은 i-2번째 계단값 + i칸 계단값이나 i-1,i번째한뒤  i-3번째 값을 가져와서 건너띄는법
	arr[1][i] = max(arr[1][i-2]+arr[0][i], arr[0][i-1]+arr[0][i]+arr[1][i-3]);


printf("%d ",arr[1][k-1]);

}
