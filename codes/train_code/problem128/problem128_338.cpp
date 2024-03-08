#include "bits/stdc++.h"
using namespace std;

#define ASC(vec) vec.begin(), vec.end()    // 昇順ソート 例：sort(ASC(vec));
#define DESC(vec) vec.rbegin(), vec.rend() // 降順ソート 例：sort(DESC(vec));
#define rep(i, n) for (int i = 0; i < (n); i++)
#define Rep(i, n) for (int i = 1; i < n; i++)
#define REP(i, vec) for (auto i = vec.begin(); i != vec.end(); ++i)

const int       mod = 1000000007;
const int       inf = (1 << 21);
const long long INF = 1LL << 60;

using ii = pair<int, int>;
using ll = long long;
using vi = vector<int>;
using vd = vector<double>;
using vb = vector<bool>;
using vl = vector<ll>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<ll>>;
using vvb = vector<vector<bool>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

template<class T>
inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T>
inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T>
inline T GCD(T a, T b) { return b ? GCD(b, a % b) : a; }
template<class T>
inline T LCM(T a, T b) { return (a + (b - 1)) / b; }
template<class T>
inline T round_int(T a, T b) {return (a + (b - 1)) / b; }

constexpr array<int, 9> dx = { 0, 1, 0, -1, -1, 1, 1, -1, 0 };
constexpr array<int, 9> dy = { 1, 0, -1, 0, 1, 1, -1, -1, 0 };

// ──────────────────────────────────────────────────────────────────

int gra[110][110];

int main() {
	int a, b;
	cin >> a >> b;

	if (!a) {
		cout << "1 1" << endl << "#" << endl;
	}
	if (!b) {
		cout << "1 1" << endl << "." << endl;
	}

	cout << "100 100" << endl;
	for (int i = 1; i <= 100; ++i) {
		for (int j = 1; j <= 100; ++j) {
			if (i <= 50) gra[i][j] = 0;
			else gra[i][j] = 1;
		}
	}

	a--, b--;
	for (int i = 1; i <= 50 && b; i += 2) {
		for (int j = 1; j <= 100 && b; j += 2) {
			gra[i][j] = 1;
			b--;
		}
	}

	for (int i = 1; i <= 50 && a; i += 2) {
		for (int j = 1; j <= 100 && a; j += 2) {
			gra[101 - i][j] = 0;
			a--;
		}
	}

	for (int i = 1; i <= 100; ++i) {
		for (int j = 1; j <= 100; ++j) {
			if (gra[i][j] == 1) {
				cout << "#";
			}
			else cout << ".";
		}
		cout << endl;
	}
}