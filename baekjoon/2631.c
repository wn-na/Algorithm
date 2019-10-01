#include <stdio.h>
int arr[201],dp[201]={0,};
int main(void) {
	int n,k=0;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		scanf("%d",&arr[i]);
	}
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for(int j = 0; j < i; j++) {
			if (arr[j] < arr[i] && dp[j] + 1 > dp[i]){
				dp[i] = dp[j] + 1; 
				
			}
		}
	}
	
	for (int i = 1; i <= n; i++) { if(dp[i] > k) k = dp[i];}
    printf("%d",n-k);
	return 0;
}
