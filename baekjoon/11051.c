#include<stdio.h>
int list[1001][1001];
const int MOD = 10007;
int main(){
    int  N, K;
    scanf("%d %d",&N,&K);
    list[1][0] = list[1][1] = 1;
    for(int i = 2; i <= N; i++){
        for(int j = 0; j <= i; j++){
            // nCn, nC0 = 1
            if(i == j || j == 0) list[i][j] = 1;
            else list[i][j] = list[i-1][j-1] + list[i-1][j];
            list[i][j] %= MOD;
        }
    }
    
    printf("%d",list[N][K]);
}#include<stdio.h>
int list[1001][1001] = {1};
const int MOD = 10007;
int main(){
    int  N, K;
    scanf("%d %d",&N,&K);
    for(int i = 1; i <= N; i++){
        for(int j = 0; j <= i; j++){
            // nCn, nC0 = 1
            if(i == j || j == 0) list[i][j] = 1;
            // nCr = n-1Cr-1 + n-1Cr
            else list[i][j] = list[i-1][j-1] + list[i-1][j];
            list[i][j] %= MOD;
        }
    }
    
    printf("%d",list[N][K]);
}
