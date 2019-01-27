#include <stdio.h>
char arr[5][16] = {0,};
int main(void) {
	int max = 0;
	for(int i = 0; i < 5; i++)
		{scanf("%s",arr[i]);
		max=max<strlen(arr[i])?strlen(arr[i]):max;
	}
	
	for(int i = 0; i < max; i++){
		for(int j = 0; j < 5; j++){
			if(arr[j][i] != '\0') putchar(arr[j][i]);
		}
	}
	return 0;
}
