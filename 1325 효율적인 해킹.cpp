#include<stdio.h>
#include<vector>
using namespace std;
vector <int> vec[10001];
int result[10001];
int ans = 0;

void dfs(int visit[10001], int x){
  visit[x] = 1;
  result[x]++;
  if(ans < result[x]) ans = result[x];
  for(int i = 0; i < vec[x].size();i++){
	  if(visit[vec[x][i]] == 0){
		  dfs(visit,vec[x][i]);
	  }
  }
}

int main(){
  int N,M;
  scanf("%d %d ",&N,&M);
  for(int i = 0;i < M; i++){
    int a,b;
    scanf("%d %d ",&a,&b);
    vec[a].push_back(b);
  }

  for(int i = 1; i <= N; i++){
    int visit[10001] = {0,};
    dfs(visit,i);
  }

  for(int i = 1; i <= N; i++){
    if(ans == result[i]) printf("%d ",i);
  }
}
