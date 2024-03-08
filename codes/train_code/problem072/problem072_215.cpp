#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define int ll

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
const int MOD = 1000000007;
#define MAX_N 100010

ll N;
vector<ll> ans;

signed main()
{
    cin >> N;

    ll cur = 0;
    for(int i = 1; i <= N; ++i) {
        cur += i;
        ans.push_back(i);
        if(cur >= N) { break; }
    }
    ll sub = cur - N;
    for(auto& a : ans) {
        if(sub == a) { continue; }
        printf("%lld\n", a);
    }

    return 0;
}
