#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define int ll

#define rep(i, a) for (int i = 0; (i) < (int) (a); (i)++)
#define reps(i, a, b) for (int i = (int) (a); (i) < (int) (b); (i)++)
#define rrep(i, a) for (int i = (int) a-1; (i) >= 0; (i)--)
#define rreps(i, a, b) for (int i = (int) (a)-1; (i) >= (int) (b); (i)--)
#define MP(a, b) make_pair((a), (b))
#define PB(a) push_back((a))
#define all(v) (v).begin(), (v).end()
#define PERM(v) next_permutation(all(v))
#define UNIQUE(v) sort(all(v));(v).erase(unique(all(v)), v.end())
#define CIN(type, x) type x;cin >> x
#define TRUE__  "Yes"
#define FALSE__ "No"
#define PRINT(f) if((f)){cout << (TRUE__) << endl;}else{cout << FALSE__ << endl;}
#define YES(f) if((f)){cout << "YES" << endl;}else{cout << "NO" << endl;}
#define Yes(f) if((f)){cout << "Yes" << endl;}else{cout << "No" << endl;}
#define MINV(v) min_element(all(v))
#define MAXV(v) max_element(all(v))
#define MIN3(a, b, c) min(min(a, b), c)
#define MIN4(a, b, c, d) min(MIN3(a, b, c), d)
#define MIN5(a, b, c, d, e) min(MIN4(a, b, c, d), e)
#define MIN6(a, b, c, d, e, f) min(MIN5(a, b, c, d, e), f)
#define MAX3(a, b, c) max(max(a, b), c)
#define MAX4(a, b, c, d) max(MAX3(a, b, c), d)
#define MAX5(a, b, c, d, e) max(MAX4(a, b, c, d), e)
#define MAX6(a, b, c, d, e, f) max(MAX5(a, b, c, d, e), f)
#define RANGE(a, b, c) ((a) <= (b) && (b) < (c))
#define RANGE2D(a, b, c, d, e, f) (RANGE((a), (c), (e)) && RANGE((b), (d), (f)))
#define chmin(a, b) a = min(a, (b))
#define chmin3(a, b, c) a = MIN3(a, (b), (c))
#define chmin4(a, b, c, d) a = MIN4(a, (b), (c), (d))
#define chmin5(a, b, c, d, e) a = MIN5(a, (b), (c), (d), (e))
#define chmin6(a, b, c, d, e, f) a = MIN6(a, (b), (c), (d), (e), (f))
#define chmax(a, b) a = max(a, (b))
#define chmax3(a, b, c) a = MAX3(a, (b), (c))
#define chmax4(a, b, c, d) a = MAX4(a, (b), (c), (d))
#define chmax5(a, b, c, d, e) a = MAX5(a, (b), (c), (d), (e))
#define chmax6(a, b, c, d, e, f) a = MAX6(a, (b), (c), (d), (e), (f))
#define fcout cout << fixed << setprecision(12)

#define RS resize
#define CINV(v, N) do {\
	v.RS(N);\
	rep(i, N) cin >> v[i];\
} while (0);

#define RCINV(v, N) do {\
	v.RS(N);\
	rrep(i, N) cin >> v[i];\
} while (0);
#define MOD 1000000007

template<class T>
inline T GET() {
	T x;
	cin >> x;
	return x;
}


void init();
void solve();

signed main()
{
	init();
	solve();
}

int A, B;
vector<vector<int>> v;

void init()
{
	cin >> A >> B;
	v.RS(100, vector<int>(100, 0));
	reps(i, 50, 100) {
		rep(j, 100) {
			v[i][j] = 1;
		}
	}
}

void solve()
{
	rep(i, A-1) {
		int c = 1 + (i % 23) * 2;
		int r = 51 + (i / 23) * 2;
		v[r][c] = 0;
	}
	rep(i, B-1) {
		int c = 1 + (i % 23) * 2;
		int r = 1 + (i / 23) * 2;
		v[r][c] = 1;
	}
	cout << "100 100" << endl;
	rep(i, 100) {
		rep(j, 100) {
			cout << (v[i][j] == 0 ? '.' : '#');
		}
		cout << endl;
	}
}


