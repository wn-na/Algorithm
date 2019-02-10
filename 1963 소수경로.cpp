#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;
bool isPrime[10001]={true,true};
int main() {
	for(int i = 2; i <= 10000; i++){
		if(isPrime[i]) continue;
		for(int j = i+i; j<=10000;j+=i) isPrime[j] = true;
	}
	int n;
	scanf("%d",&n);
	for(;n--;){
		int start, fin ,step = -1 ,res = -1;
		scanf("%d%d",&start,&fin);
		queue<int> q;
		bool *find = new bool[10001];
		q.push(start);
		find[start] = true;
		while(!q.empty()){
			if(res != -1) break;
			step++;
			int size = q.size();
			for(int i = 0; i < size; i++){
				int tmp = q.front();
				q.pop();
				if(tmp == fin) {res=step;break;}
				
				// 나누기
				int *cip = new int[4];
				for(int j = 3; j >=0; j--) {
					cip[j] = tmp % 10;
					tmp/=10;
				}
				
				for(int j = 0; j < 4; j++){
					for(int k = 0; k < 10; k++){
						cip[j] = (cip[j]+1)%10;
						int next = 0;
						for(int a = 0; a < 4; a++){
							next*=10;
							next += cip[a];
						}
						if(next < 1000) continue;
						if(find[next]) continue;
						if(isPrime[next]) continue;
						
						q.push(next);
						find[next] = true;
					}
				}
				
				
			}
			
		}
		if(res == -1) puts("Impossible");
		else printf("%d\n",res);
	}
	return 0;
}
