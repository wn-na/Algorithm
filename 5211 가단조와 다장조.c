#ifdef SHORTCODE
a,e,t;main(k){for(;~(k=getchar());e=k<80,k>64?t=k:t)e?:k-66?a+=k-67&&k-70&&k-71?:-1:0;!a?a=t-67&&t<70:0;puts(a<1?"C-major":"A-minor");}
#endif

#ifdef NORMAL
#include <stdio.h>
int main(){
  int c_major = 0, a_minor = 0,k,t,e=0;

  for(;~(k=getchar());){
    if(e==0){
      if(k == 'A' || k == 'D' || k == 'E')
        a_minor++;
      if(k == 'C' || k == 'F' || k == 'G')
        c_major++;
      e++;
    }else{
      e++;
      if(k == '|') e=0;
    }
    if(k == 'A' || k == 'D' || k == 'E' || k == 'C' || k == 'F' || k == 'G')
      t = k;
  }
  if(c_major==a_minor)
    if(t == 'A' || t == 'D' || t == 'E')
      a_minor++;
    if(t == 'C' || t == 'F' || t == 'G')
      c_major++;
  puts(c_major>a_minor?"C-major":"A-minor");
}

#endif
