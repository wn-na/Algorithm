#include <stdio.h>
int arr[2002] = {0,};
int main(void) {
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		int k;
		scanf("%d",&k);
		arr[k+1000]++;
	} 
	for(int i = 0; i < 2002; i++) if(arr[i]) printf("%d ",i-1000);
	
	return 0;
}
