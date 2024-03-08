//#include <bits/stdc++.h>
//#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <tuple>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>

using namespace std;
using ll=long long;
using intpair=pair<int,int>;
using intpv=vector<intpair>;
using llpair=pair<ll,ll>;
using llpv=vector<llpair>;
using intvec=vector<int>;
using llvec=vector<ll>;
using intq=queue<int>;
using llq=queue<ll>;
using intmat=vector<intvec>;
using llmat=vector<llvec>;
using pairmat=vector<llpv>;

template<typename T>
using matrix=vector<vector<T>>;
template<typename T>
using pque=priority_queue<T>;
template<typename T>
using lpque=priority_queue<T,vector<T>,greater<T>>;

#define PI 3.141592653589793
#define INTINF 1<<30
#define LLINF 1LL<<60
#define MPRIME 1000000007
#define MPRIME9 998244353

#define len length()
#define pushb push_back
#define fi first
#define se second

#define setpr fixed<<setprecision(15)
#define all(name) name.begin(),name.end()
#define rall(name) name.rbegin(),name.rend()
#define gsort(vbeg,vend) sort(vbeg,vend,greater<>())
#define matin(mat,H,W) for(int i__=0; i__<H; i__++)for(int j__=0; j__<W; j__++) cin>>mat[i__][j__]
#define out(n) cout<<n<<endl

template<class T>
inline bool chmin(T& a, T b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
}

template<class T>
inline bool chmax(T& a, T b) {
	if (a < b) {
		a = b;
		return true;
	}
	return false;
}

template<class T>
inline void outmat(T& a, int y, int x) {
	for(int i=0; i<y; i++) {
		for(int j=0; j<x; j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
}

template<class T>
inline void init(T& v) {
	for(auto &a__: v) cin>>a__;
}
template<class T, class N>
inline void init(T& v, N n) {
	v.resize(n);
	for(auto &a__: v) cin>>a__;
}

template<class N> void resiz(N n) {} // empty
template<class N, class T, class... U>
void resiz(N n, T&& hd, U&&... tl) {
	hd.resize(n);
	resiz(n,forward<U>(tl)...);
}

ll GCD(ll a, ll b) { //最大公約数
	if(a==0||b==0) return 0;
	if(a<b) swap(a,b);
	ll tmp = a%b;
	while(tmp!=0) {
		a = b;
		b = tmp;
		tmp = a%b;
	}
	return b;
}

ll binpow(ll a, ll ex, ll p) { //繰り返し二乗法
	ll result=1;
	while(ex>0) {
		if(ex&1) result=result*a%p;
		ex>>=1;
		a=a*a%p;
	}
	return result;
}

ll Fact(ll x, ll p) { //階乗
	ll f=1;
	for(ll i=2; i<=x; i++) {
		f*=i;
		f%=p;
	}
	return f;
}

int DigitNum(ll n) { //桁数
	int digit=0;
	ll div=1LL;
	while(n/div) {
		digit++;
		div*=10;
	}
	return digit;
}


int H,W;
bool blk[1000][1000];
intq qx,qy,qtm;
int res=0;
int dy[]={0,1,0,-1};
int dx[]={1,0,-1,0};

void input() {
	cin>>H>>W;
	for(int i=0; i<H; i++)for(int j=0; j<W; j++) {
		char ch; cin>>ch;
		if(ch=='#') {
			blk[i][j]=true;
			qy.push(i), qx.push(j), qtm.push(0);
		}
	}
}

void solve() {
	while(!qx.empty()) {
		int x=qx.front(), y=qy.front(), t=qtm.front();
		qx.pop(), qy.pop(), qtm.pop();
		for(int i=0; i<4; i++) {
			int nx=x+dx[i], ny=y+dy[i], nt=t+1;
			if(nx<0 || nx>=W || ny<0 || ny>=H || blk[ny][nx]) continue;
			qx.push(nx), qy.push(ny), qtm.push(nt);
			blk[ny][nx]=true;
			chmax(res,nt);
		}
	}
	cout<<res<<endl;
}

int main() {
	while(1) {
		input();
		solve();
		break;
	}
}