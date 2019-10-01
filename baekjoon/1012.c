#include <stdio.h>

int T,M,N,K;
int arr[51][51];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
void dfs(int x, int y){
    if(arr[x][y] == 0) return;
    arr[x][y] = 0;
    for(int i = 0; i < 4; i++)
	    if(x+dx[i]>=0 && x+dx[i]<M && y+dy[i]>=0 && y+dy[i]<N)
		    dfs(x+dx[i],y+dy[i]);
}
int main(){
    int x,y,count;
    scanf("%d ",&T);
    for(int i = 0; i < T ; i++){
        scanf("%d %d %d ",&M,&N,&K);
        count=0;
        for(int j = 0; j < K; j++){
            scanf("%d %d ",&x,&y);
            arr[x][y] = 1;
        }

        for(int j = 0; j < M; j++)
	        for(int k = 0; k < N; k++)
		        if(arr[j][k] == 1){
			        dfs(j,k);
			        count++;
                }

        printf("%d\n",count);
    }
}
