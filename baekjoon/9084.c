#include <stdio.h>
int coin[21];
int dp[10001];

int count(int n, int dest){
	for(int k = 0; k < n; k++){
		dp[coin[k]]++;
		for(int i = coin[k]+1; i <= dest; i++){
			dp[i] += dp[i-coin[k]];
		}
	}
	return dp[dest];
}

int main(void) {
	int t;
	scanf("%d",&t);
	for(;t--;){
		memset(coin,0,sizeof(coin));
		memset(dp,0,sizeof(dp));
		int n, dest;
		scanf("%d",&n);
		for(int i = 0; i < n; i++){
			scanf("%d",&coin[i]);
		}
		scanf("%d",&dest);
		printf("%d\n",count(n,dest));
	}
	return 0;
}
