#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()
#define chmin(x,y) x = min(x,y)
#define chmax(x,y) x = max(x,y)
typedef pair<int, int> P;
typedef long long ll;
const int INF = 1001001001;
const ll LINF = 1001002003004005006ll;
const ll MOD = 1e9+7;
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
	int X, Y;
	cin >> X >> Y;

    int ans = 0;
	if (X%Y==0) ans = -1;
	else {
		int i = 1;
		while (1) {
			if (X*i%Y) {
				ans = X*i;
				break;
			}
			i++;
		}
	}
	cout << ans << endl;
	return 0;
}
