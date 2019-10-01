#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    long *dp = new long[n+1];
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++)
        dp[i] = dp[i-1] + dp[i-2];
    printf("%ld",dp[n]);
}
