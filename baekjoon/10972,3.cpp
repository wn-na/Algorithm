#include<cstdio>
#include<algorithm>
using namespace std;
int s[10000];
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &s[i]);
 #ifdef 10973
    if (prev_permutation(&s[0], &s[n]))
 #endif
 #ifdef 10972
    if (next_permutation(&s[0], &s[n]))
 #endif        
        for (int i = 0; i < n; ++i) printf("%d ", s[i]);
    else 
        printf("-1");
}
 
