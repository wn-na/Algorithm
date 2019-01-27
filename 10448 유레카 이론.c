#include <stdio.h>
int arr[46] = {0,};

int is_eureka(int a){
	for(int i = 1; i < 45; i++)
		for(int j = 1; j < 45; j++)
			for(int k = 1; k < 45; k++)
				if(arr[i] + arr[j] + arr[k] == a) return 1;
	return 0;
}


int main(void) {
	int n, k;
	for(int i = 1; i < 45; i++) arr[i] = arr[i-1] + i;
	scanf("%d",&n);
	for(int i = 0; i < n ; i++){
		scanf("%d", &k);
		printf("%d\n",is_eureka(k));
	}
	return 0;
}
