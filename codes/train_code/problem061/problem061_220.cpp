#include <bits/stdc++.h>
using namespace std;

// def
#define debug(x) cout << #x << ": " << x << endl
#define out(x) cout << x << endl
#define repeat(i, a, b) for (int i = (a); i < (b); i++)
#define revrepeat(i, a, b) for (int i = (b)-1; i >= (a); i--)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define revrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define CYES cout << "Yes" << endl
#define CNO cout << "No" << endl
#define SPC(x) cout << fixed << setprecision(x)
#define ZERO(a) memset(a, 0, sizeof(a))
#define MINUS(a) memset(a, 0xff, sizeof(a))

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<ll> vl;
typedef vector<vector<ll>> vll;
typedef pair<int, int> P;
typedef complex<ld> Point;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const int MAX_V = 1e5 + 5;
const int MAX_N = 1e5 + 5;
const double PI = acos(-1);

int main() {
    string s;
    ll k;
    cin >> s >> k;
    vi len;
    int cnt = 0;
    rep(i, s.size()) {
        cnt++;
        if (i == (int)s.size() - 1) {
            len.push_back(cnt);
            break;
        }
        if (s[i] != s[i + 1]) {
            len.push_back(cnt);
            cnt = 0;
        }
    }
    // debug(len.size());
    // rep(i, len.size()) {
    //     debug(len[i]);
    // }

    ll ans = 0;
    if (s.front() == s.back()) {
        repeat(i, 1, (int)len.size() - 1) {
            ans += (len[i] / 2) * k;
        }
        ans += ((len.front() + len.back()) / 2) * (k - 1);
        ans += len.front() / 2;
        ans += len.back() / 2;
        if (len.size() == 1) ans /= 2;
    } else {
        rep(i, len.size()) {
            ans += (len[i] / 2) * k;
        }
    }
    out(ans);
    return 0;
}
