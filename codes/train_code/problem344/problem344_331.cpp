#include <bits/stdc++.h>
using namespace std;using ll=int_fast64_t;using ld=long double;using pll=pair<ll,ll>;using pld=pair<ld,ld>;
const ll INF=1LL<<60;void solve();int main(){cin.tie(0);ios::sync_with_stdio(false);cout<<fixed<<setprecision(10);solve();}
#define foreach(i,a) for(auto &i:a)
#define SELECTOR(_1,_2,_3,_4,SELECT,...) SELECT
#define rep(...) SELECTOR(__VA_ARGS__,_rep2,_rep1,_rep0)(__VA_ARGS__)
#define _rep0(i,n) for(ll i=0;i<n;++i)
#define _rep1(i,k,n) for(ll i=k;i<n;++i)
#define _rep2(i,k,n,d) for(ll i=k;d!=0&&d>0?i<n:i>n;i+=d)
template<class T> vector<T> make_v(size_t a,T b){return vector<T>(a,b);}
template<class... Ts> auto make_v(size_t a,Ts... ts){return vector<decltype(make_v(ts...))>(a,make_v(ts...));}
template<class T> inline bool chmax(T &a,const T &b){if(a<b){a=b; return 1;} return 0;}
template<class T> inline bool chmin(T &a,const T &b){if(a>b){a=b; return 1;} return 0;}

void solve(){
  ll n; cin>>n;
  vector<ll> A(n);
  rep(i,n) cin>>A[i];
  vector<ll> idx(n);
  rep(i,n) idx.at(A[i]-1)=i;

  ll ans=0;
  multiset<ll> s{-1,-1,n,n};
  rep(k,n,0,-1){
    ll i=idx[k-1];
    auto itl=s.insert(i);
    auto itr=itl;
    vector<ll> l(2),r(2);
    rep(i,2){
      l[i]=*(--itl);
      r[i]=*(++itr);
    }
    ans+=k*((i-l[0])*(r[1]-r[0])+(l[0]-l[1])*(r[0]-i));
  }
  cout<<ans<<"\n";
}