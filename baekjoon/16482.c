int a,b,c,af,bd;
int main(){
    scanf("%d %d %d %d %d",&a,&b,&c,&af,&bd);
    printf("%.13lf",1.*((c-af)*(a-bd)*b)/(af*bd+(c-af)*(a-bd)));
}
