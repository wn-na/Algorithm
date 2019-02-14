#include <stdio.h>
int main(void) {
	int x,y,q=0,w=0,k=0,flag = 0;
	scanf("%d %d",&x,&y);
	for(int i = 0; i < 24 && !flag; i++){
		for(int j = 0; j < 60; j++){
			if(x==q){
				if(y == w) printf("O");
				else printf("X");
				flag = 1;
				break;
			}
			w = (w+6)%360;
			k = (k+1)%2;
			if(k == 0) q += 1;
		}
	}
}
