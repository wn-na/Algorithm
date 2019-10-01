#include <iostream>
#include <string>
#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;
char str[22];
map<string,int>map1;
string map2[100001];
int main() {
	int n, m;
	scanf("%d%d ",&n,&m);
	for(int i = 0; i < n; i++){
		scanf("%s",str);
		string s = str;
		map1.insert(pair<string, int>(s,i));
		map2[i] = s;
	}
	for(int i = 0; i < m; i++){
		scanf("%s",str);
		if(isdigit(str[0])){
			cout << map2[atoi(str)-1] << '\n';
		}else{
			string s = str;
			cout << map1[s] + 1 << "\n";
		}
	}
	return 0;
}
