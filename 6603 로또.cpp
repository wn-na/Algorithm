#include <iostream>
#include <string>
using namespace std;
int n = 1;
bool dp[14];
int k[14];
void dfs(int deep,int q, string str){
	if(deep == 6) cout << str << "\n";
	else{
		for(int i = q; i < n; i++){
			if(dp[i] == false){
				dp[i] = true;
				dfs(deep+1,i,str + to_string(k[i]) + " ");
				dp[i] = false;
			}
		}
	}
}

int main() {
	for(;n;){
		scanf("%d",&n);
		for(int i = 0; i < n; i++) scanf("%d",&k[i]);
		dfs(0,0,"");
		puts("");
	}
	return 0;
}
