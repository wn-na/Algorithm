#include <stdio.h>
int main(void) {
	for(int i = 1000; i < 10000;i++){
		int hex=0,ten=0,tii=0;
		for(int n = i; n > 0; n/=10) ten+= n% 10;
		for(int n = i; n > 0; n/=12) tii+= n% 12;
		for(int n = i; n > 0; n/=16) hex+= n% 16;
		if(hex == ten && hex ==  tii) printf("%d\n",i);
	}
	return 0;
}
