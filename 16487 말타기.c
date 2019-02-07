#include <stdio.h>

int main(void) {
	int a,b,c,m;
	scanf("%d%d%d%d",&a,&b,&c,&m);
	printf("%.13lf",1.*(c*c*m+a*a*(b-m))/b-(b-m)*m);
	return 0;
}
