#include <stdio.h>

int N, M, K, e, visit[101][101] = {0,}, arr[101][101] = {0,}, result[101] = {0,};

int func(int *a, int*b){return *a>*b;}

void dfs(int x, int y){
	if(arr[x][y] == 1 || visit[x][y] == 1){
		return;	
	} 
	e++;
	visit[x][y] = 1;
	if(x) dfs(x-1,y);
	if(y) dfs(x,y-1);
	if(x<M-1) dfs(x+1,y);
	if(y<N-1) dfs(x,y+1);
}

int main(){
	scanf("%d %d %d ", &M, &N, &K);
	for(int i = 0; i < K; i++){
		int x1, y1, x2, y2;
		scanf("%d %d %d %d ", &x1, &y1, &x2, &y2);
		for(int w = x1;w <x2; w++){
			for(int q = y1; q<y2;q++){
				arr[q][w] = 1;
			}
		}
	}
	
	int count = 0;
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			if(visit[i][j] == 0 && arr[i][j] == 0){
				e = 0;
				dfs(i,j);
				result[count++] = e;
			}
		}
	}
	
	qsort(result,count,sizeof(int),func);
	printf("%d\n",count);
	for(int i = 0; i < count; i++) printf("%d ",result[i]);
	
	return 0;
}
