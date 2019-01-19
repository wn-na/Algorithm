#include <stdio.h>

int arr[500001] = {0,};

int func(int *a, int*b){ return *a>*b;}

int main(){
  int n,m;
  scanf("%d ",&n);
  for(int i = 0; i < n; i++)
    scanf("%d ",&arr[i]);
  qsort(arr,n,sizeof(int),func);
  
  scanf("%d ",&m);
  for(int i = 0; i < m; i++){
    int a;
	  int left = 0;
	  int right = n;
    scanf("%d ",&a);
	  while(left<right){
	   int mid = (left+right)/2;
	   if(arr[mid] > a) right = mid -1;
	   else if(arr[mid] < a) left = mid + 1;
	   else break;
	  }
	  printf(arr[(left+right)/2] == a?"1 ":"0 ");
  }
}
