#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;
vector<string> next_board(int m, vector<string> board) {
	for (string& s : board) {
		//s.erase(remove_if(s.begin(), s.end(), ::tolower), s.end()); 
		string tmp;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] <= 'Z' && s[i] >= 'A') {
				tmp.push_back(s[i]);
			}
		}
		if (m == tmp.size()) continue;
		s = tmp + string(m - tmp.size(), ' ');
	}
	return board;
}

int solution(int m, int n, vector<string> board) {
	int answer = 0;
	vector<string> bv;
	for (int j = 0; j < n; j++) {
		string tmp;
		for (int i = m - 1; i >= 0; i--) {
			tmp.push_back(board[i][j]);
		}
		bv.push_back(tmp);
	}

	while (true) {
		bool tmp = false;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (bv[i][j] != ' ') {
					char result = toupper(bv[i][j]);
					if (i >= 0 && i + 1 < n && j >= 0 && j + 1 < m) {
						if (toupper(bv[i + 1][j]) == result
							&& toupper(bv[i][j + 1]) == result
							&& toupper(bv[i + 1][j + 1]) == result) {
							tmp = true;
							bv[i][j] = bv[i + 1][j] = bv[i][j + 1] = bv[i + 1][j + 1] = tolower(result);
						}
					}
				}
			}
		}
		if (tmp == false) break;
		bv = next_board(m, bv);
	}

	// cout << "==============\n";
   //  for(string i : bv) cout << i << "|\n";

	for (string i : bv) {
		for (char j : i) {
			if (j == ' ') answer++;
		}
	}
	return answer;
}