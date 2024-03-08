#include <bits/stdc++.h>
using namespace std;

#define REP(i, m, n) for (int i = (m); i < (int)(n); i++)
#define REPS(i, m, n) for (int i = (m); i <= (int)(n); i++)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) for (int i = 0; i <= (int)(n); i++)
#define rrep(i, x) for (int i = ((int)(x)-1); i >= 0; i--)
#define rreps(i, x) for (int i = (int)(x); i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef pair<int, int> P;
const int inf = INT_MAX;
const ll INF = 1LL << 60;
const ll mod = 1e9 + 7;
const double EPS = 1e-10;
const double PI = acos(-1.0);
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
template<typename A, size_t N, typename T> void Fill(A (&array)[N], const T &val) { fill( (T*)array, (T*)(array+N), val ); }
template <class T1, class T2, class Pred = std::less<T2> >
struct sort_pair_second {
    bool operator()(const std::pair<T1,T2>&left, const std::pair<T1,T2>&right) {
        Pred p;
        return p(left.second, right.second);
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, P;
    cin >> N >> P;
    string S; cin >> S;
    ll ans = 0;

    if (P == 2 || P == 5) {
      rrep(i, N) {
        ll num = S[i] - '0';
        if (num % P == 0) ans += i + 1;
      }
      cout << ans << endl;
      return 0;
    }

    vector<ll> cnt(P, 0);
    ll ten = 1;
    ll sum = 0;
    cnt[sum]++;
    rrep(i, N) {
      ll num = S[i] - '0';
      sum += num * ten;
      sum %= P;
      ten *= 10;
      ten %= P;
      cnt[sum]++;
    }

    rep(i, P) {
      ans += cnt[i] * (cnt[i] - 1) / 2;
    }

    cout << ans << endl;
    return 0;
}