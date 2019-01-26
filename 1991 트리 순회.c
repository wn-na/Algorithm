#include <stdio.h>

int arr[27][2] = {0,};
/* 트리를 배열로 구현 */
int pre_order(int i){
	printf("%c",i+'A');
	if(arr[i][0] != -1) pre_order(arr[i][0]);
	if(arr[i][1] != -1) pre_order(arr[i][1]);
}
int in_order(int i){
	if(arr[i][0] != -1) in_order(arr[i][0]);
	printf("%c",i+'A');
	if(arr[i][1] != -1) in_order(arr[i][1]);
}
int post_order(int i){
	if(arr[i][0] != -1) post_order(arr[i][0]);
	if(arr[i][1] != -1) post_order(arr[i][1]);
	printf("%c",i+'A');
}

int main(void) {
	int k;
	scanf("%d ",&k);
	for(int i = 0; i < k ; i++){
		char q,w,e;
		scanf("%c %c %c ",&q,&w,&e);
		arr[q-'A'][0] = (w == '.') ? -1 : w - 'A';
		arr[q-'A'][1] = (e == '.') ? -1 :e - 'A';
	}
	
	pre_order(0); puts("");
	in_order(0); puts("");
	post_order(0);
	
	return 0;
}
