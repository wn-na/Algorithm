int arr[31]={0,};
int main(){
    int a;
    for(;~scanf("%d",&a);)arr[a] = 1;
    for(int i = 1; i<= 30; i++) if(arr[i]==0)printf("%d\n",i);
}
