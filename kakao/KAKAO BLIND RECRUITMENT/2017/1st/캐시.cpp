#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
	int answer = 0;
	int size = cities.size();
	vector<pair<string, int>> lru;
	if (cacheSize == 0) {
		return 5 * size;
	}
	for (string cityname : cities) {
		for (auto& c : cityname) c = toupper(c);
		vector<pair<string, int>>::iterator it = find_if(lru.begin(), lru.end(), [&](pair<string, int> const& ref) {
			return ref.first == cityname;
			});
		if (it != lru.end()) {
			lru.erase(it);
			answer++;
		}
		else {
			if (lru.size() == cacheSize) {
				lru.erase(lru.begin());
			}
			answer += 5;
		}
		lru.push_back({ cityname, i });
	}
	return answer;
}