#include <stdio.h>
 
int main(void) {
	int n,m,k,l;
	scanf("%d%d%d",&n,&m,&k);
	for(int i = 0; i < k; i++){
		if(n>2*m)n--;
		else m--;
	}
	printf("%d",n>2*m?m:n/2);
	return 0;
}
