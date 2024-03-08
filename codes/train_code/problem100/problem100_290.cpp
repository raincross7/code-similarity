#include <iostream>
#include <iomanip>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <unordered_set>
#include <cstring>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return 1;
    }
    return 0;
}
struct io
{
    io()
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
    }
};
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

signed main() {
    vi a(3), b(3), c(3);
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
    cin >> c[0] >> c[1] >> c[2];
    
    int n;
    cin >> n;
    vi d(n);
    rep (i, n) {
        cin >> d[i];
        rep (j, 3) {
            if (a[j] == d[i]) a[j] = -1;
            if (b[j] == d[i]) b[j] = -1;
            if (c[j] == d[i]) c[j] = -1;
        }
    }
    if ((a[0] == a[1] && a[0] == a[2]) || (b[0] == b[1] && b[0] == b[2]) || (c[0] == c[1] && c[0] == c[2])) {
        cout << "Yes";
        return 0;
    }
    if ((a[0] == b[0] && a[0] == c[0]) || (a[1] == b[1] && a[1] == c[1]) || (a[2] == b[2] && a[2] == c[2])) {
        cout << "Yes";
        return 0;
    }
    if ((a[0] == b[1] && a[0] == c[2]) || (a[2] == b[1] && a[2] == c[0])) {
        cout << "Yes";
        return 0;
    }
    
    cout << "No";
}
