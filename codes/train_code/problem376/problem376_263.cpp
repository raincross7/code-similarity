#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int ans = 0;
	for (int i = 1; i < n - 1 && i < n - i; i++) ans++;
	cout << ans;
	return 0;
}
