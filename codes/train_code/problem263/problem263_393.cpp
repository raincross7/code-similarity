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
struct union_find{
  size_t n;
  vector<int> par;
  size_t group;
  union_find(){}
  union_find(size_t _n):n(_n),group(_n){
    par.resize(n,-1);
  }
  void reset(size_t _n){
    n = _n;
    group = n;
    par.clear();
    par.resize(n,-1);
  }
  int root(int k){
    if(par[k]<0)return k;
    return par[k] = root(par[k]);
  }
  int size(int k){
    k = root(k);
    return -par[k];
  }
  auto operator[](int k){
    return size(k);
  }
  bool unite(int a,int b){
    a = root(a);
    b = root(b);
    if(a==b)return false;
    if(size(a)<size(b))swap(a,b);
    group--;
    par[a] += par[b];
    par[b] = a;
    return true;
  }
  auto operator()(int a,int b){
    return unite(a,b);
  }
  bool same(int a,int b){
    return root(a) == root(b);
  }
};
signed main(){

  int h,w;
  cin>>h>>w;
  vector<string> s(h);
  cin>>s;

  union_find row(h*w);
  union_find col(h*w);

  auto v = [&](int i,int j){
    return i*w+j;
  };

  rep(i,h){
    rep(j,w-1)if(s[i][j]=='.'&&s[i][j+1]=='.'){
      row.unite(v(i,j),v(i,j+1));
    }
  }
  rep(j,w){
    rep(i,h-1)if(s[i][j]=='.'&&s[i+1][j]=='.'){
      col.unite(v(i,j),v(i+1,j));
    }
  }
  ll ans = 0;
  rep(i,h)rep(j,w){
    ll tmp = row.size(v(i,j))+col.size(v(i,j));
    chmax(ans,tmp-1);
  }
  cout<<(ans)<<endl;

}