#include <stdio.h>
int arr[1001] = {0,};

int find(int start, int i, int visit[1001]){
  //if(visit[i] == 1)
		//if(i == start) return 1;
		//else return 0;
	visit[i] = 1;
	if(arr[i] == start) return 1;
	find(start, arr[i], visit);
}
int main(void) {
	int t,N,tmp;
	scanf("%d ",&t);
	for(;t--;){
		int count = 0;
		int visit[1001] = {0,};
		scanf("%d ",&N);
		for(int i = 1; i <= N; i++){
			scanf("%d ",&tmp);
			arr[i] = tmp;
		}

		for(int i = 1; i <= N; i++){
			if(visit[i] != 1){
				count += find(i,i,visit);
			}
		}
		printf("%d\n",count);
		
	}
	return 0;
}
