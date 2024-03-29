#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>
#include <time.h>
#include <tuple>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e16;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1

ll sq(ll num) { return num*num; }
ll mod_pow(ll x, ll n) {
	if (n == 0)return 1;
	if (n == 1)return x%MOD;
	ll res = sq(mod_pow(x, n / 2));
	res %= MOD;
	if (n % 2 == 1) {
		res *= x;
		res %= MOD;
	}
	return res;
}
ll mod_add(ll a, ll b) { return (a + b) % MOD; }
ll mod_sub(ll a, ll b) { return (a - b + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return a*b % MOD; }

struct edge{
	ll to,cost;
	edge(ll _to,ll _cost):to(_to),cost(_cost){}
};

vector<edge> G[100001]; 

bool used[100001];
ll d[100001];

bool solve(ll now,ll dis){
	if(d[now] != INF){
		if(d[now] != dis)return false;
		return true;
	}
	d[now] = dis;
	used[now] = true;

	bool res = true;
	rep(i,G[now].size()){
		ll to = G[now][i].to;
		ll cost = G[now][i].cost;
		res &= solve(to,dis+cost);
	}
	return res;
}

ll n,m;

int main(){
	cin >> n >> m;
	rep(i,m){
		ll l,r,d;
		cin >> l >> r >> d;
		l--; r--;
		G[l].push_back(edge(r,d));
		G[r].push_back(edge(l,-d));
	}

	rep(i,n)d[i] = INF;
	bool ok = true;
	rep(i,n){
		if(used[i])continue;
		ok &= solve(i,0);
	}
	if(ok)cout << "Yes" << endl;
	else cout << "No" << endl;
}