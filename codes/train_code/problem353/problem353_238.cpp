#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rrep(i, n) for (int i = (n); i >= 0; i--)
#define loop(i, r, n) for (int i = (r); i < (n); i++)
#define pb push_back
#define all(in) in.begin(),in.end()

template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

using ll = long long;
using ull = unsigned long long;
using namespace std;

int main(){
    int n; cin >> n;
    vector<ll> a(n), b(n); rep(i,n) cin >> a[i], b[i] = a[i];
    sort(all(b));
    ll ans = 0;
    rep(i,n){
        ll id = lower_bound(all(b),a[i]) - b.begin();
        if((i-id)%2 != 0) ans++;
    }
    cout << ans/2 << endl;
    return 0;
}