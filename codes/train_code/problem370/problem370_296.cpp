# include <bits/stdc++.h>
using namespace std;
namespace Base{
	# define mr make_pair
	typedef long long ll;
	typedef double db;
	const int inf = 0x3f3f3f3f, INF = 0x7fffffff;
	const ll  infll = 0x3f3f3f3f3f3f3f3fll, INFll = 0x7fffffffffffffffll;
	template<typename T> void read(T &x){
    	x = 0; int fh = 1; double num = 1.0; char ch = getchar();
		while (!isdigit(ch)){ if (ch == '-') fh = -1; ch = getchar(); }
		while (isdigit(ch)){ x = x * 10 + ch - '0'; ch = getchar(); }
	    if (ch == '.'){
	    	ch = getchar();
	    	while (isdigit(ch)){num /= 10; x = x + num * (ch - '0'); ch = getchar();}
		}
		x = x * fh;
	}
	template<typename T> void chmax(T &x, T y){x = x < y ? y : x;}
	template<typename T> void chmin(T &x, T y){x = x > y ? y : x;}
}
using namespace Base;

const int N = 200010;
int f[N], r[N], n, m;
int dad(int x){
	if (f[x] == x) return x;
	else {
		int l = dad(f[x]);
		r[x] = r[x] + r[f[x]];
		f[x] = l;
		return l;
	}
}
int main(){
	read(n); read(m);
	for (int i = 1; i <= n; i++) f[i] = i, r[i] = 0;
	for (int i = 1; i <= m; i++){
		int u, v, d;
		read(u); read(v); read(d);
		int tu = dad(u), du = r[u];
		int tv = dad(v), dv = r[v];
		if (tu == tv){
			if (du + d != dv){
				printf("No\n");
				return 0;
			}
		}
		else {
			f[tv] = tu;
			r[tv] = du + d - dv;
		}
	}
	printf("Yes\n");
	return 0;
}

