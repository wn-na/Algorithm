#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <utility>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> words, vector<string> queries) {
	vector<int> answer;

	if (words.size() > 100) {
		unordered_map<string, int> qz;
		for (string i : words) {
			int is = i.length();
			string t1 = i;
			for (int j = 1; j <= is; j++) {
				t1[j - 1] = '?';
				qz[t1]++;
			}
			for (int j = 1; j < is; j++) {
				i[is - j] = '?';
				qz[i]++;
			}
		}

		// 직접대입 O(N^3) => 효율성 아웃
		for (string i : queries) {
			answer.push_back(qz[i]);
		}
	}
	else {
		for (string i : queries) {
			int result = 0;
			for (string j : words) {
				if (j.size() == i.size()) {
					int k;
					for (k = 0; k < j.size(); k++) {
						if (i[k] == '?') continue;
						if (i[k] == j[k]) continue;
						else break;
					}
					if (k == j.size()) result++;
				}
			}
			answer.push_back(result);
		}
	}
	return answer;
}