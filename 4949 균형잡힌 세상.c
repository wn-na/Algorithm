#include <stdio.h>
#include <string.h>

char str[102];
int main(void) {
	for(;gets(str);){
		if(strcmp(str,".") == 0) break;
		char st[100] = {};
		int st_size = 0, error = 0;
		for(int i = 0; str[i] != '\0'; ++i){
			if(str[i] == '(') st[st_size++] = '(';
			if(str[i] == '[') st[st_size++] = '[';
			if(str[i] == ')') 
				if(st_size == 0 || st[st_size-1] != '('){
					error=1;
					break;
				}else{
					--st_size;
				}
			if(str[i] == ']') 
				if(st_size == 0 || st[st_size-1] != '['){
					error=1;
					break;
				}else{
					--st_size;
				}
		}
		puts(st_size||error?"no":"yes");
	}
	return 0;
}
