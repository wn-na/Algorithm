#include <stdio.h>
int n,r=1;
char arr[51][51];
int max(int a, int b){return a>b?a:b;}
int colormax(){
	int c=1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-1; j++){
			if(arr[i][j] == arr[i][j+1]) c++;
			else {
				r = max(r,c);
				c = 1;
			}
		}
		r = max(r,c);
		c = 1;
		for(int j = 0; j < n-1; j++){
			if(arr[j][i] == arr[j+1][i]) c++;
			else {
				r = max(r,c);
				c = 1;
			}
		}
		r = max(r,c);
		c = 1;
	}
	return r;	
}
void swap(int y,int x,int b,int a){char k = arr[b][a];arr[b][a] = arr[y][x];arr[y][x] = k;}
int dx[]={0,1};
int dy[]={1,0};
int main(void) {
	scanf("%d ",&n);
	for(int i = 0; i < n; i++) gets(arr[i]);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < 2; k++){
				int x = j+dx[k], y = i + dy[k];
				if(x >= n || y >= n) continue;
				swap(y,x,i,j);
				colormax();
				swap(y,x,i,j);
			}
		}
	}
	printf("%d",r);
	return 0;
}
