#include <stdio.h>

int arr[500][500];
int main(){
int k,r=0;
scanf("%d",&k);
for(int i = 0; i < k ; i++)
	for(int j = 0; j <= i; j++)
		scanf("%d",&arr[i][j]);


for(int i = k - 1; i > -1; i--)
	for(int j = 0; j < i; j++){
		if(arr[i][j] > arr[i][j+1])
			arr[i-1][j] += arr[i][j];
		else
			arr[i-1][j] += arr[i][j+1];
	}

printf("%d",arr[0][0]);
}
