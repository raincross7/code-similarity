//fold
#ifndef KHALIL
#include <bits/stdc++.h>
#else
#include "header.h"
#endif
#define endl '\n'
#define mp make_pair
#define tostr(x) static_cast<ostringstream&>((ostringstream()<<dec<<x)).str()
#define rep(i,begin,end) for(auto i = begin;i < end;i++)
#define repr(i,begin,end) for(auto i = begin-1;i >= end;i--)
#define pb push_back
#define sz(a) ((int)(a).size())
#define fi first
#define se second
#define abs(a) ((a) < (0) ? (-1)*(a) : (a))
#define SQ(a) ((a)*(a))
#define eqd(a,b) (abs(a-b)<1e-9)
#define X real()
#define Y imag()
using namespace std;
typedef long long ll;
typedef long double ld;
template <typename t> t in(t q){cin >> q;return q;}
template <typename T> ostream& operator<<(ostream& os, const vector<T>& v){os << "[";for (int i = 0; i < sz(v); ++i) { os << v[i]; if (i != sz(v) - 1) os << ",";}os << "]";return os;}
template <typename T, typename S>ostream& operator<<(ostream& os, const map<T, S>& v){for (auto it : v)os << "(" << it.first << ":" << it.second << ")";return os;}
template <typename T, typename S>ostream& operator<<(ostream& os, const pair<T, S>& v){os << "(" << v.first << "," << v.second << ")";return os;}
const long double PI = acosl(-1);
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
mt19937_64 rng64(chrono::steady_clock::now().time_since_epoch().count());
inline int rand(int l,int r){return uniform_int_distribution<int>(l, r)(rng);}
inline ll rand(ll l,ll r){return uniform_int_distribution<ll>(l, r)(rng64);}
//endfold
#define  N  (200005)
#define MOD (1000000000l + 7l)
#define OO (1050000000)
#define OOL (1100000000000000000)

//global
ll anspar(ll up, ll delta){
	ll ans = 0;
	if(delta == up) ans = up;
	else if(delta > up){
		if(delta%up == 0){
			ans = (delta/(up)-1)*(2*up)+up;
		}else{
			ans = (delta/(up))*(2*up)+anspar(up,delta%up);
		}
	}else if(delta < up){
		if(up%delta == 0){
			ans = (up/(delta)-1)*(2*delta)+delta;
		}else{
			ans = (up/(delta))*(2*delta)+anspar(up%delta,delta);
		}
	}
	return ans;
}

int main(){
	//fold
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cout << setprecision(10);
	//endfold
	ll n,x;
	cin >> n >> x;
	cout << n+anspar(x,n-x);
	return 0;
}