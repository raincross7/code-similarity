#pragma GCC optimize ("-O3","unroll-loops")
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include<iterator>
#include<complex>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<time.h>
#include <random>

using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define REVERSE(v,n) reverse(v,v+n);
#define VREVERSE(v) reverse(v.begin(), v.end());
#define ll long long
#define pb(a) push_back(a)
#define print(x) cout<<x<<'\n';
#define pe(x) cout<<x<<" ";
#define lb(v,n) lower_bound(v.begin(), v.end(), n);
#define ub(v,n) upper_bound(v.begin(), v.end(), n);
#define int long long
#define all(x) (x).begin(), (x).end()
#define print_space(v) REP(i,v.size())cout << v[i] << ((i == v.size() - 1) ? "\n" : " ");
//#define double long double



template<typename T1, typename T2> inline void chmin(T1 &a, T2 b) { if (a>b) a = b; }
template<typename T1, typename T2> inline void chmax(T1 &a, T2 b) { if (a<b) a = b; }

const int MOD = 1e9 + 7;
const ll INF = 1e17;
const int INT_INF = 1e9;
const double pi = acos(-1);
const double EPS = 1e-10;
typedef pair<int, int>P;
const int MAX = 200020;



bool vis[100010];
vector<int>G[100010];

int grundy(int n, int pre) {
	//print(n);
	if (n == 1) {
		if (G[n].size() == 1) {
			return 1;
		}
		else {
			int res = 0;
			for (auto nex : G[n]) {
				res ^= (grundy(nex, n)+1);
			}
			return res;
		}
	}
	else {
		if (G[n].size() == 2) {
			int res = 0;
			for (auto nex : G[n]) {
				if (nex == pre)continue;
				res = grundy(nex, n);
			}
			res++;
			return res;
		}
		else {
			int res = 0;
			for (auto nex : G[n]) {
				if (nex == pre)continue;
				res ^= (grundy(nex, n)+1);
			}
			return res;
		}
	}
}


signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N; cin >> N;
	REP(i, N-1) {
		int x, y; cin >> x >> y;
		G[x].pb(y);
		G[y].pb(x);
	}
	ll res = grundy(1, -1);
	if (res == 0) {
		print("Bob");
	}
	else print("Alice");
}