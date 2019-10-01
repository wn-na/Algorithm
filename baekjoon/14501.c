#include <stdio.h>
int dp[25];
int main(void) {
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		int t,p;
		scanf("%d%d",&t,&p);
		if(dp[i] > dp[i+1]) dp[i+1] = dp[i];
		if(dp[i+t] < dp[i]+p) dp[i+t] = dp[i] + p;
	}
	printf("%d",dp[n]);
	return 0;
}
