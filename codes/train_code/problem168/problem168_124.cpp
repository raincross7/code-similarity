#include <bits/stdc++.h>
// #include <atcoder/all>
#define ll long long int
#define ld long double
#define yorn(f) cout<<((f)?"Yes":"No")<<endl;
#define YORN(f) cout<<((f)?"YES":"NO")<<endl;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repi(i, n) for (ll i = 1; i < (ll)(n); i++)
#define all(x) (x).begin(), (x).end()
#define put(x) cout << x << endl;
#define println(x) cout << x << endl;
using namespace std;
// using namespace atcoder;
void Main()
{
    ll n, Z, W;
    cin >> n >> Z >> W;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    
    if (n >= 2) {
        put(max(abs(W - a[n-1]), abs(a[n-1] - a[n-2])));
    }
    else {
        put(abs(W - a[n-1]));
    }
}
signed main(){ Main();return 0;}