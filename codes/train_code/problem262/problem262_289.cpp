#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	auto b = a;
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		if (b[i] == a[n - 1]) {
			cout << a[n - 2] << '\n';
		} else {
			cout << a[n - 1] << '\n';
		}
	}
}