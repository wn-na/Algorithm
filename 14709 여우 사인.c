#include <stdio.h>
int arr[6];
int main(void) {
	int x,y,n;
	scanf("%d",&n);
  if(n <= 2 || n >= 4) {puts("Woof-meow-tweet-squeek");return 0;}
	for(;n--;){
		scanf("%d%d",&x,&y);
		arr[x] = arr[y] = 1;
	}
	if(arr[2] == 0 && arr[5] == 0 && arr[1] &arr[3]&&arr[4]) puts("Wa-pa-pa-pa-pa-pa-pow!");
	else puts("Woof-meow-tweet-squeek");
	return 0;
}
