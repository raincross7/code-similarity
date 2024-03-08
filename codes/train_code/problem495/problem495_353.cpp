#ifdef LOCAL
#include "libs/debug/print_list.hpp"
#define debug(x) (cout << # x ": " << x << endl)
#define dev(v, m, n) for(int i=0;i<n;++i){for(int j=0;j<m;++j){cout<<"|"<<v[j][i];}cout<<"|"<<endl;}
#else
#define debug(x) ;
#define dev(v, m, n) ;
#endif

// :----------------------------------------

#include <algorithm>
#include <cassert>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <numeric>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

#define int long long int
#define rep(i, n) for (int i = 0; i < n; ++i)
#define all(x) (x).begin(), (x).end()
#define capi(x) int x;cin>>x
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using vi = vector<int>;
using pi = pair<int, int>;
using vp = vector<pi>;

template<class T>bool chmax(T &a, const T &b){if(a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b;return 1;}return 0;}

#define P (1'000'000'007)

signed main() {
    capi(n);

    int a, b, c;
    cin >> a >> b >> c;

    vi vl;

    rep(i, n) {
        capi(l);
        vl.push_back(l);
    }

    int ans = INT_MAX;

    rep(i, 1 << n) {
        rep(j, 1 << n) {
            vector<int> sa, sb, sc;
            rep(k, n) {
                int bx = (i >> k) & 1;
                int by = (j >> k) & 1;
                if (bx == 1 && by == 0) sa.push_back(vl[k]);
                else if (bx == 0 && by == 1) sb.push_back(vl[k]);
                else if (bx == 1 && by == 1) sc.push_back(vl[k]);
            }

            if (sa.empty() || sb.empty() || sc.empty()) continue;

            int res = (sa.size() + sb.size() + sc.size() - 3) * 10;
            int acc = 0;
            rep(i, sa.size()) {
                acc += sa[i];
            }
            res += abs(acc - a);
            acc = 0;

            rep(i, sb.size()) {
                acc += sb[i];
            }
            res += abs(acc - b);
            acc = 0;

            rep(i, sc.size()) {
                acc += sc[i];
            }
            res += abs(acc - c);

            chmin(ans, res);
        }
    }

    cout << ans;

    return 0;
}
