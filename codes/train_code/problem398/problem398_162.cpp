#include<bits/stdc++.h>
using namespace std;
#define ll long
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int s, k;
	cin >> k >> s;
	int count = 0;
	for (int i = 0; i <= k; i++) {
		for (int j = 0; j <= k; j++) {
			int z = s - i - j;
			if (z >= 0 && z <= k) {
				count++;
			}
		}
	}
	cout << count << endl;

}