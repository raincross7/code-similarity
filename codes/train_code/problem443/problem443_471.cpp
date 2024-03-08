#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		if (a[i] == a[i + 1]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}