#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// --------------------------------------------------------
#define FOR(i,l,r) for (int i = (l); i < (r); ++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(c) (c).begin(), (c).end()
#define RALL(c) (c).rbegin(), (c).rend()
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define MIN(c) *min_element(ALL(c))
#define MAX(c) *max_element(ALL(c))
#define SUM(c) accumulate(ALL(c), 0)
#define SUMLL(c) accumulate(ALL(c), 0LL)
#define SZ(c) ((int)(c).size())
#define debug(x) cerr << #x << " = " << (x) << '\n';
using P = pair<int,int>;
using VP = vector<P>;
using VVP = vector<VP>;
using VS = vector<string>;
using VI = vector<int>;
using VVI = vector<VI>;
using VLL = vector<ll>;
using VVLL = vector<VLL>;
using VB = vector<bool>;
using VVB = vector<VB>;
const double EPS = 1e-10;
const double PI  = acos(-1.0);
const ll MOD = 1000000007;
// const ll MOD = 998244353;
const int INF = 1 << 30;
// const ll INF = 1LL << 62;
// --------------------------------------------------------


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(10);

    int N, M; cin >> N >> M;
    VI K(M);
    VVI S(M);
    REP(i, M) {
        cin >> K[i];
        S[i] = VI(K[i]); REP(j,K[i]) cin >> S[i][j];
    }
    VI P(M); REP(i,M) cin >> P[i];

    int ans = 0;
    FOR(bit, 0, 1 << N) {
        bool all_light = true;
        REP(i, M) {
            int cnt = 0;
            for (auto s : S[i]) {
                if (bit & (1 << (s - 1))) cnt++;
            }
            if (cnt % 2 != P[i]) all_light = false;
        }
        if (all_light) ans++;
    }
    cout << ans << '\n';

    return 0;
}
