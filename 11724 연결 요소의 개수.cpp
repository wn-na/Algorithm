#include <stdio.h>
#include <vector>

using namespace std;

int N, M, visit[1011] = {0,};
vector<int> arr[1011];

int dfs(int t){
	visit[t] = 1;
	for(int k = 0; k < arr[t].size(); k++){
		if(visit[arr[t][k]] == 0) {
			dfs(arr[t][k]);
		}
	}
}

int main(void) {
	scanf("%d %d ", &N, &M);
	for(int i = 0; i < M; i++){
		int q, w;
		scanf("%d %d ", &q, &w);
		arr[q].push_back(w);
		arr[w].push_back(q);
	}
	int count = 0;
	for(int i = 1; i <= N; i++){
		if(visit[i] == 0){
			dfs(i);
			count++;
		}
	}
	
	printf("%d", count);
	return 0;
}
