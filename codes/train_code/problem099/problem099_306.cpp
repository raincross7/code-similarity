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

ll nextLong() { ll x; scanf("%lld", &x); return x;}

int main2() {
  int N = nextLong();
  vector<ll> q(N);
  REP(i, N) {
    int pi = nextLong()-1;
    q[pi] = i;
  }

  vector<ll> a(N);
  REP(i, N) a[i] = (i+1) * 30000;
  vector<ll> b = a;
  reverse(ALL(b));

  REP(i, N) a[i] += q[i];

  REP(i, N) {
    if (i) cout << ' '; cout << a[i];
  }
  cout << endl;
  REP(i, N) {
    if (i) cout << ' '; cout << b[i];
  }
  cout << endl;

  return 0;
}

int main() {

#ifdef LOCAL
  for (;!cin.eof();cin>>ws)
#endif
    main2();
  return 0;
}