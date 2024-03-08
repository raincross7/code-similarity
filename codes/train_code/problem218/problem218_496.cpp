#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(ll i=0;i<(n);++i)
using ll = int_fast64_t;
using pll = pair<ll,ll>;
constexpr ll INF = 1LL<<60;
constexpr ll MOD = 1e9+7;
template<class T> bool chmax(T &a,const T &b){if(a<b){a=b;return 1;}return 0;}
template<class T> bool chmin(T &a,const T &b){if(a>b){a=b;return 1;}return 0;}
#if loc||local
template<class T>void dump(T&& t){cerr<<t<<endl;}
template<class T,class... Ts> void dump(T&& h, Ts&&... t){cerr<<h<<", ";dump(forward<Ts>(t)...);}
#else
void dump(){}
template<class T,class... Ts> void dump(T&& h, Ts&&... t){}
#endif
template<class T> istream &operator>>(istream&is,vector<T>&v){for(auto &elemnt:v)is>>elemnt;return is;}
template<class T,class U> istream &operator>>(istream&is,pair<T,U>&p){is>>p.first>>p.second;return is;}
template<class T> ostream &operator<<(ostream& os,vector<T>const& v){for(auto const& vi:v)os<<vi<<" ";return os;}
template<class T,class U> ostream &operator<<(ostream& os,pair<T,U>const& p){os<<p.first<<","<<p.second;return os;}
template<class T>vector<T> vec(size_t a){return vector<T>(a);}
template<class T, class... Ts>auto vec(size_t a, Ts... ts){return vector<decltype(vec<T>(ts...))>(a, vec<T>(ts...));}

signed main(){

  double n,k;
  cin>>n>>k;
  double ans = 0.0;
  for(int i=1;i<=n;++i){
    double x = i;
    double tmp = 1.0/n;
    while(x<k){x*=2.0;tmp/=2.0;}
    ans += tmp;
  }
  cout<<fixed<<setprecision(10);
  cout<<ans<<endl;

}