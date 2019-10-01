#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int s[10000];
long long int fac[100] = {1,1},q;
bool dp[100];
int main() {
	int n,k,i;
	for(i = 1; i < 21;++i)
		fac[i] = fac[i-1] * i;
	scanf("%d%d",&n,&k);
	if(k == 1){
		long long int ans;
		scanf("%lld",&ans);
		for(int i = 0; i < n; i++){
			for(int j = 1; j <= n; j++){
				 if (dp[j] == true) continue;
				 if (fac[n-i-1] < ans){
                    ans -= fac[n-i-1];
                }else{
                    s[i] = j;
                    dp[j] = true;
                    break;
                }
			}
		}
		for(i = 0; i < n; ++i)
        	printf("%d ", s[i]);
		
		
	}else{
		for(i = 0; i < n; ++i)
        	scanf("%d", &s[i]);
        for(i = 0; i < n - 1; ++i){
        	k = 0;
        	for(int j = 1; j < s[i]; j++) if(dp[j] == false) k++;
        	q += (k)*fac[n-i-1];
        	dp[s[i]] = true;
        //	printf("%d(%d) %d * %d(%d) | %d\n",i,s[i],k,fac[n-i-1],n-i-1,q);
        }
        printf("%lld",q+1);
	}
	return 0;
}
