#include <stdio.h>

int a[100][100];
int b[100][100];
int ans[100][100];
int n,m,k;
int main(){
    scanf("%d%d",&n,&m);
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++)
            scanf("%d",&a[i][j]);
    scanf("%d%d",&m,&k);
    for(int i = 0; i < m; i++)
        for(int j = 0; j < k; j++)
            scanf("%d",&b[i][j]);
    for(int i = 0; i < n; i++)
		for(int j = 0; j < k; j++)
    		for(int q = 0; q < m; q++) 
    			ans[i][j] += a[i][q] * b[q][j];
    for(int i = 0; i < n; i++, puts(""))
        for(int j = 0; j < k; j++) 
            printf("%d ",ans[i][j]);
}
