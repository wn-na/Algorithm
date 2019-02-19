#include <stdio.h>
char arr[21][21];
int dp[27] = {0,};
int visit[21][21] = {0,};
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int c,r,ans=1;

int dfs(int y, int x, char k,int time){
	if(dp[k-'a']) return;
	else{
		if(ans < time + 1) ans = time + 1;
		for(int i = 0; i < 4; i++){
			int vx = x + dx[i];
			int vy = y + dy[i];
			if(vx >= 0 && vx < c && vy >= 0 && vy < r && visit[vy][vx] == 0){
				dp[k-'a']  = visit[vy][vx] = 1;
				dfs(vy,vx,arr[vy][vx],time+1);
				visit[vy][vx] = dp[k-'a']  = 0;
			}
		}
	}
}

int main(void) {
	scanf("%d%d ",&r,&c);
	for(int i = 0; i < r; i++) gets(arr[i]);
	dfs(0,0,arr[0][0],0);
	printf("%d",ans);
	return 0;
}
