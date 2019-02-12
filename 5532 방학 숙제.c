#include <stdio.h>
 
int main(void) {
	int l,a,b,c,d;
	scanf("%d%d%d%d%d",&l,&a,&b,&c,&d);
	for(;a>0||b>0;l--){
		a-=c;
		b-=d;
	}
	printf("%d",l);
	return 0;
}
