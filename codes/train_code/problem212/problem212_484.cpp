#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <queue>
#include <cassert>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ALL(a) (a).begin(), (a).end()
#define rALL(a) (a).rbegin(), (a).rend()
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int iINF = 1001001001;
const long long llINF = 1LL << 60;
vector<int> divisor(int n)
{
	vector<int> ret;
	for (int i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			ret.push_back(i);
			if (i * i != n)	ret.push_back(n / i);
		}
	}
	return ret;
}
int main()
{
	// Tenka1 Programmer Contest-C, 1151, 15:40, First-AC
	/*ll n; cin >> n;
	rep(i, 3501) {
		if (i == 0) continue;
		rep(j, 3501) {
			if (j == 0) continue;
			int l = 0, r = 3500;
			while (l + 1 < r) {
				int m = (l + r) / 2;
				ll left = ll(m) * (ll(4) * ll(i) * ll(j) - n * ll(i) - n * ll(j));
				ll right = n * ll(i) * ll(j);
				if (left == right) {
					cout << i << " " << j << " " << m << endl;
					return 0;
				}
				else if (left < right) l = m;
				else r = m;
			}
		}
	}
	assert(false);
	*/

	// ABC106-B
	int n; cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i += 2) {
		vector<int> v = divisor(i);
		if (v.size() == 8) ans++;
	}
	cout << ans << endl;
	return 0;
}