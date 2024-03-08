#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,n) for(int i=0,_n=(int)(n);i<_n;++i)
#define ALL(v) (v).begin(),(v).end()
#define CLR(t,v) memset(t,(v),sizeof(t))
template<class T1,class T2>ostream& operator<<(ostream& os,const pair<T1,T2>&a){return os<<"("<<a.first<<","<<a.second<< ")";}
template<class T>void pv(T a,T b){for(T i=a;i!=b;++i)cout<<(*i)<<" ";cout<<endl;}
template<class T>void chmin(T&a,const T&b){if(a>b)a=b;}
template<class T>void chmax(T&a,const T&b){if(a<b)a=b;}


int nextInt() { int x; scanf("%d", &x); return x;}

const ll MOD = (1e9+7);

int main2() {
  int N = nextInt();
  int M = nextInt();

  ll X = 0;
  ll Y = 0;
  REP(i, N) {
    ll x = nextInt();
    X += (i*x) % MOD - (ll)(N-1-i) * x % MOD;
    X = (X % MOD + MOD) % MOD;
  }
  REP(i, M) {
    ll y = nextInt();
    Y += (i*y) % MOD - (ll)(M-1-i) * y % MOD;
    Y = (Y % MOD + MOD) % MOD;
  }
  ll ans = X * Y % MOD;
  cout << ans << endl;
  return 0;
}

int main() {
  for (;!cin.eof();cin>>ws)
    main2();
  return 0;
}
