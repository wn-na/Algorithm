#include <stdio.h>
int arr[1000001] = {0,1,2,4,7};

int main(void) {
	int k,t;
	for(int i = 4; i <= 1e6;i++)arr[i] = ((long long)arr[i-1]+arr[i-2]+arr[i-3])%(int)1000000009;
	for(scanf("%d",&k);k--;printf("%d\n",arr[t]))scanf("%d",&t);
	return 0;
}
