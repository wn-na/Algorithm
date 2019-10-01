#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;

int main() {
	int n, k;
	queue<int> qu;
	scanf("%d %d",&n,&k);
	for(int i = 1; i <= n; i++)
		qu.push(i);
		
	printf("<");
	for(;qu.size();qu.size()?printf(", "):0){
		for(int i = 1; i < k; i++){
			int y = qu.front();
			qu.pop();
			qu.push(y);
		}
		printf("%d",qu.front());
		qu.pop();
	}	
	printf(">");
	
	return 0;
}
