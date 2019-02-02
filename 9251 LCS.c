#include <stdio.h>
#include <string.h>
int max(int a, int b){return a>b?a:b;}
char a[1003],b[1003];
int c[1003][1003] = {0,};
int main(void) {
	int k = 0,q,w;
    gets(a);
    gets(b);
	q=strlen(a);
	w=strlen(b);
	for(int i = 0; i < q; i++){
		for(int j = 0; j < w; j++){
			if(a[i] == b[j]) {
				c[i+1][j+1] =  c[i][j]+1;
			}else{
				c[i+1][j+1] = max(c[i][j+1],c[i+1][j]);
			}
		}
	}
	
	printf("%d",c[q][w]);
	return 0;
}
