int main(){
    long long int sum=2,n;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++){
    // 한변에 점이 0일때 2개 1일때 2+2-1개 2일때 3+3-1개... n일때 k + k-1
        sum = sum + (sum-1);
    }
    printf("%lld",sum*sum);
}
