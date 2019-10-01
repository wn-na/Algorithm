#ifdef SHORTCODE
long k,a[1010],n;main(i){for(;~scanf("%d",a+n++););for(n=a[i=n-2];--i;k+=(n+--a[i])/n*n);printf("%ld",k);}
#endif
#ifdef NORMAL
#include <stdio.h>
int main(){
    int l,k;
    long r = 0;
    int arr[1002];
    scanf("%d",&l);
    for(int i = 0; i< l; i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    
    for(int i = 0; i < l; i++){
        r += (arr[i]/k) +( arr[i]%k?1:0);
    }
    printf("%ld",r*k);
}
#endif
