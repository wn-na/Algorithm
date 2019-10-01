#include <stdio.h>

int main(void) {
	int t, max=0, i=0;
	for(int j = 0; j < 91; j++){
		scanf("%d",&t);
		if(t>max)max=t,i=j;
	}
	printf("%d\n%d %d",max,i/9+1,i%9+1);
	return 0;
}
