#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n + 1], b[n + 1];
	for(int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];
	}
	sort(b + 1, b + 1 + n);
	unordered_map<int, int> index;
	for(int i = 1; i <= n; i++) {
        index[b[i]] = i;
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++) {
        if(i % 2 != index[a[i]] % 2) {
            cnt++;
        }
	}
	cout << cnt / 2 << endl;
	return 0;
}
