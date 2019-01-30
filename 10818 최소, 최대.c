#include <stdio.h>

int main(){
    int max = -10000000;
    int min = -max;
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int k;
        scanf("%d",&k);
        if(k>max)max=k;
        if(k<min)min = k;
    }
    printf("%d %d",min, max);
}
