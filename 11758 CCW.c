#include <stdio.h>

int main(){
    int x[3], y[3], result;
    for(int i = 0; i < 3; ++i){
        scanf("%d %d ", &x[i], &y[i]);
    }
    result = (x[1] - x[0]) * (y[2] - y[0]) - (y[1] - y[0]) * (x[2] - x[0]);
    printf("%d",result > 0? 1: result < 0? -1: 0);
}
