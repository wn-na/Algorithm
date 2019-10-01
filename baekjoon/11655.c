#include <stdio.h>

int main(void) {
	int k;
	for(;~(k=getchar());){
		if(k >='a' && k <='z')
			putchar((k - 'a' + 13)%26+'a');
		else if(k >='A' && k <='Z')
			putchar((k - 'A' + 13)%26+'A');
		else putchar(k);
	}
	return 0;
}
