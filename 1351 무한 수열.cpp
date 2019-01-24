#include <cstdio>
#include <map>
using namespace std;
typedef unsigned long long ull;
ull N, P, Q;
map <ull, ull> m;
ull dp(ull x) {
    if (x == 0)
        return 1;
    if (m[x] != 0)
        return m[x];
    return m[x] = dp(x / P) + dp(x / Q);
}
int main() {    
    scanf("%lld%lld%lld", &N, &P, &Q);
    printf("%lld\n", dp(N));
    return 0;
}
