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

const int MAX_N = 1123456;
ll num_of_divisors[MAX_N];

int main2() {
  ll N = nextLong();

  ll ans = 0;
  for (int n = 1; n < N; n++) {
    ans += num_of_divisors[n];
  }
  cout << ans << endl;
  return 0;
}

int main() {

  for (int d = 1; d < MAX_N; d++) {
    for (int i = d; i < MAX_N; i += d) {
      num_of_divisors[i]++;
    }
  }

#ifdef LOCAL
  for (;!cin.eof();cin>>ws)
#endif
    main2();
  return 0;
}