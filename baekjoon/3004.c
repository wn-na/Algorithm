int main(){
    int n;
    scanf("%d", &n);
    int k = n/2 + 1;
    printf("%d", k * (k + n % 2));
}