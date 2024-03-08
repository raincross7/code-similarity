#include "bits/stdc++.h"
using namespace std;
#ifdef _DEBUG
#define dlog(str) cout << "====" << str << endl;
#else
#define dlog(str)
#endif
#define INF 999999999
#define MOD 1000000007
#define REP(i, n) for(int i = 0, i##_l = (n); i < i##_l; i++)
#define FOR(i, s, e) for(int i = s, i##_l = (e); i < i##_l; i++)
#define LLI long long int
#define _min(a,b) ((a<b)?a:b)
#define _max(a,b) ((a<b)?b:a)
#define chmax(a, b) a = _max(a, b)
#define chmin(a, b) a = _min(a, b)
#define bit(a, shift) ((a>>shift)&1))
#define pm(a) ((a)?1:-1)
#define SORT(v) sort(v.begin(),v.end())
#define RSORT(v) sort((v).rbegin(), (v).rend())
// int 2.14E±9    lli 9.2E±18    double 1.7E±380


int main() {
	cout << fixed << setprecision(10);
	LLI n, m;
	cin >> n >> m;

	if (n == 1 || m == 1) {
		int a = _max(n, m);
		cout << _max(a - 2, 1);
	}
	else {

		cout << _max(n - 2, 0) * _max(m - 2, 0);
	}

	return 0;
}