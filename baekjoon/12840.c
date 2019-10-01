#ifdef SHORTCODE
n=86400,q=3600;main(y,m,s){scanf("%d%d%d%*d",&y,&m,&s);for(s+=y*q+m*60;~scanf("%d",&y);s+=n)y-3?scanf("%d",&m),s=(y-2?s+m:s-m)%n:printf("%d %d %d ",s%n/q,s%q/60,s%60);}
#endif
#ifndef SHORTCODE
#include <stdio.h>
int main(){
  int mod = 86400,q=0;
  int y,m,s,tc,k,f;
  scanf("%d%d%d",&y,&m,&s);
  q = y*3600+m*60+s;
  for(scanf("%d",&tc);tc--;){
    scanf("%d",&k);
    if(k == 3) {
      if(q<0)q+=mod;
      printf("%d %d %d\n",q/3600,q%3600/60,q%60);
    }else{
      scanf("%d",&f);
      if(k==2) q = (q-f) % mod;
      else q = (q+f) % mod;
    }
  }
}
#endif
