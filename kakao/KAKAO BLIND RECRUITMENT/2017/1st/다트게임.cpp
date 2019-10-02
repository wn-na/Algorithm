#include <string>
#include <stack>
#include <cmath>
#include <cstdio>
#include <queue>
#include <iostream>

using namespace std;
int stringtoint(string str) {
	int i = 0;
	if (sscanf(str.c_str(), "%d", &i) != 1) return -1;
	else return i;
}
int solution(string dartResult) {
	int answer = 0;
	stack<int> s;
	queue<string> q;

	for (char ch : dartResult) {
		if (ch >= '0' && ch <= '9') {
			if (!q.empty() && stringtoint(q.back()) != -1) q.back().push_back(ch);
			else q.push(string(1, ch));
		}
		else q.push(string(1, ch));
	}
	while (!q.empty()) {
		string st = q.front();
		q.pop();
		int input = stringtoint(st);
		if (input == -1) {
			int tmp = s.top();
			s.pop();
			if (st == "S" || st == "D" || st == "T") {
				input = pow(tmp, 3 - (st[0] % 26 % 3));
			}
			if (st == "#") {
				input = tmp * -1;
			}
			if (st == "*") {
				if (!s.empty()) {
					int tmp2 = s.top();
					s.pop();
					s.push(tmp2 * 2);
				}
				input = tmp * 2;
			}
		}
		s.push(input);
	}
	for (; !s.empty(); s.pop()) {
		answer += s.top();
	}
	return answer;
}