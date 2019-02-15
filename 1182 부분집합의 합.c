#include <stdio.h>
char visit[21];
int arr[21];
int n, sum, cnt=0;

void dfs(int start, int sm){
	if(sm == sum) cnt++;
	for(int i = start + 1; i < n; i++){
		if(visit[i] == 0){
			visit[i] = 1;
			dfs(i,sm+arr[i]);
			visit[i] = 0;
		}
	}
}

int main(void) {
	scanf("%d%d",&n,&sum);
	for(int i = 0; i < n ; i++) scanf("%d",&arr[i]);
	for(int i = 0; i < n ; i++)	dfs(i,arr[i]);
	printf("%d",cnt);
	return 0;
}
