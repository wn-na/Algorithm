#include <stdio.h>

int n,arr[9],arrt[9],arrk[9],arrq[9];
int func(int*a,int*b){return *a>*b;}
int funt(int*a,int*b){return *a<*b;}
int abs(int a){return a>0?a:-a;}
int max(int a, int b){return a>b?a:b;}
int main(void) {
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		scanf("%d ",&arr[i]);
		arrt[i]=arr[i];
	}
	qsort(arr+1,n,sizeof(int),func);
	qsort(arrt+1,n,sizeof(int),funt);
	int sum = 0, sumt = 0;
	if(n % 2){
		arrk[1] = arr[n/2];
		arrq[1] = arrt[n/2]; 
		for(int i = 2, j = 1; i < n; i+=2,j++){
			arrk[i]=arrt[j];
			arrk[i+1]=arr[j];
		}
		for(int i = 2, j = 1; i < n; i+=2,j++){
			arrq[i+1]=arrt[j];
			arrq[i]=arr[j];
		}
		arrk[n]=arrq[n]=arr[n/2+1];
		for(int i = 1; i < n; i++){
			sum+=abs(arrk[i]-arrk[i+1]);
			sumt+=abs(arrq[i]-arrq[i+1]);
		}
		printf("%d",sum>sumt?sum:sumt);
	}else{
  // a1 bm a2 bm-1 ... 
		for(int i = 1, j = 1; i < n; i+=2,j++){
			arrk[i]=arrt[n/2-j+1];
			arrk[i+1]=arr[j];
		}
		for(int i = 1; i < n; i++){
			sum+=abs(arrk[i]-arrk[i+1]);
		}
		printf("%d",sum);
	}
	
	return 0;
}
