#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vl = vector<ll>;
using ml = map<ll,ll>;

#define ff first
#define ss second
#define endl '\n'
#define ins insert
#define eb emplace_back
#define sz(c) (ll) c.size()
#define all(c) begin(c), end(c)
#define rall(c) rbegin(c), rend(c)
#define itr(x,c) for(auto &x : c)
#define tc ll t; cin >> t; while (t--)
#define rep(i,a,n) for(ll i = a ; i < n ; ++i)
#define per(i,a,n) for(ll i = n-1 ; i >= a ; --i)
#define dx(x) cout << #x << ": " << x << endl;
#define dc(c) itr(x,c) cout << x << " "; cout << endl;
#define dm(m) itr(x,m) cout << x.f << "->" << x.s << endl;
#define godspeed cin.tie(0) -> sync_with_stdio(0);

int main() {
    godspeed;
    ll n, m; cin >> n >> m;
    cout << ((m >= n) ? "unsafe" : "safe");
}