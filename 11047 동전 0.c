#include <stdio.h>

int arr[11] = {0,};
int main(void) {
	int n, k, t = 0;
	scanf("%d %d ", &n, &k);
	for(int i = n-1; i >= 0; i--){
		scanf("%d ",&arr[i]);
	}
	for(int i = 0; i < n; i++){
		if(k == 0) break;
		if(k >= arr[i]){
			t += k / arr[i];
			k %= arr[i];
		}
	}
	printf("%d",t);
	return 0;
}
