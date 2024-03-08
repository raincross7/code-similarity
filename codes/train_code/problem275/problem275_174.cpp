#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll w, h, n;
	cin >> w >> h >> n;
	ll lw = 0, lh = 0;
	ll x[n], y[n], a[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i] >> a[i];

		if (a[i] == 1) {
			lw = max(x[i], lw);
		} else if (a[i] == 2) {
			w = min(w, x[i]);
		} else if (a[i] == 3) {
			lh = max(y[i], lh);
		} else if (a[i] == 4){
			h = min(h, y[i]);
		}
	}
	if (w - lw <=0 || h - lh <= 0) return cout << 0 << endl,0;
	cout <<  (ll) (w - lw) * (h - lh);
	return 0;

}
