#include <stdio.h>

int main(void) {
	int sum = 0, takeoff, ride, max = 0;
	for(int i = 0; i < 10; i++){
		scanf("%d %d ",&takeoff, &ride);
		sum -= takeoff;
		sum += ride;
		if(max < sum) max = sum;
	}
	printf("%d",max);
	return 0;
}
