#include <cstdio>
#include <iostream>
#include <cassert>
#include <string>
#include <algorithm>
#include <cstring>
#include <utility>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <deque>
#include <unordered_map>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0)

using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
const int MAXN = 234567;
vector<int> G[MAXN];

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N - 1; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        if (v < u) swap(u, v);
        G[u].push_back(v);
    }
    LL ans = 0;
    for (int i = 1; i <= N; i++) {
        LL len = (N - i + 1);
        ans += len * (len + 1) / 2;
    }
    for (int i = 1; i <= N; i++) {
        for (int j : G[i]) {
            ans -= (LL)i * (N - j + 1);
        }
    }
    printf("%lld\n", ans);
    return 0;
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
by Benq;
*/
