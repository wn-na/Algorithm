#include <stdio.h>
int arr[9];
int dp[9];

void dfs(int deep, int ans, int k){
	if(deep == 7){
		if(ans == 100){
			for(int i = 0; i < 9; i++)
				if(dp[i] == 1)
					printf("%d\n",arr[i]);
		}
	}else{
		for(int i = k; i < 9; i++){
			if(dp[i] == 0){
				dp[i] = 1;
				dfs(deep+1,ans+arr[i],i);
				dp[i] = 0;
			}
		}
	}
}
int main(void) {
	for(int i = 0; i < 9; i++) scanf("%d",&arr[i]);
	dfs(0,0,0);
	return 0;
}
