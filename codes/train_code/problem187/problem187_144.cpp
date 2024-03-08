#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <fstream>
#include <cassert>
#include <cstring>
#include <numeric>
#include <ctime>
#include <complex>
#include <bitset>
#include <random>

using namespace std;

typedef long long ll;
typedef long double ld;

#define int ll
#define double ld
#define loop(i, n) for(int i = 0; i < (int)n; ++i)
#define loop1(i, n) for(int i = 1; i <= (int)n; ++i)
#define F first
#define S second
#define pb push_back
#define pi pair <int, int>
#define all(x) begin(x), end(x)
#define ti tuple <int, int, int>
#define Point Vect
#define no {cout << "No"; return;}
#define mkp make_pair
#define mkt make_tuple
#define cerr if (0) cerr

void solve() {
    int n, m;
    cin >> n >> m;
    vector <pi> ans;
    int l = 1, r = n + 1 >> 1;
    while (l < r) {
        ans.pb({ l, r });
        ++l; --r;
    }
    r = n; l = (n + 1 >> 1) + (n % 2 ? 1 : 2);
    while (l < r) {
        ans.pb({ l, r });
        ++l; --r;
    }
    loop(i, m)
        cout << ans[i].F << " " << ans[i].S << "\n";
}
    

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //int t; cin >> t; loop(i, t)
    solve();
    return 0;
}
