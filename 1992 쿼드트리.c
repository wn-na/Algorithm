#include <stdio.h>
int n, arr[64][64];

void quad_tree(int x, int y, int len){
	int type = arr[y][x];
	int flag = 1;
	for(int i = 0; i < len && flag; i++)
		for(int j = 0; j < len && flag; j++)
			if(type != arr[i+y][j+x]) flag = 0;
			
	if(flag == 1) printf("%d",type);
	else{
		printf("(");
    	quad_tree(x, y, len/2);
    	quad_tree(x+len/2, y, len/2);
    	quad_tree(x, y+len/2, len/2);
    	quad_tree(x+len/2, y+len/2, len/2);
		printf(")");
	}
}

int main(void) {
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			scanf("%1d",&arr[i][j]);
	quad_tree(0, 0, n);
	return 0;
}
