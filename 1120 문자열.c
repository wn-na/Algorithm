#include <stdio.h>
char a[51],b[51];
int dp[51], max = 100000;
int main(void) {
	scanf("%s %s",a,b);
	int len = strlen(b)-strlen(a);
	for(int i = 0; i <= len; i++){
		for(int j = 0; j < strlen(a); j++){
			if(a[j] != b[j+i]) dp[i]++;
		}
	}
	for(int i = 0; i <= len; i++)max = max > dp[i]?dp[i] : max;
	printf("%d",max);
	return 0;
}
