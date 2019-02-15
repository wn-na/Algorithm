#include <stdio.h>
int arr[51][51];
int max(int a, int b){return a>b?a:b;}
int min(int a, int b){return a<b?a:b;}
int isSquare(int y, int x, int len){return arr[y][x] == arr[y][x+len] && arr[y][x] == arr[y+len][x] && arr[y][x] == arr[y+len][x+len];}
int main(void) {
	int n, m, res = 1 ,k;
	scanf("%d%d",&n,&m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%1d",&arr[i][j]);
		}
	}

	for(int	k = min(n,m)-1; k > 0; k--){
		for(int i = 0; i < n - k; i++){
			for(int j = 0; j < m - k; j++){
				if(isSquare(i,j,k))
					res = max(res,k+1);
			}
		}
	}
	printf("%d",res*res);
	
	return 0;
}
