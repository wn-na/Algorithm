#include <stdio.h>

int arr[101] = {0,};
int main(void) {
	int max = 0, f = 0 , u = 0;
	for(int i = 0; i < 10; i++){
		int k;
		scanf("%d",&k);
		f+=k;
		arr[k/10]++;
		if(arr[k/10] > max) max = arr[k/10], u = k/10;
	}
	printf("%d\n%d",f/10,u*10);
	return 0;
}
