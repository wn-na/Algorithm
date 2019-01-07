/*
  >> Min = 6 -> 5
  >> Max = 5 -> 6
*/
a,b,j,t;main(x){for(;~scanf("%d",&x);)for(j=1e6;j;j/=10)t=x/j%10,a+=j*(t-6?t:5),b+=j*(t-5?t:6);printf("%d %d",a,b);}
