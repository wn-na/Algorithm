#include <stdio.h>
int N;
int count;
char arr[101][101];
char visit[100][100];

void dfs(int x, int y, int type, char ch){
	if(visit[x][y] != type) return;
	if(arr[x][y] != ch) return;
	if(type == 0 && arr[x][y] == 'G') arr[x][y] = 'R';
	visit[x][y] = (type + 1)%2;
	if(x > 0) dfs(x-1,y,type,ch);
	if(x+1<N) dfs(x+1,y,type,ch);
	if(y > 0) dfs(x,y-1,type,ch);
	if(y+1<N) dfs(x,y+1,type,ch);
	
}


int main(void) {
	int cnt[2] = {0,0};
	scanf("%d ",&N);
	for(int i = 0; i < N; ++i){
		gets(arr[i]);
	}

	for(int t = 0; t < 2; ++t){
		for(int i = 0; i < N; ++i){
			for(int j = 0; j < N; ++j){
				if(visit[i][j] == t){
					dfs(i,j,t,arr[i][j]);
					++cnt[t];
				}
			}
		}
	}
	printf("%d %d",cnt[0],cnt[1]);
	return 0;
}
