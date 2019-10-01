#include <iostream>
#include <cstdio>
#include <queue>
#include <utility>
using namespace std;
bool arr[51][51],visit[51][51];
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};
int n,m;
int main() {
	int max=0;
	scanf("%d%d ",&n,&m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			char k;
			scanf("%c",&k);
			if(k == 'W') arr[i][j] = false;
			else arr[i][j] = true;
		}
		getchar();
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] == false)continue;
			for(int q = 0; q < n; q++)
				for(int w = 0; w < m; w++)
					visit[q][w] = false;
			queue<pair<int,int> > q;
			q.push({i,j});
			int k = -1;
			visit[i][j] = true;
			while(!q.empty()){
				k++;
				int size = q.size();
				for(int dd = 0; dd < size; dd++){
					int vx = q.front().second;
					int vy = q.front().first;
					q.pop();
					for(int s = 0; s < 4; s++){
						int wx = vx+dx[s];
						int wy = vy+dy[s];
						if(wx >=0 && wx <m && wy >= 0 && wy <n && arr[wy][wx]==true && visit[wy][wx] == false){
							visit[wy][wx] = true;
							q.push({wy,wx});
						}
					}
				}
			}
			if(max < k) max = k;
		}
	}
	printf("%d",max);
	
	return 0;
}
