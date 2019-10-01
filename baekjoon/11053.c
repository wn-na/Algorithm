#include <stdio.h>
int arr[1001] = {0,};
int n, mx = 0;
int dp[1001] = {0,};
int max(int a, int b){return a>b?a:b;}
int main(void) {
	scanf("%d",&n);
	for(int i = 1; i <= n; i++) scanf("%d",&arr[i]);
	
	for(int i = 1; i <= n; i++){
		int min = 0;
		for(int j = 0; j <i;j++){
			if(arr[i] > arr[j]) {
				min = max(min,dp[j]);
			}
		}
		dp[i] = min + 1;
		mx = max(mx,dp[i]);
	}
	printf("%d",mx);
	return 0;
}
