#include <iostream>
using namespace std;
int main() {
 
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);
 
    long long a,b;
    cin >> a >> b;
    if (a > b) {
        swap(a, b);
    }
 
    long long sol = ((b - a + 1) * (a + b) / 2);
    cout << sol<< "\n";
    return 0;
}
