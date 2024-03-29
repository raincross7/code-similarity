#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, n) for (ll i = 1; i <= (n); ++i)
#define rrep(i, n) for (ll i = (n - 1); i >= 0; --i)
#define perm(c) sort(ALL(c));for(bool c##p=1;c##p;c##p=next_permutation(ALL(c)))
#define ALL(obj) (obj).begin(), (obj).end()
#define pb push_back
#define to_s to_string
#define len(v) (ll)v.size()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
#define print(x) cout << (x) << '\n'
#define drop(x) cout << (x) << '\n', exit(0)
#define debug(x) cout << #x << ": " << (x) << '\n'
using namespace std;
using ll = long long;
typedef vector<ll> vec;
typedef vector<vector<ll>> vec2;
typedef vector<vector<vector<ll>>> vec3;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll MOD = 1e9 + 7;
ll devc(ll x, ll y) { return 1 + (x - 1) / y; }

vector<long long> L(51), P(51);

ll ans = 0;

void f(ll N, ll X){
    ll l = L[N];
    if(N == 0){
        ++ans;
        return;
    }
    if(X <= 1) return;
    if(X <= 1 + L[N - 1]) f(N - 1, X - 1);
    else if(X <= 2 + L[N - 1]) ++ans, f(N - 1, X - 1);
    else if(X <= 2 + 2 * L[N - 1]) ans += 1 + P[N - 1], f(N - 1, X - 2 - L[N - 1]);
    else ans += 1 + 2 * P[N - 1];
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout << fixed << setprecision(20);

    ll N, X;
    cin >> N >> X;

    L[0] = 1;
    P[0] = 1;
    rep1(i, 50){
        L[i] = 3 + 2 * L[i - 1];
        P[i] = 1 + 2 * P[i - 1];
    }
    f(N, X);
    print(ans);

    return 0;
}