#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr, __VA_ARGS__)
//#define LOG(...)
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)
#define RFOR(i, a, b) for (int i = (int)(b - 1); i >= (int)(a); --i)
#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
#define RREP(i, n) for (int i = (int)(n - 1); i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define EXIST(s, e) ((s).find(e) != (s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SZ(a) ((int)(a).size())
#define BIT(x, i) (((x) >> (i)) & 1)
#define SQ(x) ((x) * (x))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main() {
    int N, M;
    while (cin >> N >> M, N|M) {
        vector<pii> p;
        REP(i, N) {
            int a, b;
            cin >> a >> b;
            p.push_back({b, a});
        }
        RSORT(p);
        REP(i, N) {
            if (M >= p[i].second) {
                M -= p[i].second;
                p[i].second = 0;
            } else {
                p[i].second -= M;
                M = 0;
                break;
            }
        }
        int res = 0;
        REP(i, N) {
            res += p[i].first * p[i].second;
        }
        cout << res << endl;
    }
}