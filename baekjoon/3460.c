#include <stdio.h>
int arr[30] = {1,};
int main(void) {
	int n,k;
	for(int i = 1 ; i < 22; i++)
		arr[i] = arr[i-1]*2;
	scanf("%d",&n);
	for(;n--;){
		int ans[21] = {0,};
		scanf("%d",&k);
		for(int i = 21; i >= 0; i--){
			ans[i] = k / arr[i] ;
			k %= arr[i];
		}
		for(int i = 0; i < 22; i++) if(ans[i]) printf("%d ",i);
		puts("");
	}
	return 0;
}
