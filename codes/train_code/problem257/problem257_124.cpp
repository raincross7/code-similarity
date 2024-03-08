//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4.1,sse4.2,avx,avx2,popcnt,tune=native")
//
//#include <immintrin.h>
//#include <emmintrin.h>

#include <bits/stdc++.h>
//#pragma GCC optimize("O2")
#define vi vector<int>
#define pii pair<int, int >
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define LL long long
#define rep(i,a,n) for (int i=a;i<=n;i++)
#define per(i,a,n) for (int i=n;i>=a;i--)
#define all(x) (x).begin(), (x).end()
#define all2(x,n) (x+1), (x+1+n)
#define sz(x) ((int)(x).size())
#define mod(x) ((x)%MOD)
#define debug(x) cerr<<#x<<" : "<<x<<endl
#define mt make_tuple
#define eb emplace_back
#define o(X) (1<<(X))
#define oL(X) (1LL<<(X))
#define contain(S,X) (((S)&o(X))!=0)
#define containL(S,X) (((S)&oL(X))!=0)
using namespace std;
const int INF=0x3f3f3f3f,N=1e6+5,MOD=998244353;
const LL INF_LL=0x3f3f3f3f3f3f3f3fLL;
inline int getplc(int x,int y) { return (x>>y)&1; }
template<typename T>
T square(T x) {return x*x;}
LL qpow(LL a,LL b=MOD-2,LL _MOD=MOD){
	LL res=1;
	for(;b;b>>=1,a=a*a%_MOD){
		if(b&1)res=res*a%_MOD;
	}
	return res;
}
// Smax
//int Smax() { return -INF; }
template <typename T>
T Smax(T x) { return x; }
template<typename T, typename... Args>
T Smax(T a, Args... args) { return max(a, Smax(args...)); }
// Smin
template <typename T>
T Smin(T x) { return x; }
template<typename T, typename... Args>
T Smin(T a, Args... args) { return min(a, Smin(args...)); }
template <typename T>
// erro
#define errorl(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); errl(_it, args); }

void errl(istream_iterator<string> it) {}
template<typename T, typename... Args>
void errl(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	errl(++it, args...);
}

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); cerr<<endl;}
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << "=" << a << " # ";
	err(++it, args...);
}
void Solve();
int main() {
#ifndef ONLINE_JUDGE
//	freopen("in.txt","r",stdin);
//    freopen("o1.txt","w",stdout);
#endif
	ios::sync_with_stdio(false);cin.tie(0),cout.tie(0);
	Solve();
	return 0;
}

//////////////////////////////////////////////////////////////////

char s[15][15];
void Solve(){
  int n,m,k;
  cin>>n>>m>>k;
  rep(i,1,n){
    cin>>s[i]+1;
  }
  int ans=0;
  rep(i,0,o(n)-1){
    rep(j,0,o(m)-1){
      int tmp=0;
      rep(x,1,n){
        rep(y,1,m){
          if(!getplc(i,x-1)&&!getplc(j,y-1)){
            tmp+=(s[x][y]=='#');
          }
        }
      }
      if(tmp==k){
        ans++;
      }
    }
  }
  cout<<ans<<endl;
}