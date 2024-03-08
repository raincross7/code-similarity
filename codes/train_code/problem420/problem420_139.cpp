#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define int ll

template<typename T1,typename T2> inline void chmin(T1 &a, T2 b){ if(a > b) a = b; }
template<typename T1,typename T2> inline void chmax(T1 &a, T2 b){ if(a < b) a = b; }

#define REP(i,n) for(int i=0;i<n;++i)
#define SORT(name) sort(name.begin(), name.end())
#define ZERO(p) memset(p, 0, sizeof(p))
#define MINUS(p) memset(p, -1, sizeof(p))
#if 1
#  define DBG(fmt, ...) printf(fmt, ##__VA_ARGS__)
#else
#  define DBG(fmt, ...)
#endif

const ll LLINF = (1LL<<60);
const int INF = (1LL<<30);
const double DINF = std::numeric_limits<double>::infinity();
const int MOD = 1000000007;
const int MAX_N = 100010;

signed main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);

    string C1[2];
    string C2[2];

    cin >> C1[0];
    cin >> C1[1];

    C2[0] = C1[0];
    C2[1] = C1[1];

    C2[1][2] = C1[0][0];
    C2[1][1] = C1[0][1];
    C2[1][0] = C1[0][2];
    C2[0][2] = C1[1][0];
    C2[0][1] = C1[1][1];
    C2[0][0] = C1[1][2];

    if(C1[0] == C2[0] && C1[1] == C2[1]) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }


    return 0;
}