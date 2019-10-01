int main(){
    int n,cnt=0,num=2,temp=1;
    scanf("%d",&n);
    int t=n;
    for(int i=2;i<n;i++){
        while(t%i==0){
            cnt++;
            t/=i;
        }
    }
    for(;cnt>num;temp++)num*=2;
    printf("%d",cnt==0?0:temp);
}
