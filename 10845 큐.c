#include <stdio.h>
#include <string.h>

/*
  원리는 큐의 경우 FIFO이기 때문에,
  처음 들어온 위치를 front,
  뒤에 들어온 위치를 idx로 지정
  
  idx==front면 큐가 빈 상태인거고, 그게 아니면 큐안에 정수가 존재.
*/
int queue[10001] = {0,};
int main(void) {
	int n,k,idx = 0, front = 0;
	char command[8];
	scanf("%d ",&n);
	for(;n--;){
		scanf("%s", command);
		if(strcmp(command, "push") == 0){
			scanf("%d ", &k);
			queue[idx++] = k;
		}
		if(strcmp(command, "pop") == 0){
			printf("%d\n",idx==front?-1:queue[front++]);
		}
		if(strcmp(command, "size") == 0){
			printf("%d\n",idx-front);
		}
    if(strcmp(command, "empty") == 0){
			printf("%d\n",(idx==front)?1:0);
		}
    if(strcmp(command, "front") == 0){
			printf("%d\n",(idx==front)?-1:queue[front]);
		}
    if(strcmp(command, "back") == 0){
			printf("%d\n",(idx==front)?-1:queue[idx-1]);
		}
	}
	
	return 0;
}
