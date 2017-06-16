#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	// Expand string s
	vector<string> s;
	s.push_back("0");
	
	while (s.size() <= 1000) {
		// Step 1: Create string t where t[i] = 1 - s[i]
		vector<string> t;
		for (int i = 0; i < s.size(); i++) {
			int res = 1 - stoi(s[i]);
			t.push_back(to_string(res));
		}
		// Step 2: Append string t at the end of string s
		s.insert(s.end(), t.begin(), t.end());
	}
	
	int queries = 0;
	cin >> queries;
	vector<string> answer;	
	for (int i = 0; i < queries; i++) {
		int q = 0;
		cin >> q;
		for (int j = 0; j < s.size(); j++) {
			if (s[q] == s[j]) {
				answer.push_back(s[q]);
				break;
			}
		}
	}
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << endl;;
	}
	return 0;
}
