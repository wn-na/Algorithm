#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;
	for (int i = 0; i < n; i++) {
		string line;
		for (int j = n - 1; j >= 0; j--) {
			line.push_back(((arr1[i] >> j) & 1) || ((arr2[i] >> j) & 1) ? '#' : ' ');
		}
		answer.push_back(line);
	}
	return answer;
}