#ifdef SHORTCODE
char t[];main(){for(gets(t);gets(t);puts("not nice"+(abs(676**t+26*t[1]+t[2]-45695-atoi(t+4))<101)*4));}
#endif
#ifndef SHORTCODE
#include <stdio.h>

int main(){
  int k,n,ln;
  char t[4];
  scanf("%d",&k);
  for(;k--;){
    ln = 0;
    scanf("%3s-%d",t,&n);
    for(int i = 0; i < 3; i++)
      ln = ln * 26 + t[i]-'A';
    if(abs(ln-n)<101)
      puts("nice");
    else
      puts("not nice");
  }
}
#endif
