#include <stdio.h>

int arr[101][101] = {0,};
int N, max = 1;

void dfs(int x, int y, int visit[101][101]){
	if(arr[x][y] == 0) return;
	if(visit[x][y]) return;
	visit[x][y] = 1;
	arr[x][y]--;
	
	if(x) dfs(x-1,y,visit);
	if(y) dfs(x,y-1,visit);
	if(x < N-1) dfs(x+1,y,visit);
	if(y < N-1) dfs(x,y+1,visit);
}

int main() {
	scanf("%d ", &N);
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			scanf("%d ", &arr[i][j]);
		}
	}
	
	for(;;){
		int count = 0;
		int visit[101][101] = {0,};
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				if(arr[i][j] > 0 && visit[i][j] == 0){
					dfs(i,j,visit);
					count++;
				}
			}
		}
		if(count == 0) break;
		if(max < count) max = count;
	}
	
	printf("%d",max);
	
	
	return 0;
}
