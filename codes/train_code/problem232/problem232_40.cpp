#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> VI;

template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#define all(x) (x).begin(),(x).end()


int main() {
    int n;
    cin >> n;
    vector<ll> a(n), s(n+1, 0);
    map<ll, int> m;
    m[0]++;
    rep (i, n) {
        cin >> a[i];
        s[i + 1] = s[i] + a[i];
        m[s[i + 1]]++;
    }
    ll ans = 0;
    for (auto au: m) {
        ll val = au.second;
        if (val < 2) continue;
        ans += val * (val - 1) / 2;
    }
    cout << ans << endl;
}