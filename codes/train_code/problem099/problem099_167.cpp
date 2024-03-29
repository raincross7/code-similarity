#include <bits/stdc++.h>
#define st first
#define nd second

using namespace std;

void debug_out() { cerr << endl; }
template<class T> ostream& prnt(ostream& out, T v) { out << v.size() << '\n'; for(auto e : v) out << e << ' '; return out;}
template<class T> ostream& operator<<(ostream& out, vector <T> v) { return prnt(out, v); }
template<class T> ostream& operator<<(ostream& out, set <T> v) { return prnt(out, v); }
template<class T1, class T2> ostream& operator<<(ostream& out, map <T1, T2> v) { return prnt(out, v); }
template<class T1, class T2> ostream& operator<<(ostream& out, pair<T1, T2> p) { return out << '(' << p.st << ' ' << p.nd << ')'; }
template <typename Head, typename... Tail> void debug_out(Head H, Tail... T) { cerr << " " << H; debug_out(T...);}

#define dbg(...) cerr << #__VA_ARGS__ << " ->", debug_out(__VA_ARGS__)
#define dbg_v(x, n) do{cerr<<#x"[]: ";for(int _=0;_<n;++_)cerr<<x[_]<<" ";cerr<<'\n';}while(0)
#define dbg_ok cerr<<"OK!\n"

const int N = 20100;
const int OFF = 500000000;
int n, a[N], b[N], c[N], p[N];

int main() {
	ios_base::sync_with_stdio(false);

	cin >> n;
	for(int i = 1; i <= n; i++) a[i]= i;
	for(int i = 1; i <= n; i++) {
		cin >> p[i];
		c[p[i]] = i + OFF;
	}

	a[1] = 1;
	b[1] = c[p[1]] - 1;
	for(int i = 2; i <= n; i++) {
		int diff = c[i] - c[i - 1];
		dbg(i, diff);
		a[i] = a[i - 1] + 1;
		b[i] = b[i - 1] - 1;
		if(diff < 0) b[i] += diff;
		else a[i] += diff;
	}

	for(int i = 1; i <= n; i++) cout << a[i] << ' ';
	cout << '\n';
	for(int i = 1; i <= n; i++) cout << b[i] << ' ';
	cout << '\n';
}	

	