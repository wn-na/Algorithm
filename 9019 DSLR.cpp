#include <iostream>
#include <cstdio>
#include <queue>
#include <utility>
#include <vector>
#include <string>
using namespace std;
int n;
bool qw[10001];
char d[] = {'D','S','L','R'};
int ss(char k, int n){
	if(k == 'D') n = (n*2);
	if(k == 'S') n = (n+9999);
	if(k == 'L') n = (n * 10 + n / 1000);
	if(k == 'R') n = (n / 10 + n % 10 * 1000);
	return n%10000;
}

int main() {
	scanf("%d",&n);
	for(;n--;){
		int st,fi;
		scanf("%d%d",&st,&fi);
		for(int i = 0; i < 10001; i++) qw[i] = false;
		queue<pair<string,int> > q;
        string ans;
		q.push({"",st});
		qw[st] = true;
		while(!q.empty()){
			int k = q.front().second;
			string e = q.front().first;
			if(k == fi){ans=e; break;}
			q.pop();
			for(int j = 0; j < 4; j++){
				int ww = ss(d[j],k);
				if(qw[ww] == false){
					q.push({e+d[j],ww});
					qw[ww] = true;
				}
			}
		}
		
		cout << ans + "\n";
	}
	return 0;
}
