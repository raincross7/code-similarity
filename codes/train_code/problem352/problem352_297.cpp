#include <bits/stdc++.h>
#define REP(i, m, n) for(int (i) = (m); (i) < (n); ++i)
#define rep(i, n) REP(i, 0, n)
#define all(x) (x).begin(), (x).end()
using namespace std;
using Graph = vector<vector<int>>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
typedef long long ll;
typedef pair<ll, ll> P;
const int INF = 1e9+7;
const ll LINF = 1LL<<60;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<ll> a(n+2);

    a[0] = 0;
    a[n+1] = 0;
    REP(i, 1, n+1) cin >> a[i];

    ll sum = 0;
    REP(i, 1, n+2) {
        sum += abs(a[i] - a[i-1]);
    }

    REP(i, 1, n+1) {
        cout << sum + abs(a[i+1] - a[i-1]) - abs(a[i] - a[i-1]) - abs(a[i+1] - a[i]) << endl;
    
    }

    return 0;
}