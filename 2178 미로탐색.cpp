#include <iostream>
#include <stdio.h>
#include <queue>
#include <utility>

using namespace std;
typedef pair<int,int> pii;
int N,M, answer = 0;
int arr[101][101] = {0,};
int visit[101][101] = {0,};
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};


int bfs(){
	queue<pii> qu;
	int x = 0, y = 0;
	qu.push(pii(y,x));
	visit[0][0] = 1;
	
	while(!qu.empty()){
		y = qu.front().first;
		x = qu.front().second;
		qu.pop();
		
		if(y == N - 1 && x == M - 1) break;
		
		for(int i = 0; i < 4; i++){
			int n_x = x + dx[i];
			int n_y = y + dy[i];
			if(((n_y >= 0 && n_y < N) && (n_x >= 0 && n_x < M)) && arr[n_y][n_x] && visit[n_y][n_x] == 0){
				visit[n_y][n_x] = visit[y][x] + 1;
				qu.push(pii(n_y,n_x));
			}
		}
	}
	
	return visit[N-1][M-1];
}

int main() {
	scanf("%d %d ",&N, &M);
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			scanf("%1d",&arr[i][j]);
		}
		scanf(" ");
	}
	
	printf("%d",bfs());
	return 0;
}
