#include <stdio.h>

int arr[3] = {1,2,3};

void swap(int a, int b){
	int *aa = (a==arr[0])?&arr[0]:(a==arr[1])?&arr[1]:&arr[2];
	int *bb = (b==arr[0])?&arr[0]:(b==arr[1])?&arr[1]:&arr[2];
	int tmp = *aa;
	*aa = *bb;
	*bb = tmp;
}
int main(void) {
	int n;
	scanf("%d ",&n);
	for(int i = 0; i < n; i++){
		int x,y;
		scanf("%d %d ",&x,&y);
		swap(x,y);
	}
	printf("%d",arr[0]);
	return 0;
}
