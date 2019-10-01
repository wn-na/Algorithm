#include <stdio.h>

void print(int t){
  int arr[100001] = {}, k = t;
  for(int i = 2; k > 1; ){
	  if(k % i == 0){
		  ++arr[i];
		  k /= i;
	  }else{
      ++i;
    }
  }

  for(int i = 2; i <= t; ++i){
	  if(arr[i] > 0) printf("%d %d\n", i, arr[i]);
  }
}

int main(void) {
	int t;
	scanf("%d", &t);
	for(; t--;){
		int k;
		scanf("%d", &k);
		print(k);
	}
	return 0;
}
