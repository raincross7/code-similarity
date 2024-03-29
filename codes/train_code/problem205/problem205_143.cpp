#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

#define each(i,a) for (auto&& i : a)
#define FOR(i,a,b) for (ll i=(a),__last_##i=(b);i<__last_##i;i++)
#define RFOR(i,a,b) for (ll i=(b)-1,__last_##i=(a);i>=__last_##i;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define __GET_MACRO3(_1, _2, _3, NAME, ...) NAME
#define rep(...) __GET_MACRO3(__VA_ARGS__, FOR, REP)(__VA_ARGS__)
#define rrep(...) __GET_MACRO3(__VA_ARGS__, RFOR, RREP)(__VA_ARGS__)
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define chmin(x,v) x = min(x, v)
#define chmax(x,v) x = max(x, v)

const ll linf = 1e18;
const int inf = 1e9;
const double eps = 1e-12;
const double pi = acos(-1);

template<typename T>
istream& operator>>(istream& is, vector<T>& vec) {
    each(x,vec) is >> x;
    return is;
}
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& vec) {
    rep(i,vec.size()) {
        if (i) os << " ";
        os << vec[i];
    }
    return os;
}
template<typename T>
ostream& operator<<(ostream& os, const vector< vector<T> >& vec) {
    rep(i,vec.size()) {
        if (i) os << endl;
        os << vec[i];
    }
    return os;
}
bool check(const vector<vector<ll>>& color, const ll d) {
    const ll h = color.size();
    const ll w = color[0].size();
    rep(y1, h) rep(x1, w) rep(y2, h) rep(x2, w) {
        if (abs(x2 - x1) + abs(y2 - y1) == d) {
            if (color[y1][x1] == color[y2][x2]) return false;
        }
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll w, h, d; cin >> h >> w >> d;
    ll L = (w + h - 1);
    ll D = d;
    vector<vector<ll>> color{
        {0, 1},
        {2, 3},
    };
    vector<vector<ll>> m(L, vector<ll>(L));
    rep(y, L) rep(x, L) {
        ll yb = y / D;
        ll xb = x / D;
        m[y][x] = color[yb % 2][xb % 2];
    }
    // cout << m << endl;
    vector<vector<ll>> ans(h, vector<ll>(w));
    rep(y, h) rep(x, w) {
        ans[y][x] = m[x + y][x - y + h - 1];
    }
    const string S = "RYGB";
    rep(y, h) {
        rep(x, w) {
            cout << S[ans[y][x]];
        }
        cout << endl;
    }
    // assert( check(ans, d) );
}
