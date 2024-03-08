#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define fsp(x) fixed << setprecision(x)
const ll inf = LLONG_MAX;
const long double pi = acos(-1);
void Yes() {cout << "Yes" << endl;}
void No() {cout << "No" << endl;}
void YES() {cout << "YES" << endl;}
void NO() {cout << "NO" << endl;}

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	//const ll p = 1e9 + 7;
	//const ll p = 998244353;

	ll n;
	cin >> n;
	vll a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	sort(all(a));
	ll cnt = 0;
	for (ll i = 0; i < n - 1; i++) {
		if (a[i] == a[i + 1]) cnt++;
	}
	if (cnt % 2 == 0) cout << n - cnt << endl;
	else cout << n - cnt - 1 << endl;
}
