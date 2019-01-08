#ifdef SHORTCODE
q[99],i,a,b,e;main(k){for(gets(&k);~scanf("%d",q+i++););for(k=--i,a=q[1]-*q?(q[2]-q[1])/(q[1]-*q):a;--i;q[i]-q[i-1]*a-b?e=1:0)b=q[1]-a**q;printf(k<3?k-1?*q-q[1]?"A":"%d":"A":e?"B":"%d",k<3?*q:q[k-1]*a+b);}
#endif
#ifdef NORMAL
#include <stdio.h>
/*
k = 1 -> next val is inf
k = 2 -> if a == b then val is a
         else val is inf
else if a*x[i] + y != a*x[i-1] + y then val is nothing
     else val is a*x[i+1]+y
*/
int main(){
int k,a,b,e=0;
int aa[100];
scanf("%d",&k);

for(int i = 0; i < k; i++){
scanf("%d",&aa[i]);
}

if(k == 1) printf("A");
else if (k == 2){
	if(aa[0] == aa[1]) printf("%d",aa[0]);
	else printf("A");
}else{
        a = 0;
        int x = aa[1] - aa[0];
        int y = aa[2] - aa[1];
        if (x != 0) a = y / x;
        b = aa[1] - a*aa[0];
	for(int i = 1;i < k;i++){
		if(aa[i] != aa[i-1]*a+b){
		e = 1;
		break;
		}
	}
	if(e) printf("B");
	else printf("%d",(aa[k-1]*a+b));
}

}
#endif
