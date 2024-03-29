#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define All(x) x.begin(), x.end()
#define louisfghbvc int t; cin >> t; while(t--)
#define sz(x) (int)(x).size()
using namespace std;
typedef long long LL;
typedef pair<LL, LL> ii;
typedef vector<LL> vi;

template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

void dbg_out() { cerr << "\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

void solve(){
    int n, k;
    cin >> n >> k;
    vi h(n);
    for(auto &it: h) cin >> it;

    vi dp(n, 1e9+5);
    dp[0] = 0;
    for(int i = 1; i < n; ++i){
        for(int j = max(i-k, 0); j < i; ++j){
            dp[i] = min(dp[i], dp[j] + abs(h[i]-h[j]));
        }
    }
    cout << dp[n-1] << "\n";
}

int main()
{
    Fast;
    //louisfghbvc{
        solve();
    //}
    return 0;
}