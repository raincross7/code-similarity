//#include <bits/stdc++.h>
#include <iostream>
#include <complex>
#include <sstream>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <vector>
#include <set>
#include <limits>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <iomanip>
#include <stack>
#include <bitset>

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, j, k) for(int i = (int)(j); i < (int)(k); ++i)
#define ROF(i, j, k) for(int i = (int)(j); i >= (int)(k); --i)
#define FORLL(i, n, m) for(long long i = n; i < (long long)(m); i++)
#define SORT(v, n) sort(v, v+n)
#define REVERSE(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;
const ll MOD=1000000007LL;
typedef pair<int, int> P;

ll ADD(ll x, ll y) { return (x+y) % MOD; }
ll SUB(ll x, ll y) { return (x-y+MOD) % MOD; }
ll MUL(ll x, ll y) { return x*y % MOD; }
ll POW(ll x, ll e) { ll v=1; for(; e; x=MUL(x,x), e>>=1) if (e&1) v = MUL(v,x); return v; }
ll DIV(ll x, ll y) { /*assert(y%MOD!=0);*/ return MUL(x, POW(y, MOD-2)); }

template<class T> bool chmax(T &a,const T &b){if(a<b){a=b;return 1;}return 0;}
template<class T> bool chmin(T &a,const T &b){if(a>b){a=b;return 1;}return 0;}

ll h,w,n;
map<pair<ll, ll>, ll> mp;

ll ans[11];

bool check(ll a, ll b){
  return (2 <= a && a <= h-1 && 2 <= b && b <= w-1);
}

int
main(void){  
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> h >> w >> n;
  REP(i, n){
    ll a, b;
    cin >> a >> b;
    FOR(j,-1,2){
      FOR(k,-1,2){    
	if(check(a+j, b+k)) mp[make_pair(a+j,b+k)]++;
      }
    }
  }
  for(auto &e: mp) ans[e.second]++;
  ll num = (h-2)*(w-2);
  for(auto &e: ans) num -= e;
  ans[0] = num;
  REP(i, 10) cout << ans[i] << endl;
  
  return 0;
}
