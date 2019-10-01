int arr[100002] = {0,};
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i = 1; i <= n ; i++){
        scanf("%d",&arr[i]);
        arr[i] += arr[i-1];
    }
    for(int i = 1; i <= m; i++){
        int start, fin;
        scanf("%d %d",&start, &fin);
        printf("%d\n",arr[fin] - arr[start-1]);        
    }
}
