#ifdef SHORTCODE
s[],t;main(a){for(gets(s);~scanf("%s",&a);a-4?printf("%d ",a%3?a-5?!t:t:t?s[a?t--:t]:~t):scanf("%d",++t+s))a%=7;}
#endif
#ifndef SHORTCODE
#include <stdio.h>
#include <string.h>

int stack[100];
int stackptr = 0;

void push(int val){
    stack[stackptr] = val;
    ++stackptr;
}
void pop(){
    if(stackptr == 0)
        printf("-1\n");
    else{
	--stackptr;
        printf("%d\n",stack[stackptr]);
    }
}

void size(){
    printf("%d\n",stackptr);
}

void empty(){
    if(stackptr == 0)
        printf("1\n");
    else
        printf("0\n");
}
void top(){
    if(stackptr == 0)
        printf("-1\n");
    else{
        printf("%d\n",stack[stackptr-1]);
    }
}

int main(){
    int n, val;
    char command[100];
    scanf("%d",&n);
    
    for(int i = 0; i < n; ++i){
        scanf("%s",command);
        if(strcmp(command,"push") == 0){
            scanf("%d",&val);
            push(val);            
        }
	if(strcmp(command,"pop") == 0){
            pop();            
        }
	if(strcmp(command,"size") == 0){
            size();            
        }
	if(strcmp(command,"empty") == 0){
            empty();            
        }
	if(strcmp(command,"top") == 0){
            top();            
        }
    }
}
#endif
