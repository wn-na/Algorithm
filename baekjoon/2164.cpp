#include <iostream>
#include <queue>
using namespace std;
 
int main() {
	int k;
	queue<int> qu;
	cin >> k;
	for(int i = 1; i <= k; ++i){
		qu.push(i);
	}
 
	for(int i = 1; qu.size() != 1; ++i){
		qu.pop();
		qu.push(qu.front());
		qu.pop();
	}
	cout << qu.front();
	return 0;
}
