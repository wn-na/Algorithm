#include <iostream>
#include <queue>
#include <cstdio>
#include <utility>
using namespace std;
int arr[101][101] = {0,};
bool vi[101];
int main() {
	int n;
	scanf("%d",&n);
	int s,f;
	scanf("%d %d",&s,&f);
	int k;
	scanf("%d",&k);
	for(;k--;){
		int x,y;
		scanf("%d %d",&x,&y);
		arr[x][y] = arr[y][x] = 1;
	}
	queue<int> q;
	int w=0,e=-1;
	q.push(s);
	vi[s] = true;
	while(!q.empty()){
		int size = q.size();
		for(int i = 0; i < size; i++){
			int d = q.front();
			q.pop();
			if(d == f) {e=w; break;}
			for(int j = 0; j < 101; j++){
				if(arr[d][j] == 1 && vi[j] == false){
					q.push(j);
					vi[j] = true;
				}
			}
		}
		w++;
	}
	printf("%d",e);
	return 0;
}
