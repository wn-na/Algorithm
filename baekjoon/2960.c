#include <stdio.h>
int arr[1001] = {0,};
int main(void) {
	int n, k ,q;
	scanf("%d%d",&n,&k);
	for(int j = 2; k && j <= n; j++ ){
		if(arr[j]) continue;
		for(int i = 1; k &&i*j <= n; i++){
			if(arr[i*j] == 1) continue;
			else {
				arr[q=i*j] = 1;
				k--;
			}
		}
	}
	printf("%d",q);
	return 0;
}
