#include <stdio.h>

int arr[3];
int func(int*a,int*b){return *a>*b;}
int main(void) {
	int a;
	for(int i = 0; i < 3; i++){
		scanf("%d ",&arr[i]);
	}
	qsort(arr,3,sizeof(int),func);
	for(int i = 0; i < 3; i++){
		char k;
		scanf("%c",&k);
		printf("%d ",arr[k-'A']);
	}
	return 0;
}
