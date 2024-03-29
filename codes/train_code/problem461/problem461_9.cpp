//marico el que lo lea
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <stdlib.h>
#include <assert.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> ii;

void fastIO() {std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

#define pb push_back
#define all(obj) obj.begin(), obj.end()
#define ms(obj, val) memset(obj, val, sizeof(obj))
#define ms2(obj, val, sz) memset(obj, val, sizeof(obj[0])*sz)

#define fst first
#define snd second

template<typename T, typename U> inline void mnze(T &x, U y) {if(y < x) x = y;}
template<typename T, typename U> inline void mxze(T &x, U y) {if(x < y) x = y;}

void _scan( int &x ) { scanf("%d",&x); }
void _scan( long long &x ) { scanf("%lld",&x); }
void _scan( double &x ) { scanf("%lf",&x); }
void _scan( char &x ) { scanf(" %c",&x); }
void _scan( char *x ) { scanf("%s",x); }
template<typename T>
void _scan( vector<T> &v ){
	for(int i=0; i<(int)v.size(); i++) _scan(v[i]);
}
void scan() {}
template<typename T, typename... U>
void scan( T& head, U&... tail ) { _scan(head); scan(tail...);}

template<typename T> void _dbg(const char* sdbg, T h)
	{ cerr<<sdbg<<"="<<h<<"\n"; }
template<typename T, typename... U> void _dbg(const char* sdbg, T h, U... t) {
	while(*sdbg != ',')cerr<<*sdbg++;
	cerr<<"="<<h<<","; _dbg(sdbg+1, t...);
}

#ifdef LOCAL
#define debug(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#define debugv(x) {{cerr<<#x<<" = "; for(auto _i:x) cerr<<_i<<", ";cerr<<"\n";}}
#define debuga(x, sz) {{cerr<<#x<<" = ";for(int _i=0;_i<sz;_i++)cerr<<x[_i]<<", ";cerr<<"\n";}}
#else
#define debug(...) (__VA_ARGS__)
#define debugv(x)
#define debuga(x, sz)
#define cerr if(0)cout
#endif

ll MOD = 1e9+7;

inline ll Msum(ll x){return x;}
template<typename... Rest>
inline ll Msum(ll x, Rest... rest){ return (x + Msum(rest...)) % MOD; }

inline ll Mprod(ll x){return x;}
template<typename... Rest>
inline ll Mprod(ll x, Rest... rest){ return x * Mprod(rest...) % MOD; }

inline ll Mnorm(ll x){ return (x%MOD + MOD) %MOD; }

inline ll Msq(ll x){ return (x*x) %MOD; }
inline ll Mpot(ll x, ll e){
	if(!e) return 1;
	return Msq(Mpot(x, e>>1)) * (e & 1 ? x : 1)%MOD;
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

const int MAXN = 1e5+5;

int n, a[MAXN];

int dist(int x, int y){
	return min( abs(x/2 - y), abs((x+1)/2 - y) );
}

int main(){
	scan(n);
	for(int i=0; i<n; i++) scan(a[i]);
	sort(a, a+n);
	int x = a[--n];
	int y = a[0];
	for(int i=0; i<n; i++){
		if(dist(x, a[i]) < dist(x, y)) y = a[i];
	}
	printf("%d %d\n", x, y);
}
