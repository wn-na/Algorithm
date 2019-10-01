#include <stdio.h>
int arr[101][101] = {0,}, N;

void printArr(){
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){
			printf("%d ",arr[i][j]);
		}
		puts("");
	}
}

int main(void) {
	scanf("%d ",&N);
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){
			scanf("%d ",&arr[i][j]);
		}
	}
	
	for(int k = 1; k <= N; k++){ // mid
		for(int i = 1; i <= N; i++){ // start
			for(int j = 1; j <= N; j++){ // fin
				if(arr[i][k] && arr[k][j]){ // 간선이 존재하면
					arr[i][j] = 1; // 1로 정의
				}
			}
		}
	}
	printArr();
	
	return 0;
}
