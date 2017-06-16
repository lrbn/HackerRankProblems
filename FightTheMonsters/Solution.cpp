#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	vector <int> ex;
	ex.push_back(10);
	ex.push_back(20);
	ex.push_back(30);

	cout << "Initial: ";
	cout << "[";
	for (int i = 0; i < ex.size(); i++) {
		cout << ex[i];
		if (i != ex.size() -1) {
			cout << " ";
		}
	}
	cout << "]" << endl;

	replace(ex.begin(), ex.end(), 20, -1);
	cout << "New: ";
	cout << "[";
	for (int i = 0; i < ex.size(); i++) {
		cout << ex[i];
		if (i != ex.size() - 1) {
			cout << " ";
		}
	}
	cout << "]" << endl;
}
