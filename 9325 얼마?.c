#include <stdio.h>

int main(void) {
	int t,s,y,q,w;
	scanf("%d",&t);
	for(;t--;){
		scanf("%d",&s);
		scanf("%d",&y);
		for(;y--;){
			scanf("%d %d",&q,&w);
			s+=q*w;
		}
		printf("%d\n",s);
	}
	return 0;
}
