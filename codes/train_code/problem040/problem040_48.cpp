#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) cin >> a[i];
	sort(a.begin(), a.end());
	if (n % 2) cout << 0 << endl;
	else {
		cout << a[n/2]-a[n/2-1] << endl;
	}
	return 0;
}