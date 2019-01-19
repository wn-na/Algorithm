#include <stdio.h>
#include <stdlib.h>

long long int arr[10001] = {0,};
int N, k;

int main(){
	long long int max = 0, left = 0, right = 99999999999999;
	scanf("%d %d ",&k,&N);
	for(int i = 0; i < k ; i++){
		scanf("%lld ",&arr[i]);
	}
	while(left<=right){
		long long mid = (left + right) / 2;
		int result = 0;
		
		for(int i = 0; i < k; i++)
			result += arr[i]/mid;
		
		if(result >= N){
			left = mid + 1;
			if(mid > max) max = mid;
		}
		else
			right = mid - 1;
		
		
	}
	
	
	printf("%d",max);
	
}
