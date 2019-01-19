#include <stdio.h>
#include <stdlib.h>
int N;

int distance(int x1, int x2, int y1, int y2){
	return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}

void dfs(int idx,int visit[5001], int arr[5001][3]){
	for(int i = 0; i < N; i++){
  // 본인이거나, 방문햇거나, 두점사리의 거리가 두점의 거리보다 길면 패스
		if(i == idx || visit[i] || distance(arr[i][0],arr[idx][0],arr[i][1],arr[idx][1]) > (arr[idx][2]+arr[i][2])*(arr[idx][2]+arr[i][2]))
			continue;
		visit[i] = 1;
		dfs(i,visit,arr);
	}
}

int main(){
	int t;
	scanf("%d ",&t);
	for(;t--;){
		int arr[5001][3] = {0,};
		int visit[5001] = {0,};
		int c = 0;
		scanf("%d ",&N);
		for(int i = 0; i < N; i++){
			for(int j = 0 ; j < 3; j++){
				int x;
				scanf("%d ",&x);
				arr[i][j] = x;
			}
		}
		
		for(int i = 0; i < N; i++)
			if(visit[i] == 0) {
				dfs(i,visit,arr); 
				c++;
			}

		printf("%d\n",c);
	}
}
