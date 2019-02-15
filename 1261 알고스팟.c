#include <stdio.h>
char visit[102][102];
int arr[102][102];
int map[102][102];
int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};
int n,m,cnt=9999999;
int min(int a, int b){return a>b?b:a;}

void dfs(int x, int y, int c){
	if(map[y][x] <= c) return;
	else map[y][x] = c;
	if(x==n && y == m) return;
	for(int i = 0; i < 4; i++){
		int d_x = x + dx[i];
		int d_y = y + dy[i];
		if(d_x>0&&d_x<=n&&d_y>0&&d_y<=m&&visit[d_y][d_x]==0){
			visit[d_y][d_x] = 1;
			dfs(d_x,d_y,c+arr[d_y][d_x]);
			visit[d_y][d_x] = 0;
		}
	}
}

int main(void) {
	scanf("%d%d",&n,&m);
	for(int i = 1; i <= m; i++)
		for(int j = 1; j <= n; j++){
			scanf("%1d",&arr[i][j]);
			map[i][j]=999999;
		}
	
	dfs(1,1,0);
	visit[1][1] = 1;
	printf("%d",map[m][n]);
	return 0;
}
