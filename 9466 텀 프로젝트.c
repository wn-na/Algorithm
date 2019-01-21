#include <stdio.h>
int n, count = 0, arr[100001] = {0,};

int dfs(int start, char visit[100001],char fins[100001]){
	visit[start] = 1;
	int next = arr[start];
	if(visit[next] == 0) dfs(next, visit, fins);
	else{
    // 사이클이 끝났을때 다음번에 가는 원소가 이미 끝난게 아니라면
		if(fins[next] == 0){
      // 사이클을 순회하는 만큼 값을 얻어온다.
			for(int x = next; start != x; x = arr[x]) count++;
			count++;
		}
	}
  // 사이클 혹은 연결이 끝났음을 
	fins[start] = 1;
}
int main(void) {
	int t;
	scanf("%d ", &t);
	for(;t--;){
		scanf("%d ", &n);
		for(int i = 1; i <= n; i++){
			scanf("%d",&arr[i]);
		}
		count = 0;
		char visit[100001] = {0,}, fins[100001] = {0,};
		for(int i = 1; i <= n; i++){
			if(visit[i] == 0) {
				dfs(i, visit,fins);
			}
		}
		printf("%d\n",n - count);
	}
	return 0;
}
