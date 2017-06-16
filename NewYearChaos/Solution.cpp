#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void printQueue(vector<int> input) {
	cout << "[";
	for (int i = 0; i < input.size(); i++) {
		if (i == input.size() - 1) {
			cout <<  input[i];
		} else {
			cout << input[i] << ",";
		}
	}
	cout << "]";
}

int main() {
	/*
	 * Constraints:
	 * 	1 <= T <= 10 (# of test cases)
	 * 	1 <= n <= 10^5 (# of people in queue)
	 */

	// # of test cases
	int T = 0;

	// # of people in queue
	int n = 0;
	
	// minimum # of bribes needed to get the queue into its final state
	int minBribes = 0;

	// Get # of test cases from input
	cout << "Enter # of test cases: ";
	cin >> T;

	// For each test case, get # of people in queue
	for (int i = 1; i < T + 1; i++) {
		cout << "Test" << "[" << i << "]:" << endl;
		cout << "Enter # of people in queue: ";
		cin >> n; // get # of people in queue
		// Generate the default vector (e.g. if n = 5, then [1, 2, 3, 4, 5])
		vector<int> defaultQueue;
		for (int k = 1; k < n + 1; k++) {
			defaultQueue.push_back(k);
		}
		cout << "Original: ";
		printQueue(defaultQueue);
		cout << endl;
	
		// Store input into vector
		vector<int> queue;
		int t;
		for (int j = 0; j < n; j++) {
			cin >> t;
			queue.push_back(t);
		}
		cout << "Final State: ";
		printQueue(queue);
		cout << endl;
		
		// Count how many bribes have occurred
		// TODO
	}

	if (minBribes > 2) {
		// Print "Too chaotic"
	}

	return 0;
}
