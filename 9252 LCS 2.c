#include <stdio.h>
#include <string.h>
int max(int a, int b){return a>b?a:b;}
char a[1003],b[1003];
int c[1003][1003] = {0,};
int main(void) {
	int q,w;
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
	
	printf("%d\n",c[q][w]);
	char k[1000] = {0,};
	int e = 0;
    while (c[q][w] != 0){
        if (c[q][w] == c[q][w-1])  w--;
        else if (c[q][w] == c[q-1][w])  q--;
        else if (c[q][w] - 1 == c[q-1][w-1]){
            k[e] = a[q-1];
            q--;
            w--;
            e++;
        }
    }
    k[e] = '\0';
    for(;e--;) printf("%c",k[e]);
	
	
	return 0;
}
