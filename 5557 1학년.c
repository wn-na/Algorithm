int n;
int arr[101];
long long dp[101][21];
int dest;
 
long long solve(int sum, int idx) {
    if (sum < 0 || sum > 20) return 0;
    if (idx == n - 2) {
        return dp[idx][sum] = (sum == dest);
    }
 
    if (dp[idx][sum] != -1) return dp[idx][sum];
 
    return dp[idx][sum] = solve(sum + arr[idx + 1], idx + 1) + solve(sum - arr[idx + 1], idx + 1);
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n-1; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &dest);
 
    for (int i = 0; i < 101; i++)
        for (int j = 0; j < 21; j++)
            dp[i][j] = -1;
 
    printf("%lld", solve(arr[0], 0));
}
