#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	string s;
	cin >> s;

	if (s.size() >= 4 && s.substr(0, 4) == "YAKI") {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}
