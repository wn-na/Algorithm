#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <iostream>
#include <utility>
#include <math.h>

using namespace std;

int solution(string s) {
	int answer = s.size();
	for (int i = 1; i <= s.size() / 2; i++) {
		int tmp = 0;
		stack<pair<string, int>> st;
		for (int j = 0; j < s.size(); j += i) {
			string t = s.substr(j, i);
			if (st.empty()) st.push({ t,0 });
			else {
				if (st.top().first == t) {
					pair<string, int> psi = st.top();
					st.pop();
					psi.second += 1;
					st.push(psi);
				}
				else {
					st.push({ t,0 });
				}
			}
		}
		while (!st.empty()) {
			pair<string, int> si = st.top();
			st.pop();
			tmp += si.first.length() + (si.second > 0 ? (int)log10(si.second * 1.0f + 1.f) + 1.f : 0);
		}
		answer = min(answer, tmp);
	}
	return answer;
}