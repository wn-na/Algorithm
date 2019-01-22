#include <stdio.h>
int stack[100001] = {0,};
char answer[200000] = {0,};
int main(void) {
	int n, k, max = 0, stkidx = 0, ansidx = 0, flag = 0;
	scanf("%d ",&n);
	for(;n--;){
		scanf("%d ", &k);
    // 값이 높으면 넣어주는 과정 push
		if(k > max){
			for(int e = max; e < k; e++){
				stack[stkidx++] = e+1;
				answer[ansidx++] = '+';
			}
		} else{
    // pop할때 값이 아니면 에러
			if(stack[stkidx-1] != k){
				flag = 1;
        break;
			}
		}
		--stkidx;
		answer[ansidx++] = '-';
		if(k > max) max = k;
	}
  if(flag == 0){
	  for(int i = 0; i < ansidx; i++)printf("%c\n",answer[i]);
  }else{
		puts("NO");
  }
    return 0;
}
