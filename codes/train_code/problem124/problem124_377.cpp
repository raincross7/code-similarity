#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#pragma warning(disable : 4996)
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
#include<random>
#include<array>


using namespace std;

#define REP(i, n) for(int i = 0;i < n;++i)
#define REPR(i, n) for(int i = n-1;i >= 0;--i)
#define FOR(i, m, n) for(int i = m;i < n;++i)
#define FORR(i, m, n) for(int i = m-1;i >= n;--i)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define REVERSE(v,n) reverse(v,v+n);
#define VREVERSE(v) reverse(v.begin(), v.end())
#define ll long long
#define print(x) cout<<(x)<<'\n'
#define pe(x) cout<<(x)<<" "
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define lb(v,n) lower_bound(v.begin(), v.end(), (n))
#define ub(v,n) upper_bound(v.begin(), v.end(), (n))
#define int long long
//#define double long double
#define all(x) (x).begin(), (x).end()
#define print_space(v) REP(i,v.size())cout << v[i] << ((i == v.size() - 1) ? "\n" : " ")
template<typename T1, typename T2> inline void chmin(T1 & a, T2 b) { if (a > b) a = b; }
template<typename T1, typename T2> inline void chmax(T1& a, T2 b) { if (a < b) a = b; }
typedef pair<int, int>P;
typedef array<int, 3> arr3;
std::random_device rd;
std::mt19937 mt(rd());
constexpr ll MOD = 1e9+7; constexpr int MAX = 2000020;
const double pi = acos(-1); constexpr double EPS = 1e-8;
constexpr ll INF = 1e18;
void y(bool cond) {
	if (cond)print("Yes");
	else print("No");
}

double T[101], V[101];
double v1[2000020];//v[i]=[i/2-0.5,i/2)
double v2[2000020];
double max_v[1000010];
void solve() {
	int N; cin >> N;
	REP(i, N)cin >> T[i];
	REP(i, N)cin >> V[i];
	int now = 0;
	int idx = 0;
	REP(i, N) {
		REP(_, T[i]) {
			max_v[idx] = V[i];
			idx++;
		}
	}
	double now_v=0;
	REP(i, idx) {
		if (now_v <= max_v[i] - 1) {
			now_v += 0.5;
			v1[i*2 + 1] = now_v;
			now_v += 0.5;
			v1[i*2 + 2] += now_v;
		}
		else if (now_v <= max_v[i] - 0.5) {
			now_v += 0.5;
			v1[i * 2 + 1] = now_v;
			v1[i * 2 + 2] = now_v;
		}
		else {
			now_v = max_v[i];
			v1[i * 2 + 1] = now_v;
			v1[i * 2 + 2] = now_v;
		}
	}
	now_v = 0;
	REPR(i, idx) {
		if (now_v <= max_v[i] - 1) {
			now_v += 0.5;
			v2[i * 2 + 1] = now_v;
			now_v += 0.5;
			v2[i * 2] = now_v;
		}
		else if (now_v <= max_v[i] - 0.5) {
			now_v += 0.5;
			v2[i * 2 + 1] = now_v;
			v2[i * 2] = now_v;
		}
		else{
			now_v = max_v[i];
			v2[i * 2 + 1] = now_v;
			v2[i * 2] = now_v;
		}
	}
	double ans = 0;
	now_v = 0;
	REP(i, idx * 2) {
		double nxt = min(v1[i + 1], v2[i + 1]);
		ans += (now_v + nxt)*0.25;
		now_v = nxt;
	}
	cout << setprecision(20) << ans << endl;
}


signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	//int q; cin >> q;
	//while (q--)
	solve();
}
