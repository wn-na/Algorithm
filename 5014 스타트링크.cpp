#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
bool st[1000001];
int main() {
	int f,s,g,u,d,e = 0;
	scanf("%d%d%d%d%d",&f,&s,&g,&u,&d);
	queue<int> q;
	q.push(s);
	st[s] = true;
	while(!q.empty()){
		int size = q.size();
		for(int i = 0; i < size; i++){
			int k = q.front();
			q.pop();
			if(k == g){
				printf("%d",e);
				return 0;
			}
			if(k+u <= f && st[k+u] == false){
				q.push(k+u);
				st[k+u] = true;
			}
			if(k-d > 0 && st[k-d] == false){
				q.push(k-d);
				st[k-d] = true;
			}
		}
		e++;
	}
	puts("use the stairs");
	return 0;
}
