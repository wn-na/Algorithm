#include <stdio.h>
int func(int *a, int *b){return *a>*b;}
int main(void) {
	int arr[10] = {0,}, sum = 0;
	for(int i = 0; i < 9; i++){
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	qsort(arr,9,sizeof(int),func);
	
	for(int i = 0; i < 9; i++){
		for(int j = i; j < 9; j++){
			if(i == j) continue;
			if(sum - arr[i] - arr[j] == 100){
				for(int k = 0; k < 9; k++)
					if(k != i && k != j) printf("%d\n",arr[k]);
			}
		}
	}
	
	return 0;
}
