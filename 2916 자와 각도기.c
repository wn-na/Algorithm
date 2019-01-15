#include<stdio.h>
int c[360], n, m, x;
const int PI = 360;
int main() {
    scanf("%d%d",&n,&m);
    c[0] = 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        for (int j = 0; j < PI; j++) {
            if (!c[j]) continue;
            for (int k = 1; k < PI; k++) 
		          c[(j + k*x) % PI] = c[(PI * PI + j - k*x) % PI] = 1;
        }
    }
    for (int i = 0; i<m; i++) {
        scanf("%d", &x);
        puts(c[x] ? "YES" : "NO");
    }
}
