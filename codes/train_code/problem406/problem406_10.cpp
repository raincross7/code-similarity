#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <fstream> 
#include <array>
#define _USE_MATH_DEFINES
#include <math.h>
#include <unordered_set>
#include<unordered_map>
#include<stdio.h>
#include<complex>
#pragma GCC optimize ("-O3")
using namespace std;


inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str(); }


typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<long long int> vll;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef unsigned long long ull;

//repetition
//------------------------------------------
#define REP(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)  REP(i,0,n)
#define rrep(i,n) for(int i=(n);i>=0;i--)
#define VEC_2D(a,b) vector<vector<int> >(a, vector<int>(b, 0))
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair
#define INF (1001000000)
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define UNIQ(c) (c).erase(unique((c).begin(),(c).end()), (c).end());
#define MOD 1000000007LL
#define MS(v,n) memset((v),(n),sizeof(v))


//input
#define VEC(type, c, n) std::vector<type> c(n);for(auto& i:c)std::cin>>i;

//output
#define P(p) cout<<(p)<<endl;
#define FSP(a) cout << fixed << setprecision(a)

template<typename T> T gcd(T x, T y) {
	if (y == 0) return x;
	else return gcd(y, x%y);
}

template<typename T> T lcm(T a, T b) {
	return a / gcd(a, b) * b;
}

template<typename T> bool is_prime(T n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return n != 1;
}

map<ll, ll> prime_factor(ll n) {
	map<ll, ll> res;
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			++res[i];
			n /= i;
		}
	}
	if (n != 1) res[n] = 1;
	return res;
}

int extgcd(int a, int b, int& x, int& y) {//
	int d = a;
	if (b != 0) {
		d = extgcd(b, a%b, y, x);
		y -= (a / b)*x;
	}
	else {
		x = 1; y = 0;
	}
	return d;
}



ll mod_pow(ll x, ll n, ll mod) {
	if (n == 0) return 1;
	ll res = mod_pow(x * x % mod, n / 2, mod);
	if (n & 1) res = res * x % mod;
	return res;
}

ll comb(ll a, ll b, ll mod) {
	ll mul = 1;
	ll div = 1;
	rep(i, b) {
		mul *= (a - (ll)i);
		mul %= mod;
		div *= ((ll)i + 1);
		div %= mod;
	}

	mul *= mod_pow(div, mod - 2,mod);
	return mul%mod;
}


vector<string> split(const string &str, char delim) {
	vector<string> res;
	size_t current = 0, found;
	while ((found = str.find_first_of(delim, current)) != string::npos) {
		res.push_back(string(str, current, found - current));
		current = found + 1;
	}
	res.push_back(string(str, current, str.size() - current));
	return res;
}

bool is_kadomatsu(int a, int b, int c) {
	if (a == b || a == c || b == c)return false;
	if (a > b && c > b) return true;
	if (a < b && c < b)return true;
	return false;
}


struct UF {
	int n;
	vi d;
	UF() {}
	UF(int n) :n(n), d(n, -1) {}
	int root(int v) {
		if (d[v] < 0) return v;
		return d[v] = root(d[v]);
	}
	bool same(int a, int b) {
		return root(a) == root(b);
	}
	bool unite(int x, int y) {
		x = root(x); y = root(y);
		if (x == y) return false;
		if (size(x) < size(y)) swap(x, y);
		d[x] += d[y];
		d[y] = x;
		return true;
	}
	int size(int v) { return -d[root(v)]; }
};

//x=(A*x+B)%modで更新する
//初期値はB
struct Matrix2x2 {

	vvll mat;
	vvll mat_initial;
	ll A, B;
	ll mod;
	vvll identity;

	Matrix2x2(ll A, ll B, ll mod):A(A),B(B),mod(mod) {
		mat.resize(2, vll(2));
		mat[0][0] = A; mat[0][1] = B;
		mat[1][0] = 0; mat[1][1] = 1;
		mat_initial = mat;
		identity.resize(2, vll(2));
		identity[0][0] = 1; identity[0][1] = 0;
		identity[1][0] = 0; identity[1][1] = 1;
	}

	vvll mul(vvll &c, vvll &d) {
		vvll e(2, vll(2));
		rep(i, 2) {
			rep(k, 2) {
				rep(j, 2) {
					e[i][j] = (e[i][j] + c[i][k] * d[k][j]) % mod;
				}
			}
		}
		return e;
	}

