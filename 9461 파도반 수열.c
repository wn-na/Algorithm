#include<stdio.h>

long long int arr[103] = {0,1,1,1};

int main(){
    int i, t;
    for(i = 4; i < 102; i++) arr[i] = arr[i-2] + arr[i-3];
    scanf("%d",&t);
    for(;t--;){
        scanf("%d",&i);
        printf("%lld\n",arr[i]);
    }
}
