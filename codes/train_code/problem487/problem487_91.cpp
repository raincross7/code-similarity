#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	int m = max(max(A, B), C);
	int ans = A + B + C + 9*m;
	cout << ans << endl;
	return 0;
}
