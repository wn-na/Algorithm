#include <stdio.h>
int dp[2001][2001];
int arr[2001];
int main(void){
    int N;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
 
    for (int i = 1; i <= n; i++){
        dp[1][i] = 1;
        dp[0][i] = 1;
    }
    for (int i = 2; i <= n; i++){
        for (int j = 1; j <= n-i+1; j++){
            if (arr[j] == arr[j + i - 1] && dp[i - 2][j + 1] == 1)
                dp[i][j] = 1;
        }
    }
    
    int t;
    scanf("%d", &t);
    while (t--){
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%d\n", dp[y-x+1][x]);
    }
}
