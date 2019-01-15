int arr[101][101];
int visit[101][101];
long long int dp[101][101];
int count = 0;
int k;

int main(){
  scanf("%d",&k);
  for(int i = 0; i < k; i++){
    for(int j = 0; j < k; j++){
      scanf("%d",&arr[i][j]);
    }
  }
  visit[0][0]=dp[0][0]=1;

  for(int i = 0; i < k; i++){
    for(int j = 0; j < k; j++){
	    if(!visit[i][j])continue;
	    if(i==k-1&&j==k-1)break;
	    int r = arr[i][j];
	    if(i+r<k){
	      dp[i+r][j] += dp[i][j];
	      visit[i+r][j] = 1;
      }
	    if(j+r<k){
	      dp[i][j+r] += dp[i][j];
	      visit[i][j+r] = 1;
      }
    }
  }
  printf("%lld", dp[k-1][k-1]);
}
