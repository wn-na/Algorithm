#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int val = 0;
	int N, B, W, b = 0, w = 0;
	string s;
	queue<char> q;
	cin >> N >> B >> W >> s;
	
	for(int i = 0; i < N; i++){
		q.push(s[i]);
		if(s[i] == 'W') w++;
		else b++;
		
		if(b <= B && w >= W) val = max(val, (int)q.size());
		else if(b > B){
			while(b > B){
				char t = q.front();
				q.pop();
				if(t == 'W') w--;
				else b--;
			}
		}
		
	}
	
	cout << val;
	return 0;
}