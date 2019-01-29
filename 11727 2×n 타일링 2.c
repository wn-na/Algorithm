#include <stdio.h>
int dp[1010] = {1,1};
int main(void){ 
    int n; 
    scanf("%d", &n);
 
 //i = i-1번째 1x2, i-2번째 2x1,2x2.
// => dp[i] = dp[i-1] + dp[i-2]*2 
    for(int i = 2; i <= n; i++) dp[i] = (dp[i - 1] + dp[i - 2] *2) % 10007;
 
    printf("%d\n", dp[n] % 10007);
 
    return 0;
}
