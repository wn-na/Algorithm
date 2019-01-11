#include <stdio.h>
int n[102],dp[10001];
int main(){
int k,result = 0, val;
scanf("%d %d",&k,&val);
for(int i = 1;i<=k;i++) scanf("%d",&n[i]);

dp[0] = 1;

for(int i = 1; i <= k; i++){
	for(int j = 1; j <= val; j++){
		// j가 값보다 크면, j-값을 만들 수 있는경우의 수를 그값에 더한다. 그러면 모든 경우를 세니까
		if(j >= n[i])
			 dp[j] += dp[j - n[i]];
	}	
}
printf("%d",dp[val]);

}
