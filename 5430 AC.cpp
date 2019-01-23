#include <stdio.h>
#include <iostream>
#include <deque>
#include <string.h>
using namespace std;

char command[100000];

int main(){
	int t;
	scanf("%d ",&t);
	for(;t--;){
		int count;
		scanf("%s ",command);
		scanf("%d ",&count);
		deque<int> dq;
		for(int i = 0; i < count; i++){
			int k;
			getchar();
			scanf("%d",&k);
			dq.push_back(k);
		}
		getchar();
		getchar();
		bool type = false, isEmpty = false;
        int len = strlen(command);
		for(int i = 0; i < len; i++){
			if(command[i] == 'R'){
				type = !type;
			}else{
				if(dq.size() == 0) {
					isEmpty = true;
					break;
				}else{
					if(type == false) dq.pop_front();
					else dq.pop_back();
				}
			}
		}
		if(isEmpty == false){
			printf("[");
			int size = dq.size();
			if(type == false){
				for(int i = 0; i < size; ++i, i < size?printf(","):0){
	        		printf("%d",dq[i]);
	    		}
			}else{
				for(int i = size - 1; i >= 0; --i, i >= 0?printf(","):0){
	        		printf("%d",dq[i]);
	    		}
			}
			printf("]\n");
		}else{
			puts("error");
		}
	}
}
