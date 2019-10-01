#include <stdio.h>
int main(void) {
	int n;
  // 경우의 수가 1 + arr[i-1] + 2 + arr[i-2] + 3 + arr[i-3] -> arr[i] = arr[i-3]+arr[i-2]+arr[i-1]
	int arr[13] = {0,1,2,4,};
	scanf("%d",&n);
	for(int i = 4; i < 12; i++)
		arr[i] = arr[i-3]+arr[i-2]+arr[i-1];
	for(;n--;){
		int t;
		scanf("%d",&t);
		printf("%d\n",arr[t]);
	}
	
}
