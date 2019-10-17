int main(){
    int n;
    scanf("%d ",&n);
    for(int i = 0; i < n; i++){
        double s;
        scanf("%lf ", &s);
        printf("$%.2lf\n",s * 0.8);
    }
}