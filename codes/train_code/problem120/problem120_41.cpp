#include <bits/stdc++.h>
//#define inf 0x3f3f3f3f3f3f3f3f
#define inf 0x3f3f3f3f
#define debug(...) fprintf(stderr, __VA_ARGS__)
#define inv(x) Power(x, mod - 2)
#define fi first
#define se second
#define MP make_pair
#define PB push_back
#define N 100005

using namespace std;
typedef pair<int,int> Pair;
typedef long long ll;

const long double Pi = 3.14159265358979323846l;
const int mod = 1e9 + 7;
inline int add(int x, int y) { return (x += y) - (x >= mod ? mod : 0); }
inline void inc(int &x, int y) { (x += y) -= (x >= mod ? mod : 0); }
inline int mul(int x, int y) { return 1ll * x * y % mod; }
inline int Power(int x, int y) {
	int res = 1;
	while (y) {
		if (y & 1) res = mul(res, x);
		x = mul(x, x), y >>= 1;
	} return res;
}

template <class T> inline T	input() {
	T x; char ch; while (!isdigit(ch = getchar()));
	for (x = ch ^ 48; isdigit(ch = getchar()); x = x * 10 + (ch ^ 48));
	return x;
}

template <class T> inline void chkmin(T &x, T &y) { x = x < y ? x : y; }
template <class T> inline void chkmax(T &x, T &y) { x = x > y ? x : y; }

struct {
	inline operator int () { return input<int>(); }
	inline operator long long () { return input<long long>(); }
	template <class T> inline void operator () (T &x) { x = *this; }
	template<class T, class ...A> inline void operator () (T &x, A &...a)
	{ x = *this; this -> operator ()(a...); }
} read;

int n, tot;
bool vis[N];
int cnt[N], du[N];
vector<int> T[N];
queue<int> que, tmp;

inline void AddEdge(int x, int y) {
	T[x].push_back(y);
	T[y].push_back(x);
	++du[x], ++du[y];
}

void Win() {
	puts("First");
	exit(0);
}

int main() {
	read(n), tot = n;
	for (int i = 1; i < n; ++i) AddEdge(read, read);

	for (int i = 1; i <= n; ++i) if (du[i] == 1) que.push(i);

	while (tot) {
		for (int i = 1, sz = que.size(); i <= sz; ++i)
			vis[que.front()] = true, que.push(que.front()), que.pop();

		while (!que.empty()) {
			int u = que.front(); que.pop();
			vis[u] = true, --tot;
			for (int v : T[u])
				if (!vis[v]) {
					tmp.push(v);
					++cnt[v];
				}
		}

		for (int i = 1, sz = tmp.size(); i <= sz; ++i)
			vis[tmp.front()] = true, tmp.push(tmp.front()), tmp.pop();

		while (!tmp.empty()) {
			int u = tmp.front(); tmp.pop(), --tot;
			if (cnt[u] > 1) Win();
			for (int v : T[u])
				if (!vis[v]) {
					if (!--du[v]) Win();
					if (du[v] == 1) que.push(v);
				}
		}
	}

	puts("Second");
	return 0;
}
