#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <utility>
#include <map>

using namespace std;

vector<string> getSet(string str) {
	vector<string> vs;
	for (int i = 1; i < str.size(); i++) {
		if (isalpha(str[i]) && isalpha(str[i - 1])) {
			vs.push_back(str.substr(i - 1, 2));
		}
	}
	return vs;
}

int solution(string str1, string str2) {
	map<string, pair<int, int>> ma;
	for (auto& c : str1) c = toupper(c);
	for (auto& c : str2) c = toupper(c);
	vector<string> vs1 = getSet(str1);
	vector<string> vs2 = getSet(str2);
	sort(vs1.begin(), vs1.end());
	sort(vs2.begin(), vs2.end());

	if (vs1.empty() && vs2.empty()) return 65536;
	for (string i : vs1) {
		if (ma.find(i) != ma.end()) {
			ma.find(i)->second.first++;
		}
		else {
			ma.insert({ i, {1,0} });
		}
	}
	for (string i : vs2) {
		if (ma.find(i) != ma.end()) {
			ma.find(i)->second.second++;
		}
		else {
			ma.insert({ i, {0, 1} });
		}
	}
	int U = 0, N = 0;
	for (map<string, pair<int, int>>::iterator iter = ma.begin(); iter != ma.end(); ++iter) {
		// cout << iter->first << "["<< iter->second.first << "/" << iter->second.second << "]\n";
		if (iter->second.first > 0 && iter->second.second > 0) {
			N += min(iter->second.first, iter->second.second);
		}
		U += max(iter->second.first, iter->second.second);
	}
	// cout << "N : " << N << " / U : " << U;
	return (int)(65536.f * N / U);
}