#include <iostream>
#include <cstdio>
#include <queue>
#include <utility>
using namespace std;
int arr[51][51];
bool visit[51][51];
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};
int n,m;
int main() {
	int fx,fy,sx,sy;
	scanf("%d%d ",&n,&m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			arr[i][j] = 1;
			char k = getchar();
			if(k=='D'){	fy=i;fx=j;}
			else if(k == 'S'){sy=i;sx=j;}
			else if(k=='*') arr[i][j] = 3;
			else if(k=='X') arr[i][j] = 2;
		}
		getchar();
	}
	
	int res = -1, k = 0;
	queue<pair<int, int> > q;
	q.push({sx,sy});
	visit[sy][sx] = true;
	while(!q.empty()){
		if(res != -1) break;
		int size = q.size();
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(arr[i][j] == 3){
					for(int w = 0; w < 4; w++){
						int wx = j+dx[w];
						int wy = i+dy[w];
						if(wx >= 0 && wx < m && wy >= 0 && wy < n && !(wy == fy && wx == fx) && arr[wy][wx] == 1){
							arr[wy][wx] = 0;
						}
					}
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(arr[i][j] == 0) arr[i][j] = 3;
			}
		}
		
		for(int i = 0; i < size; i++){
			int vx = q.front().first;
			int vy = q.front().second;
			if(vx==fx && vy == fy){res=k;break;}
			q.pop();
			for(int j = 0; j < 4; j++){
				int wx = vx+dx[j];
				int wy = vy+dy[j];
				if(wx >= 0 && wx < m && wy >= 0 && wy < n && arr[wy][wx] == 1 && visit[wy][wx]== false){
					q.push({wx,wy});
					visit[wy][wx] = true;
				}
			}
		}
		k++;
	}
	printf(res==-1?"KAKTUS":"%d",res);
	return 0;
}
