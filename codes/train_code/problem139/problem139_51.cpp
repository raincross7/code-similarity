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

const int N = 1200100;
int n, a[N];
vector <int> f[N];

bool func(int x, int y) {
	return a[x] > a[y];
}

int main() {
	ios_base::sync_with_stdio(false);

	cin >> n;
	for(int i = 0; i < (1 << n); i++)
		cin >> a[i];

	for(int i = 0; i < (1<<n); ++i)
		f[i].push_back(i);
	
	for(int i = 0;i < n; ++i) 
		for(int mask = 0; mask < (1<<n); ++mask){
			if(mask & (1<<i)) {
				for(auto j : f[mask^(1<<i)])
					f[mask].push_back(j);
				sort(f[mask].begin(), f[mask].end(), func);
				f[mask].resize(2);
			}
	}

	// dbg_v(f, 3);
	int ans = a[0] + a[1];
	for(int i = 1; i < (1 << n); i++) {
		ans = max(ans, a[f[i][0]] + a[f[i][1]]);
		cout << ans << '\n';
	}
}	

	