#include <stdio.h>

int arr[60][3] = {0,};

int main() {
	int n;
	 scanf("%d ",&n);
	 for(int i = 0; i < n; i++)
		scanf("%d %d ",&arr[i][0], &arr[i][1]);
	 
	 for(int i = 0; i< n; i++){
	 	int count = 1;
	 	for(int j = 0; j < n; j++){
	 		if(i == j) continue;
	 		if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
	 			count++;
	 	}
	 	arr[i][2] = count;
	 }
   
	 for(int i =0 ; i < n; i++)	 printf("%d ",arr[i][2]);
	return 0;
}
