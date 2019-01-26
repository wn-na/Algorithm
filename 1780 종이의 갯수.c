#include <stdio.h>

char arr[2200][2200] = {0,};
int count[3] = {0,};
void split(int x,int y, int n){
	int t = arr[x][y];
	for(int i = x; i < x+n; i++){
		for(int j = y; j < y+n; j++){
			if(t != arr[i][j]){t = -1;break;}
		}
		if(t==-1)break;
	}
	
	if(t == -1){
	for(int i = x; i < x+n; i+=n/3){
		for(int j = y; j < y+n; j+=n/3){
			split(i,j,n/3);
		}
	}
		
	}else{
		count[t-1]++;
		return;
	}
	
}
int main(void) {
	int k;
	scanf("%d",&k);
	for(int i = 0; i < k; i++){
		for(int j = 0; j < k; j++){
			int q;
			scanf("%d",&q);
			arr[i][j] = q + 2;
		}
	}
	// x1 y1 x2 y2
	split(0,0,k);
	
	printf("%d\n%d\n%d",count[0],count[1],count[2]);
	return 0;
}
