#include <bits/stdc++.h>
#include <numeric>
#define rep(i,n) for (int i = 0; i < n; ++i)
#define reps(i,s,n) for (int i = s; i < n; ++i)
#define rep1(i,n) for (int i = 1; i <= n; ++i)
#define per(i,n) for (int i = n - 1; i >= 0; --i)
#define per1(i,n) for (int i = n; i >= 1; --i)
#define all(c) begin(c),end(c)
template<typename T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
template<typename T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<typename T> inline T intceil(T a, T b) { return (a + (b - 1)) / b; }
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;
const long long MOD = 1e9+7;
#define precout() cout << std::fixed << std::setprecision(20);
const string alphabet = "abcdefghijklmnopqrstuvwxyz";
const int dy[4] = { 0, 1, 0, -1 };
const int dx[4] = { 1, 0, -1, 0 };
// if(nextY >= 0 && nextY < H && nextX >= 0 && nextX < W)
static const long double pi = acos(-1.0);
typedef complex<ld> cd;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N; cin >> N;
    vector<ll> T(N), A(N);

    bool ng = 0;
    cin >> T[0];
    rep1(i, N-1) {
        cin >> T[i];
        if(T[i] < T[i - 1]) {
            ng = 1;
        }
    }

    cin >> A[0];
    rep1(i, N-1) {
        cin >> A[i];
        if(A[i] > A[i - 1]) {
            ng = 1;
        }
    }

    if(T.back() != A.front()) {
        ng = 1;
    }

    if(ng) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = 1;
    rep1(i, N-2) {
        if(T[i] != T[i-1] && A[i] != A[i+1] && A[i] != T[i]) {
            cout << 0 << endl;
            return 0;
        }
        if(T[i] != T[i-1] && T[i] > A[i]) {
            cout << 0 << endl;
            return 0;
        }
        if(A[i] != A[i+1] && A[i] > T[i]) {
            cout << 0 << endl;
            return 0;
        }

        if(T[i] != T[i-1] || A[i] != A[i+1]) continue;
        ans *= min(T[i], A[i]);
        ans %= MOD;
    }

    cout << ans << endl;
}
