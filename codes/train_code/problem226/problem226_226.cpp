#include <bits/stdc++.h>
using namespace std;

string query(int n) {
	cout << n << '\n';
	fflush(stdout);
	string s; cin >> s;
	if (s == "Vacant") exit(0);
	return s;
}

int main() {
	int n; cin >> n;
	int l = 0;
	int r = n - 1;
	string L = query(l);
	string R = query(r);

	while (l < r) {
		int m = (l + r) / 2;
		R = query(m);
		if (m % 2) {
			if (L == R) r = m;
			else l = m;
		} else {
			if (L == R) l = m;
			else r = m;
		}
		if (r - l == 1)
			query(r);
	}
	return 0;
}