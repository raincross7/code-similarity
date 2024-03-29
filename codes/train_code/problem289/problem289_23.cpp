#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;
#define MP make_pair
#define PB push_back
#define X first
#define Y second

#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define RFOR(i, b, a) for(int i = (b) - 1; i >= (a); --i)
#define ALL(a) a.begin(), a.end()
#define SZ(a) (int)((a).size())
#define FILL(a, value) memset(a, value, sizeof(a))
#define debug(a) cerr << #a << " = " << a << endl;

template<typename T> void setmax(T& x, T y) {x = max(x, y);}
template<typename T> void setmin(T& x, T y) {x = min(x, y);}

const double PI = acos(-1.0);
const LL INF = 1e9 + 47;
const LL LINF = INF * INF;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	int m, k;
	cin >> m >> k;
	if (k >= (1 << m))
	{
		cout << -1;
		return 0;
	}
	if (m == 1)
	{
		if (k == 0) cout << "0 0 1 1 ";
		else cout << -1;
		return 0;
	}
	
	vector<int> all(1 << m);
	iota(ALL(all), 0);
	swap(all[k], all.back());
	
	for(auto i: all) cout << i << ' ';
	all.pop_back();
	reverse(ALL(all));
	for(auto i: all) cout << i << ' ';
	cout << k << endl;
	
	cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
	return 0;
}

