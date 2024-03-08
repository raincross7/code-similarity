#include "bits/stdc++.h"
// Custom Header {{{
#define ALL(x)      x.begin(), x.end()
#define rep(i,n)    for (i64 i = 0; i < (n); ++i)
#define reps(i,s,t) for (i64 i = (s); i <= (t); ++i)
using namespace std;
using i64 = long long;
using pii = pair<i64, i64>;
template<class A, class B>inline bool chmax(A &a, const B &b){return b>a ? (a=b,1) : 0;}
template<class A, class B>inline bool chmin(A &a, const B &b){return b<a ? (a=b,1) : 0;}
constexpr int INF  = 0x3f3f3f3f;
constexpr i64 LINF = 0x3f3f3f3f3f3f3f3fLL;
// }}}

signed main()
{
    // ios::sync_with_stdio(false); cin.tie(nullptr);
    i64 a, b, K;
    cin >> a >> b >> K;

    rep(i, K) {
        if (i % 2 == 0) {
            if (a & 1) --a;
            b += a / 2;
            a /= 2;
        } else {
            if (b & 1) --b;
            a += b / 2;
            b /= 2;
        }
    }

    cout << a << ' ' << b << endl;

    return 0;
}

