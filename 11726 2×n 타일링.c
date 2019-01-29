#include <stdio.h>
int dp[1001] = {1,1};
int main() {
    int n;
    scanf("%d",&n);
    for (int i = 2; i <= n; i++) {
    // 1 : l / 2 : ll, = / 3: l ll, ll l, = l / 4:  ...
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }
    printf("%d",dp[n]);
    return 0;
}
