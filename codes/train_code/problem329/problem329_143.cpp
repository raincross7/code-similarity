#include <bits/stdc++.h>
#define int llint
#define rep(i, a, n) for(int (i) = (int)(a);(i) < (int)(n);++(i))
#define repe(i, a, n) for(int (i) = (int)(a);(i) <= (int)(n);++(i))
#define repif(i, a, x) for(int (i) = (int)(a);(x);++(i))
#define repr(i, a, n) for(int (i) = ((int)(a)-1);(i) >= (int)(n);--(i))
#define reper(i, a, n) for(int (i) = (int)(a);(i) >= (int)(n);--(i))
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define SIZE(x) ((int)(x).size())
#define ALL(x) (x).begin(), (x).end()
#define RNG(x, a, n) &((x)[a]), &((x)[n])
#define ADD(a, b) ((((a+MOD)%MOD)+((b+MOD)%MOD))%MOD)
#define MUL(a, b) ((((a)%MOD)*((b)%MOD))%MOD)
#define CEIL(x) ((int)ceil(((double)x)))
#define POW(x, y) ((int)pow(x, y))
#define UNIQUE(x) (x).erase(unique(ALL((x))), (x).end())
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;
#define fcout cout << fixed << setprecision(10)
#define pb push_back
#define pf push_front
#define mp make_pair
#define mt make_tuple
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define EPS (1e-20)
#define INF INT_MAX
#define INFLL LLONG_MAX
#define MOD 1000000007
using llint = long long;
using VI = std::vector<int>;
using PII = std::pair<int, int>;
using SI = std::set<int>;
using MII = std::map<int, int>;
using TIII = std::tuple<int, int, int>;
using MCI = std::map<char, int>;
using VPII = std::vector<PII>;
using namespace std;


int N, K;
int a[5010];


int solve(){
	int ans = N, sum = 0;
	sort(RNG(a, 0, N));
	repr(i, N, 0)
		if(sum+a[i] < K) sum += a[i];
		else chmin(ans, i);
	return ans;
}


signed main(){
	cin >> N >> K;
	rep(i, 0, N) cin >> a[i];

	cout << solve() << endl;

	return 0;
}