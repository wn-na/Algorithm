#include <stdio.h>
int arr[1002] = {0,};
int dp[1002] = {0,};
int MAX(int a, int b){return a>b?a:b;}
int main(void) {
	int n;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		scanf("%d",&arr[i]);
	}
  // 1일때 ~~ 2일때 ~~ 3일때 ~~ 4일때 ~~
	for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            dp[i] = MAX(dp[i], dp[i - j] + arr[j]);
        }
    }
    printf("%d",dp[n]);
	return 0;
}
