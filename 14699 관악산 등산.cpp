#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

int high[5001];
int n,m;
vector<int> path[5001];
int val[5001];
int dp(int start){
	int res = 1;
	if(val[start] != 0) return val[start];
	for(int i = 0; i < path[start].size(); i++){
		res = max(res,dp(path[start][i])+1);
	}
	return val[start] = res;
}
int main() {
	scanf("%d%d",&n,&m);
	for(int i = 1; i <= n; i++) scanf("%d",&high[i]);
	for(int i = 1; i <= m; i++) {
		int x,y;
		scanf("%d%d",&x,&y);
		if(high[x] > high[y])
			path[y].push_back(x);
		else
			path[x].push_back(y);
	}
	for(int i = 1; i <= n; i++) printf("%d\n",dp(i));
	return 0;
}
