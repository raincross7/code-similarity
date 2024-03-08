/// Containers Start
#include <algorithm>
#include <bitset>
#include <cstdlib>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
/// C Header Files
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <math.h>
#include <stdio.h>
/// Containers End

using namespace std;

/// Math Start
#define PI acos(-1.0)
#define Pi 3.141592653589793
#define EPS (1e-7)
#define INF (0x3f3f3f3f)
/// Math End

/// Extra Start
#define nn '\n'
#define pb push_back
#define ull unsigned long long
#define ll long long
#define MOD 1000000007
#define sz(a) int((a).size())
#define space " "
#define All(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
/// Extra End

#define rep(i, n) for (int i = 0; i < n; i++)
#define Cini(a)                                                                \
    int a;                                                                     \
    cin >> a;
#define Cinii(a, b)                                                            \
    int a, b;                                                                  \
    cin >> a >> b;
#define Ciniii(a, b, c)                                                        \
    int a, b, c;                                                               \
    cin >> a >> b >> c;
#define Cins(s)                                                                \
    string s;                                                                  \
    cin >> s;
#define Cinss(s1, s2)                                                          \
    string s1, s2;                                                             \
    cin >> s1 >> s2;
#define Cinc(c)                                                                \
    char c;                                                                    \
    cin >> c;
/// Functions End

/// Graph Start
struct edge {
    int from, to;
    long long cost;
};
/// Graph End

/// Debug Start
#define deb(x) cout << #x << ": " << x << endl
#define deb2(x, y) cout << #x << ": " << x << '\t' << #y << ": " << y << endl;
#define deb3(x, y, z)                                                          \
    cout << #x << ": " << x << '\t' << #y << ": " << y << '\t' << #z << ": "   \
         << z << endl;
/// Debug End

// int dx[] = {-1, 0, 1, 0};
// int dy[] = {0, -1, 0, 1};
int dx[] = {-1, 0, 1};
int dy[] = {-1, 0, 1};

/**>>>>>>>>>>>>>>>>>>> END <<<<<<<<<<<<<<<<<<**/

/// template

#define int long long

signed main(void) {
    cin.sync_with_stdio(false);
    cin.tie(0);
    Ciniii(H, W, N);
    unordered_map<int, unordered_map<int, int> > m;
    vector<int> ans(10);
    int a[N], b[N]; // hoge
    rep(i, N) {
        cin >> a[i] >> b[i]; // hoge
    }
    for (int i = 0; i < N; i++) { // hoge
            int y = a[i]; // hoge
            int x = b[i]; // hoge
            rep(ii, 3) rep(jj, 3) {
                int yy = y + dy[ii];
                int xx = x + dx[jj];
                if(2<=yy&&yy<=H-1&&2<=xx&&xx<=W-1){
                    m[yy][xx]++; // hoge
                }
            }
    }

    for (auto i : m) {
        for (auto j : i.second) {
          ans[j.second]++;
        }
    }
    int res = 0;
    rep(i, 9) { res += ans[i + 1]; }
    ans[0] = (H - 2) * (W - 2) - res;

    rep(i, 10) { cout << ans[i] << nn; }
    return 0;
}
