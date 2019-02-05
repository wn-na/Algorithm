#include <stdio.h>
#include <memory.h>
int input[501][501], dp[501][501], n, m;
int v_x[4] = { 1, 0, -1, 0 };
int v_y[4] = { 0, 1, 0, -1 };
int dfs(int x, int y) {
    if (dp[x][y] != -1) return dp[x][y];
    if (x < 0 || x >= n || y < 0 || y >= m) return 0;
    if (x == 0 && y == 0) return 1; 
 
    dp[x][y] = 0;
    for (int i = 0; i < 4; i++){
        int nX = x + v_x[i];
        int nY = y + v_y[i];
        if (input[nX][nY]>input[x][y])
            dp[x][y] += dfs(nX, nY);
    }
    return dp[x][y];
}
 
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &input[i][j]);
    memset(dp, -1, sizeof(dp));
    printf("%d", dfs(n-1, m-1));
    return 0;
}
