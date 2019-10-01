#include <iostream>
#include <queue>
#include <cstdio>
#include <cstring>		// memset
#include <algorithm>
using namespace std;
int build[1001][1001], cost[1001], path[1001], value[1001];
bool isfirst[1001];
void bfs(int start, int fin){
	queue<int> q;
	int result = 0;
	q.push(start);
	value[start] = cost[start];
	while(!q.empty()){
		int now = q.front();
		q.pop();
		
		if(now == fin) {
			result = max(result, value[now]);
		}else{
			for(int i = 1; i <= path[now]; i++){
				int next = build[now][i];
				if(next > 0){
					int nextcost = value[now] + cost[next];
					if(value[next] < nextcost){
						value[next] = nextcost;
						q.push(next);
					}
				}
			}	
		}
	}
	printf("%d\n",result);
}

int main() {
	int t_case, fin, n, k, x, y, start;
	scanf("%d",&t_case);
	while(t_case--){
		memset(build,0,sizeof(build));
		memset(cost,0,sizeof(cost));
		memset(path,0,sizeof(path));
		memset(isfirst,0,sizeof(isfirst));
		memset(value,0,sizeof(value));
		
		scanf("%d%d",&n,&k);
		for(int i = 1; i <= n; i++)
			scanf("%d",&cost[i]);
			
		for(int i = 0; i < k; i++){
			scanf("%d%d",&x,&y);
			int where = ++path[x];
			build[x][where] = y;
			isfirst[y] = 1;
		}
		
		for(int i = 1; i <= n; i++)
			if(isfirst[i] == 0) start = i;
		scanf("%d",&fin);
		bfs(start,fin);
	}
	return 0;
}
