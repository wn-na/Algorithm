#include <stdio.h>

int arr[13] = {1,};

int fact(int i){
    int k = i;
    for(;--i;) k*=i;
    return k;
}

int main(){
    int N, K, result;
    scanf("%d %d",&N,&K);
    for(int i = 1; i < 11; i++) arr[i] = fact(i);
    result = arr[N] / (arr[K] * arr[N-K]);
    printf("%d",result);
}
