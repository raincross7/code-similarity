#include "bits/stdc++.h"

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	string S;
	cin >> S;
	for (int i = 0; i < S.size(); ++i) {
		if (i == A) {
			if ('-' != S[i]) {
				cout << "No" << endl;
				return 0;
			}
		}
		else {
			int num = S[i] - '0';
			if ((num < 0) || (num > 9)) {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}
