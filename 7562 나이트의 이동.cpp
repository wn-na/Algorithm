#include <iostream>
#include <queue>
#include <cstdio>
#include <utility>
using namespace std;
int vvx[] = {-2,-1,1,2,2,1,-1,-2};
int vvy[] = {1,2,2,1,-1,-2,-2,-1};
bool vi[301][301];
int main() {
	int n;
	scanf("%d",&n);
	for(;n--;){
		for(int i = 0; i < 300; i++)
			for(int j = 0; j < 300; j++)
				vi[i][j] = false;
		int l, x1,y1,x2,y2,c=0,k=-1;
		scanf("%d%d%d%d%d",&l,&x1,&y1,&x2,&y2);
		queue<pair<int,int> > q;
		vi[x1][y1] = true;
		q.push({x1,y1});
		while(!q.empty()){
			if(k != -1) break;
			int size = q.size();
			for(int i = 0; i < size; i++){
				int vx = q.front().first;
				int vy = q.front().second;
				q.pop();
				if(vx == x2 && vy == y2){k = c; break;}
				for(int j = 0; j < 8; j++){
					int qx = vx+vvx[j];
					int qy = vy+vvy[j];
					if(qx >= 0 && qx < l && qy >= 0 && qy < l && vi[qx][qy] == false){
						q.push({qx,qy});
						vi[qx][qy] = true;
					}
				}
			}
			c++;
		}
		printf("%d\n",k);
	}
	return 0;
}
