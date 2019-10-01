#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int n;
bool dp[10001];
void dfs(int deep, string str){
	if(deep == n) cout << str << "\n";
	else{
		for(int i = 0; i < n; i++){
			if(dp[i] == false){
				dp[i] = true;
				dfs(deep + 1, str + to_string(i+1) + " ");
			  dp[i] = false;
			}
		}
	}
}

int main() {
  cin >> n;
	dfs(0,"");
	return 0;
}
