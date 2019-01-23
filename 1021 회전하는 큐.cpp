#include <stdio.h>
#include <iostream>
#include <deque>
#include <string.h>
using namespace std;

deque<int> list;
int main(){
	int t, k, count = 0;
	scanf("%d %d ",&t,&k);
	for(int i = 1; i <= t; ++i)
		list.push_back(i);
	
	for(int i = 0; i < k; i++){
		int w;
		int size = list.size();
		int idx = 1;
		scanf("%d ", &w);
		for (int i = 0; i < list.size(); i++){
			if (list[i] == w)break;
			idx++; 
		} 
		
		int left = idx - 1;
		int right = size - idx + 1;
		if (left < right) { 
			for (int i = 1; i <= left; i++) { 
				list.push_back(list.front()); 
				list.pop_front();
			} list.pop_front(); 
			count+= left;
		} else { 
			for (int i = 1; i <= right; i++) {
				list.push_front(list.back()); 
				list.pop_back(); 
				}
			list.pop_front(); 
			count+= right;
		}
	}
	printf("%d",count);
}
