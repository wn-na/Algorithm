#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <stdio.h> // sscanf

using namespace std;
int arr[24 * 60 * 60 * 1000] = { 0, };
int solution(vector<string> lines) {
	int answer = 0;
	for (int i = 0; i < lines.size(); i++) {
		int hour, min, sec, misec;
		double serversec;
		sscanf(lines[i].c_str(), "%*s %d:%d:%d.%d %lfs", &hour, &min, &sec, &misec, &serversec);
		int time = misec + (1000 * (sec + (60 * (min + (60 * hour)))));
		for (int i = time - (serversec * 1000) + 1; i <= time; i++) {
			if (i >= 0 && i < 24 * 60 * 60 * 1000) {
				arr[i]++;
				answer = max(answer, arr[i]);
			}
		}
	}
	return answer;
}