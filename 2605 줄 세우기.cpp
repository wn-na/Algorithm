#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
 
int main() {
	int n, k, i;
	vector<int> v;
	vector<int>::iterator iter;
	scanf("%d",&n);
	for(i = 0; i < n ; i++){
		scanf("%d ",&k);
		if(k == 0) v.push_back(i+1);
		else {
			iter = v.begin();
			for(int j = 0; j < i-k; j++,iter++);
			v.insert(iter,i+1);
		}
	}
 
	for(i = 0; i < n ; i++){
		printf("%d ",v[i]);
    }
 
	return 0;
}
