#include <bits/stdc++.h>
const int INF = 1e9;
const int MOD = 1e9+7;
const long long LINF = 1e18;
#define dump(x)  cout << 'x' << ' = ' << (x) << ` `;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define rep(i,n) for(ll i=0;i<(n);++i)
#define REPR(i,n) for(ll i=n;i>=0;i--)
#define FOREACH(x,a) for(auto& (x) : (a) )
typedef long long ll;
using namespace std;
typedef pair<ll, ll> P;

template<typename T>
void print(const vector<T> &x) {
    int n = x.size();
    rep(i,n) {
        cout << x[i];
        if (i!=n-1) cout<<" ";
        else cout << endl;
    }
}

template<typename T>
void print(const vector<vector<T>> &x) {
    int n = x.size();
    rep(i,n) {
        rep(j,x[i].size()) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}

template<typename T>
void print(const vector<T> &x, int n) {
    rep(i,n) {
        cout << x[i];
        if (i!=n-1) cout<<" ";
        else cout << endl;
    }
}

template<typename T>
void print(const vector<vector<T>> &x, int n, int m) {
    rep(i,n) {
        rep(j,m) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

void input_init() {
    cin.tie(0); ios::sync_with_stdio(false);
}

int main(int argc, char const *argv[]) {
    ll x,y,a,b,c; cin>>x>>y>>a>>b>>c;
    vector<ll> p(a),q(b),r(c);
    rep(i,a) cin>>p[i];
    rep(i,b) cin>>q[i];
    rep(i,c) cin>>r[i];
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    sort(p.begin(), p.end(), greater<>());
    sort(q.begin(), q.end(), greater<>());
    sort(r.begin(), r.end(), greater<>());
    rep(i,x) pq.push(p[i]);
    rep(i,y) pq.push(q[i]);

    rep(i,c) {
        if (pq.top() < r[i]) {
            pq.pop();
            pq.push(r[i]);
        }
    }

    ll ans = 0;
    while (!pq.empty()) {
        ans += pq.top(); pq.pop();
    }

    cout << ans << '\n';
    return 0;
}