#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int numOfSecs = 0;

	int n; // Number of points
	int s; // Jen's point
	int t; // Friend's point
	cin >> n >> s >> t;

	// If Jen and her friend start out at the same location, she reaches her friend in 0 seconds
	if (s == t) {
		numOfSecs = 0;
		cout << numOfSecs << endl;
	} else {
		// R[i] = (R[i - 1] * g + seed) mod p
		vector<int> R;
		int r;
		cin >> r;
		R.push_back(r);
		int g;
		int seed;
		int p;
		cin >> g >> seed >> p;
		
		for (int i = 1; i < n; i++) {
			int result = 0;
			result = (R[i - 1] * g + seed) % p;
			R.push_back(result);
		}
		
		vector<int> canJumpTo;
		int len = (R[s] * 2) + 1;
		for (int i = 0; i < len; i++) {
			int result = 0;
			int middle = len / 2;
			if (i < middle) {
				result = s - R[s];
			} else if (i == middle) {
				canJumpTo.push_back(s);
				continue;
			} else if (i > middle) {
				result = s + R[s];
			}
			canJumpTo.push_back(result);
		}
		// Reorganize canJumpTo vector
		for (int i = 0; i < canJumpTo.size(); i++) {
			if (canJumpTo[i] < 0) {
				canJumpTo[i] = R.size() + canJumpTo[i];
			}
		}
		int currentPoint = 0;
		currentPoint = s;
		for (int i = currentPoint; i < R.size(); i++) {
			// Check with canJumpTo to see which points are the best to jump to..
			for (int j = 0; j < canJumpTo.size(); j++) {
				// The best points are where R[i] != R[currentPoint] and R[i] != 0
				if (R[canJumpTo[j]] != R[currentPoint] && R[canJumpTo[j]] != 0) {
					// Move to that point
					currentPoint = canJumpTo[j];
					// Increment seconds?
					numOfSecs++;
					break;
				}
			}
		}

		// If it's impossible for Jen to reach her friend
		// (e.g., she's stuck in a position where R[i] = 0),
		// print -1 instead.
	}
	return 0;
}
