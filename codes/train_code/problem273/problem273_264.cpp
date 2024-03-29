#include <bits/stdc++.h>
#define repr(i,from,to) for(int (i)=(from);(i)<(to);(i)++)
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
// const bool debug=true;
const bool debug=false;
#define DEBUG if(debug==true)
#define all(x) begin((x)), end((x))
#define vprint(x) for(auto a:(x)) cout << x << endl;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll MOD = 1000000007;
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) { a = b; return true;}
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) { a = b; return true;}
    return false;
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n,d,a;cin>>n>>d>>a;
    vector<pair<ll,ll>> m;
    map<ll,ll> vals;
    rep(i,n) {
        ll tx,th;cin>>tx>>th;
        m.emplace_back(tx,th);
    }
    
    sort(all(m));
    ll cur = 0;
    ll sum = 0;
    ll res = 0;
    rep(i,n) {
        auto p = vals.lower_bound(cur);
        cur = m[i].first;
        while(p!=vals.end()&&p->first<cur) {
            sum -= p->second;
            p++;
        }
        ll rem = max(0LL, m[i].second - sum);
        ll cnt = (rem==0? 0 : (rem-1)/a + 1);
        if (rem==0) {
            continue;
        }
        vals[cur+2*d] = cnt * a;
        sum += cnt * a;
        res += cnt;
    }
    cout << res << endl;
    return 0;
}
