#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;
bool fin[1000001]={false};
int main() {
	int n,k,e=0,w=-1;
	scanf("%d%d",&n,&k);
	queue<int> q;
	q.push(n);
	fin[n] = true;
	while(!q.empty()){
		if(w!=-1)break;
		int size = q.size();
		for(int i = 0; i < size; i++){
			int t = q.front();
			q.pop();
			if(t == k){ w=e; break;}
			if(t+1 < 1000001 && fin[t+1] == false){
			  q.push(t+1);
			  fin[t+1] = true;
      }
			if(t > 0&&fin[t-1] == false){
			  q.push(t-1);
			  fin[t-1] = true;
      }
			if(t*2 < 1000001 && fin[t*2] == false){
			  q.push(t*2);
			  fin[t*2] = true;
      }
		}
		e++;
	}
	printf("%d",w);
	return 0;
}