	vvll pow(ll n) {
		if (n == 0)return identity;
		if (n == 1)return mat;
		if (n % 2 == 0) {
			vvll tmp = pow(n / 2);
			mat = mul(tmp,tmp);
		}
		else {
			vvll tmp = pow(n - 1);
			mat = mul(tmp, mat_initial);
		}
		return mat;
		
	}

	vvll get_matrix() {
		return mat;
	}
	
};



vector<int> divisor(int n) {
	if (n == 1) return{};
	vi res;
	for (int i = 1; i*i <= n; i++) {
		if (n%i == 0) {
			res.emplace_back(i);
			if (i != 1 && i != n / i)res.emplace_back(n / i);
		}
	}
	return res;
}

struct Bellmanford {
	int n;
	struct edge {
		int from, to, cost;
	};
	vector<edge> E;
	vi d;
	Bellmanford(int n) :n(n), d(n) {
		E.resize(n);
	}
	void add_edge(int x, int y, int cost) {
		edge e;
		e.from = x; e.to = y; e.cost = cost;
		E.push_back(e);
	}
	void shortest_path(int s) {
		rep(i, n)d[i] = INF;
		d[s] = 0;
		while (true) {
			bool update = false;
			for (auto e : E) {
				if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
					d[e.to] = d[e.from] + e.cost;
					update = true;
				}
			}
			if (!update) break;
		}
	}
};
struct Dijkstra {
	int n;
	struct edge {
		int to; ll cost;
	};
	vector<vector<edge>> G;
	vll d;
	Dijkstra(int n) :n(n), d(n) {
		G.resize(n);
	}
	void add_edge(int x, int y, ll cost) {
		edge e;
		e.to = y; e.cost = cost;
		G[x].push_back(e);
	}
	void shortest_path(int s) {
		rep(i, n)d[i] = 100000000000000000;
		d[s] = 0;
		priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> que;
		que.push(make_pair(0, s));

		while (!que.empty()) {
			pii p = que.top(); que.pop();
			int v = p.second;
			if (d[v] < p.first) continue;
			for (auto e : G[v]) {
				if (d[e.to] > d[v] + e.cost) {
					d[e.to] = d[v] + e.cost;
					que.push(make_pair(d[e.to], e.to));
				}
			}
		}
	}
};

template<class V, int NV>
struct SegmentTree {
	int n;
	vector<V> data;
	SegmentTree() {
		n = 1;
		while (n < NV) n *= 2;
		data = vector<V>(2 * n - 1, -1);
	}

	void update(int idx, V val) {//0-indexed
		idx += n - 1;
		//data[idx] += val;
		data[idx] = max(data[idx], val);
		while (idx > 0) {
			idx = (idx - 1) / 2;
			//data[idx] += val;
			data[idx] = max(data[idx], val);
		}
	}
	V query(int a, int b) {// [a,b)
		return query_seg(a, b, 0, 0, n);
	}
	V query_seg(int a, int b, int k, int l, int r) {
		if (r <= a || b <= l) return 0;
		if (a <= l && r <= b)return data[k];
		else {
			//return query_seg(a, b, k * 2 + 1, l, (l + r) / 2) + query_seg(a, b, k * 2 + 2, (l + r) / 2, r);
			return max(query_seg(a, b, k * 2 + 1, l, (l + r) / 2), query_seg(a, b, k * 2 + 2, (l + r) / 2, r));

		}
	}
};

struct LazySegmentTree {
	int n;
	vector<ll> data, lazy;
	LazySegmentTree(int n_) {
		n = 1;
		while (n < n_) n *= 2;
		data = vector<ll>(2 * n-1, 0);
		lazy = vector<ll>(2 * n-1, 0);
	}

