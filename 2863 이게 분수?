#ifdef SHORTCODE
float q[4],a,d;k,i;main(b,c){scanf("%f%d%d%f",&a,&b,&c,&d);*q=a/c+b/d;q[1]=c/d+a/b;q[2]=d/b+c/a;for(q[3]=b/a+d/c;i<4;)q[i]>q[k]?k=i:i++;printf("%d",k);}
#endif
#ifndef SHORTCODE
#include <stdio.h>
int main(){
  int a,b,c,d,k=0;
  double q[4],t=0;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  q[0]=a*1./c+b*1./d;
  q[1]=c*1./d+a*1./b;
  q[2]=d*1./b+c*1./a;
  q[3]=b*1./a+d*1./c;
  for(int i =0;i<4;i++)
    if(q[i]>t) t = q[i],k=i;
  printf("%d",k);
}
#endif
