a['zzz'],c=7,i=1e3;main(n,x,y){for(scanf("%d",&n);n--;a[x*i+y]++)scanf("%d.%d",&x,&y);for(x=0;c>0;x++){for(;a[x]--&&c--;)printf("%d.%03d ",x/i,x%i);}}