	void eval(int k, int l, int r) {
		if (lazy[k] != 0) {
			data[k] += lazy[k]/(r-l);
		}
		if (r - l > 1) {
			lazy[2 * k + 1] += lazy[k]/2;
			lazy[2 * k + 2] += lazy[k]/2;
		}
		lazy[k] = 0;
	}
	void update(int a, int b, int val, int k, int l, int r){
		eval(k, l, r);
		if (r <= a || b <= l) return;
		if (a <= l && r <= b) {
			lazy[k] += (r - l)*val;
			eval(k, l, r);
		}
		else {
			update(a, b, val, 2 * k + 1, l, (l + r) / 2);
			update(a, b, val, 2 * k + 2, (l + r) / 2, r);
			data[k] = min(data[2 * k + 1], data[2 * k + 2]);
		}
	}
	void update(int a, int b, int val) {
		return update(a, b, val, 0, 0, n);
	}
	ll query(int a, int b) {// [a,b)
		return query_seg(a, b, 0, 0, n);
	}
	ll query_seg(int a, int b, int k, int l, int r) {
		if (r <= a || b <= l) return INF;
		eval(k, l, r);
		if (a <= l && r <= b)return data[k];
		else {
			//return query_seg(a, b, k * 2 + 1, l, (l + r) / 2) + query_seg(a, b, k * 2 + 2, (l + r) / 2, r);
			return min(query_seg(a, b, k * 2 + 1, l, (l + r) / 2), query_seg(a, b, k * 2 + 2, (l + r) / 2, r));

		}
	}
};

struct Trie {
	Trie *next[26];

	Trie() {
		fill(next, next + 26, (Trie *)0);
	}

	void insert(char *s) {
		if (*s == '\0') return;
		if (this->next[*s - 'a'] == NULL) {
			this->next[*s - 'a'] = new Trie();
		}
		this->next[*s - 'a']->insert(s + 1);
	}

	bool find(char *s) {
		if (*s == '\0') return true;
		if (this->next[*s - 'a'] == NULL) {
			return false;
		}
		return this->next[*s - 'a']->find(s + 1);
	}
};

struct BIT {
	int n;
	vi bit;
	BIT() {}
	BIT(int n):n(n) {
		bit.resize(n + 1);
	}
	int sum(int i) {
		int s = 0;
		while (i > 0) {
			s += bit[i];
			i -= i&-i;
		}
		return s;
	}

	void add(int i, int x) {
		while (i <= n) {
			bit[i] += x;
			i += i&-i;
		}
	}
};

/*
struct edge { int to, cap, rev; };

vector<edge> G[200005];
int level[200005];
int iter[200005];

void add_edge(int from, int to, int cap) {
	G[from].push_back({ to, cap, (int)G[to].size() });
	G[to].push_back({ from, 0, (int)G[from].size() - 1 });
}
void fbfs(int s) {
	memset(level, -1, sizeof(level));
	queue<int> que;
	level[s] = 0;
	que.push(s);
	while (!que.empty()) {
		int v = que.front(); que.pop();
		for (edge &e : G[v]) {
			if (e.cap > 0 && level[e.to] < 0) {
				level[e.to] = level[v] + 1;
				que.push(e.to);
			}
		}
	}
}
int fdfs(int v, int t, int f) {
	if (v == t) return f;
	for (edge &e : G[v]) {
		if (e.cap > 0 && level[v] < level[e.to]) {
			int d = fdfs(e.to, t, min(f, e.cap));
			if (d > 0) {
				e.cap -= d;
				G[e.to][e.rev].cap += d;
				return d;
			}
		}
	}
	return 0;
}
int max_flow(int s, int t) {
	int flow = 0;
	for (;;) {
		fbfs(s);
		if (level[t] < 0) return flow;
		memset(iter, 0, sizeof(iter));
		int f;
		while ((f = fdfs(s, t, INF)) > 0) {
			flow += f;
		}
	}
}
*/

//------------------------



int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	vll A(N);
	rep(i, N)cin >> A[i];
	SORT(A);

	ll odd = 0;
	rep(i, N)odd ^= A[i];

	rep(i, N) {
		A[i] &= ~odd;
	}
	ll even = 0;
	rep(i, N)even ^= A[i];

	int index = 0;
	rrep(i,61) {
		int max_ind = index;
		ll max_elem = -1;

		for (int j = index; j < N; j++) {
			if ((A[j] & (1LL << i)) != 0 && A[j] > max_elem) {
				max_ind = j;
				max_elem = A[j];
			}
		}
		if (max_elem == -1)continue;

		swap(A[index], A[max_ind]);

		max_ind = index;

		rep(j, N) {
			if (j != max_ind && (A[j]&(1LL<<i))!=0) {
				A[j] ^= A[max_ind];
			}
		}
		index += 1;
	}

	ll red = 0;
	rep(i, N) {
		red ^= A[i];
	}

	
	P(odd + red + (red^even));
	return 0;
}