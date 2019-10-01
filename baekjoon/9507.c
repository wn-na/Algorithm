#include <stdio.h>

unsigned long long int arr[69] = {1,1,2,4};
int main(void) {
	for(int i = 4; i < 68; i++){
		arr[i] = arr[i-1] + arr[i-2] + arr[i-3] + arr[i-4];
	}
	int n,k;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&k);
		printf("%llu\n",arr[k]);
	}
	return 0;
}
