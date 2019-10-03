#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> rotate(vector<vector<int>> key) {
	vector<vector<int>> result;
	int n = key.size();
	for (int i = n - 1; i >= 0; i--) {
		vector<int> tmp;
		for (int j = 0; j < n; j++) {
			tmp.push_back(key[j][i]);
		}
		result.push_back(tmp);
	}
	return result;
}

bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
	for (int q = 0; q < 4; q++) {
		for (int i = 1 - (int)key.size(); i < (int)key.size() + (int)lock.size() - 1; i++) {
			for (int j = 1 - (int)key.size(); j < (int)key.size() + (int)lock.size() - 1; j++) {
				bool tmp = false;
				for (int x = 0; x < (int)lock.size(); x++) {
					for (int y = 0; y < (int)lock.size(); y++) {
						if (0 <= x - i && x - i < (int)key.size() && 0 <= y - j && y - j < (int)key.size()) {
							if (lock[x][y] == key[x - i][y - j]) {
								tmp = true;
								break;
							}
						}
						else {
							if (lock[x][y] == 0) {
								tmp = true;
								break;
							}
						}
					}
					if (tmp) break;
				}
				if (!tmp) return true;
			}
		}
		key = rotate(key);
	}
	return false;
}