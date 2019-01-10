#ifdef SHORTCODE
i,a['zzz'],k,w,e;c(int *f,int *s){return *f>*s;}main(n){for(scanf("%d",&n);i<n;scanf("%d",a+i++));for(qsort(a,n,4,c);--n>1;e<w?k=k?k:e+w:0)w=a[n-1]+a[n-2],e=a[n];printf("%d",k?k:-1);}
#endif
#ifndef SHORTCODE
#include<stdio.h>
#include<stdlib.h>
int i= 0, a[1000001], n;
int compare(int* first, int* second){
  return *first>*second;  
}
int main() {
    scanf("%d", &n);
    for (;i<n;i++) scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),compare);
    for (i = n - 1,n=-1; i > 1; i--)
        if (a[i]<a[i-1]+a[i-2]) {
            n = a[i] + a[i-1] + a[i-2];
            break;
        }
    
    printf("%d",n);
    return 0;
}
#endif
