#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
	vector<pair<string,pair<int,int > > > vec;
	int k,n;
	string str;
	scanf("%d",&k);
	for(int i = 0; i < k; i++){
		scanf("%d ",&n);
		cin >> str;
		vec.push_back({str,{i,n}});
	}
	
	sort(vec.begin(),vec.end(),[](auto&left,auto&right){
		return left.second.second != right.second.second ? 
		left.second.second < right.second.second:
		left.second.first < right.second.first;
	});
	
	for(int i = 0; i < k; i++){
		printf("%d %s\n",vec[i].second.second,vec[i].first.c_str());
	}
	return 0;
}
