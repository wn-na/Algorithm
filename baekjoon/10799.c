#include <stdio.h>
	char arr[100001];
int main(void) {
	int k =0, e = 0;
	gets(arr);
	for(int i = 0; arr[i] != '\0'; i++){
		if(arr[i] == '(') e++;
		if(arr[i] == ')') {
			e--;
			if(arr[i-1] == '(') k+=e;
			else k++;
		}
	}
	printf("%d",k);
	
}
