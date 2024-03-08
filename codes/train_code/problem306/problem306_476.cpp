#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <functional>
#include <numeric>
#include <iomanip>
#include <climits>
#include <cstring>
#include <cmath>

using namespace std;

#define int long long
#define rep(i, n) for (int i=0;i<(int)(n);++i)
#define rep1(i, n) for (int i=1;i<=(int)(n);++i)
#define rrep(i, n) for (int i=(int)(n)-1;i>=0;--i)
#define rrep1(i, n) for (int i=(int)(n);i>=1;--i)
#define range(i, l, r) for (int i=l;i<(int)(r);++i)
#define rrange(i, l, r) for (int i=(int)(r)-1;i>=l;--i)
#define unless(a) if(!(a))
#define all(a) begin(a),end(a)
#define fst first
#define scd second
#define PB emplace_back
#define PPB pop_back
#define UNIQ(a) a.erase(unique(all(a)), end(a))

using vi=vector<int>;
using pii=pair<int, int>;
using vpii=vector<pii>;
using ll=long long;

constexpr int TEN(int n){return n==0?1:10*TEN(n-1);}
template<typename T>bool chmin(T&a,T b){return a>b?(a=b,1):0;}
template<typename T>bool chmax(T&a,T b){return a<b?(a=b,1):0;}
int read(){int a;scanf("%lld",&a);return a;}

const double pi = acos(-1);
constexpr int inf = 3*TEN(18) + 10;
constexpr int mod = TEN(9) + 7;

int N, L, Q;
int to[100010][25];

signed main()
{
	cin >> N;

	vi x(N);
	rep(i, N) cin >> x[i];

	cin >> L >> Q;

	rep(i, N) rep(j, 20) to[i][j] = N + 1;

	rep(i, N) {
		int idx = upper_bound(all(x), x[i] + L) - begin(x) - 1;
		to[i][0] = idx;
	}

	range(j, 1, 20) {
		rep(i, N) {
			to[i][j] = to[to[i][j - 1]][j - 1];
		}
	}

	rep(_, Q) {
		int a, b; cin >> a >> b;
		--a, --b;
		if (a > b) swap(a, b);

		int ans = 0;

		int cur = a;

		rrep(i, 20) {
			if (b > to[cur][i]) {
				cur = to[cur][i];
				ans += 1ll << i;
			}
		}

		ans++;

		printf("%lld\n", ans);
	}
}


