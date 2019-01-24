#include<stdio.h>
#define MAX 1000001
int arr[103]={};
int dp[MAX] = {};

int min(int a,int b){return a<b?a:b;}

int main(){
	int n, k;
	scanf("%d %d ", &n, &k);
	for(int i = 1; i <= n; i++){
		scanf("%d",&arr[i]);
	}
    for(int i =1;i<= k; i++) d[i] = MAX;
    
    for(int i = 1; i<=n;i++){
        for(int j = arr[i]; j <= k; j++){
        // 현자신 vs 증가-자신+1
            dp[j] = min(dp[j], dp[j-arr[i]]+1);
        }
    }
    if(d[k] == MAX) printf("-1");
    else printf("%d",d[k]);
}
