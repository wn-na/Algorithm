#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;
	queue<int> dq,oq;
	for(int i = 1; i <= n; i++) dq.push(i);
	for(;dq.size();){
		oq.push(dq.front());
		dq.pop();
		dq.push(dq.front());
		dq.pop();
	}
	for(;oq.size();oq.pop())
		cout << oq.front() << " ";
	return 0;
}
