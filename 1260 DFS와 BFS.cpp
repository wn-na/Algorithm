#include <iostream>
#include <queue>
#include <cstdio>

int arr[1001][1001] = {0,};
int visit[1001]= {0,};
int n,m,v;
using namespace std;
void dfs(int v){
	visit[v] = 1;
	for(int i = 1; i <= n; i++){
		if(visit[i] == 0 && arr[v][i] == 1){
			printf("%d ",i);
			dfs(i);
		}
	}
}

void bfs(int v){
	queue<int> q;
	q.push(v);
	visit[v] = 1;
	printf("%d ",v);
	while(!q.empty()){
		int he = q.front();
		q.pop();
		for(int i = 1; i <= n; i++){
			if(visit[i] == 0 && arr[he][i] == 1){
				q.push(i);
				printf("%d ",i);
				visit[i] = 1;
			}
		}
	}
	
}
int main() {
	scanf("%d %d %d ",&n,&m,&v);
	for(int i = 0; i < m; i++){
		int x, y;
		scanf("%d %d ",&x, &y);
		arr[x][y] = arr[y][x] = 1;
	}
	printf("%d ",v);
	dfs(v);
	puts("");
	for(int i = 1; i <= n; i++) visit[i] = 0;
	bfs(v);
	return 0;
}
