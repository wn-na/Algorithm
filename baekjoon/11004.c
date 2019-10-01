#include <stdio.h>
int n, k, arr[5000005];
int func(int *a,int*b){return *a>*b;}
int main(){
    scanf("%d%d",&n,&k);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),func);
    printf("%d",arr[k-1]);
}
