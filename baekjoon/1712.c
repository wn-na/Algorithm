#include <stdio.h>

int main(){
    int a,b,c,r;
    scanf("%d%d%d",&a,&b,&c);
    if(c-b<=0)
      puts("-1");
    else 
      printf("%d",r = a/(c-b) + 1);
}
