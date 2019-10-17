int main(){
    int a[100] = {0,};
    int n, f = 0;
    scanf("%d", &n);
    for(int i = 0; n; i++){
        a[i] = n % 9;
        n /= 9;
    }
    for(int i = 99; i >= 0; i--){
        if(a[i] == 0 && f == 0) continue;
        else {
            f = 1;
            printf("%d",a[i]);
        }
    }
}