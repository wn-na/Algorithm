#include <stdio.h>
int n,m;
int arr[1001][1001] = {0,};
int dp[1001][1001] = {0,};

int max(int a, int b){return a>b?a:b;}

int main(void) {
	scanf("%d%d",&n,&m);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int result = max(dp[i-1][j-1],max(dp[i - 1][j], dp[i][j - 1]));
            dp[i][j] = result + arr[i][j];
        }
	}
	printf("%d",dp[n][m]);
}
