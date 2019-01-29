#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

 int main() {
	int n, count = 0, i, q,w;
	bool flag = false;
	vector<int> v;
	vector<int>::iterator iter;
	scanf("%d %d %d",&n,&q,&w);
	for(i = 0; i < n ; i++){
		v.push_back(i+1);
	}
	for(;!flag&&n;count++,n /= 2){
	  for(i = 0; i < n; i+=2){
	  	if((v[i] == q && v[i+1] == w) || (v[i] == w && v[i+1] == q)){
		  	flag = true;
		  	break;
	  	}
		  if(v[i] == q || v[i] == w) v[i+1] = 0;
	  	else if(v[i+1] == q || v[i+1] == w) v[i] = 0;
	  	else v[i] = 0;
	  }
	  for(i =0; i < v.size(); i++){
		  if(v[i] == 0){
		  	iter = v.begin();
		  	for(int j = 0; j < i; j++,iter++);
			  v.erase(iter);
			  i--;
		  } 
	  }
	}
	printf("%d",flag?count:-1);

 	return 0;
}
