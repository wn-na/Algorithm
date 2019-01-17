#include <stdio.h>

int N,M;
int arr[301][301];

void dfs(int x, int y, int visit[301][301]){
	int k = 0;
	if(visit[x][y]) return;
	if(arr[x][y] == 0) return;
	visit[x][y] = 1;
	if(x) dfs(x - 1, y, visit);
	if(x + 1 < N) dfs(x + 1, y, visit);
	if(y) dfs(x, y - 1, visit);
	if(y + 1 < M) dfs(x, y + 1, visit);

	if(x) k += (arr[x - 1][y] == 0 && visit[x - 1][y] == 0);
	if(x + 1 < N) k += (arr[x + 1][y] == 0 && visit[x + 1][y] == 0);
	if(y) k += (arr[x][y - 1] == 0 && visit[x][y - 1] == 0);
	if(y + 1 < M) k += (arr[x][y + 1] == 0 && visit[x][y + 1] == 0);
	arr[x][y] = arr[x][y] - k < 0 ? 0 : arr[x][y] - k;
}

int main(){
  int i, j, count, result;
  scanf("%d %d ",&N,&M);
  for(i = 0; i < N; ++i)
    for(j = 0; j < M; ++j)
      scanf("%d ", &arr[i][j]);

  for(result = 0; ;++result){
    int visit[301][301]={0,};
    count = 0;
    for(i = 0; i < N; ++i){
      for(j = 0; j < M; ++j){
        if(visit[i][j] == 0 && arr[i][j]){
          dfs(i, j, visit);
          ++count;
        }
      }
    }
    if(count == 0){
      result = 0;
      break;
    } else if(count > 1){
      break;
    }
  }
  printf("%d",result);
}
