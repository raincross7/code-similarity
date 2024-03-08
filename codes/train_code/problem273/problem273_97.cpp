//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
template<typename T> bool chmax(T &a,T b){if(a<b){a=b;return true;}return false;}
template<typename T> bool chmin(T &a,T b){if(a>b){a=b;return true;}return false;}
#define itn int
#define fi first
#define se second
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)
#define rrep(i,n) for(int i=(int)(n)-1;i>=0;i--)
#define rrep1(i,n) for(int i=(int)(n);i>=1;i--)
#define all(vec) vec.begin(),vec.end()
#define sortt(vec) sort((vec).begin(),(vec).end())
#define rsort(vec) sort((vec).rbegin(), (vec).rend())
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef tuple<ll,ll,ll> tlll;
typedef tuple<int,int,int> tiii;
const ll mod=1e9+7;
const int inf=2e9;
const ll lnf=9e18;

/* SegTreeLazy<X,M>(n,fx,fa,fm,ex,em): モノイド(集合X, 二項演算fx,fa,fm, 単位元ex,em)についてサイズnで構築
    set(int i,X x), build(): i番目の要素をxにセット。まとめてセグ木を構築する。O(n)
    update(a,b,x): [a,b) 全ての要素を x に更新。O(log(n))
    query(a,b): [a,b) 全てにfxを作用させた値を取得。O(log(n))
*/
template <typename X, typename M,typename T>
struct SegTreeLazy{
  using FX=function<X(X, X)>;
  using FA=function<X(X, M)>;
  using FM=function<M(M, M)>;
  int n;
  FX fx;
  FA fa;
  FM fm;
  const X ex;
  const M em;
  vector<X> dat;
  vector<M> lazy;
  SegTreeLazy(int n_,FX fx_,FA fa_,FM fm_,X ex_,M em_)
    : n(),fx(fx_),fa(fa_),fm(fm_),ex(ex_),em(em_),dat(n_*4,ex),lazy(n_*4,em){
    int x=1;
    while(n_>x) x*=2;
    n=x;
  }

  void set(int i,X x) {dat[i+n-1]=x;}
  void build(){
    for(int k=n-2;k>=0;k--) dat[k]=fx(dat[2*k+1],dat[2*k+2]);
  }

  /* lazy eval */
  void eval(int k){
      if (lazy[k]==em) return;  // 更新するものが無ければ終了
      if (k < n - 1){           // 葉でなければ子に伝搬
        lazy[k*2+1]=fm(lazy[k*2+1],lazy[k]);
        lazy[k*2+2]=fm(lazy[k*2+2],lazy[k]);
      }
      // 自身を更新
      dat[k]=fa(dat[k],lazy[k]);
      lazy[k]=em;
  }

  void update(int a,int b,M x,int k,int l,int r){
    eval(k);
    if(a<=l&&r<=b){  // 完全に内側の時
      lazy[k]=fm(lazy[k],x);
      eval(k);
    }
    else if(a<r&&l<b){                     // 一部区間が被る時
      update(a,b,x,k*2+1,l,(l+r)/2);  // 左の子
      update(a,b,x,k*2+2,(l+r)/2,r);  // 右の子
      dat[k]=fx(dat[k*2+1],dat[k*2+2]);
    }
  }
  void update(int a,int b,M x) {update(a,b,x,0,0,n);}

  X query_sub(int a,int b,int k,int l,int r){
    eval(k);
    if(r<=a||b<=l){  // 完全に外側の時
      return ex;
    }
    else if(a<=l&&r<=b){  // 完全に内側の時
      return dat[k];
    }
    else{  // 一部区間が被る時
      X vl=query_sub(a,b,k*2+1,l,(l+r)/2);
      X vr=query_sub(a,b,k*2+2,(l+r)/2,r);
      return fx(vl,vr);
    }
  }
  X query(int a,int b) {return query_sub(a,b,0,0,n);}

  //O(log(n))
  X find_rightest(int a,int b,T x) {return find_rightest_sub(a,b,x,0,0,n);}  //[a,b)で x 以下の要素を持つ最右位置
  X find_leftest(int a,int b,T x) {return find_leftest_sub(a,b,x,0,0,n);}  //[a,b)で x 以下の要素を持つ最左位置
  X find_rightest_sub(int a,int b,T x,int k,int l,int r){
    eval(k);
    if(dat[k] <= x ||r<=a||b<=l){  // 自分の値がxより大きい or [a,b)が[l,r)の範囲外ならreturn a-1
      return a-1;
    }
    else if (k>=n-1){  // 自分が葉ならその位置をreturn
      return (k-(n-1));
    }
    else{
      X vr = find_rightest_sub(a,b,x,2*k+2,(l+r)/2,r);
      if (vr!=a-1){  // 右の部分木を見て a-1 以外ならreturn
          return vr;
      } else{  // 左の部分木を見て値をreturn
          return find_rightest_sub(a,b,x,2*k+1,l,(l+r)/2);
      }
    }
  }
  X find_leftest_sub(int a,int b,T x,int k,int l,int r){
    eval(k);
    if(dat[k] <= x ||r<=a||b<=l){  // 自分の値がxより大きい or [a,b)が[l,r)の範囲外ならreturn b
      return b;
    }
    else if(k>=n-1){  // 自分が葉ならその位置をreturn
      return (k-(n-1));
    }
    else{
      X vl=find_leftest_sub(a,b,x,2*k+1,l,(l+r)/2);
      if(vl!=b){  // 左の部分木を見て b 以外ならreturn
        return vl;
      }
      else{  // 右の部分木を見て値をreturn
        return find_leftest_sub(a,b,x,2*k+2,(l+r)/2,r);
      }
    }
  }
};

ll kiri(ll a,ll b){return a%b==0?a/b:a/b+1;}

int main(){
  int n,d,a; cin >> n >> d >> a;

  using X=ll;
  using M=ll;
  auto fx=[](X x1,X x2) -> X {return max(x1,x2);};
  auto fa=[](X x,M m) -> X {return x-m;};
  auto fm=[](M m1,M m2) -> M {return m1+m2;};
  ll ex=numeric_limits<ll>::min();
  ll em=0;
  SegTreeLazy<X,M,int> rmq(n,fx,fa,fm,ex,em);

  vector<pii> xh(n);
  rep(i,n){
    cin >> xh[i].first >> xh[i].second;
    xh[i].first--;
  }
  sortt(xh);
  vector<ll> x(n);
  vector<int> h(n);
  rep(i,n) x[i]=xh[i].first;
  rep(i,n) h[i]=xh[i].second;
  for(int i=0;i<n;i++){
    rmq.set(i,h[i]);
  }
  rmq.build();
  ll ans=0;
  int leftest=rmq.find_leftest(0,n,0);
  while(leftest!=n){
    ll attackcnt=kiri(rmq.query(leftest,leftest+1),a);
    ll damage=attackcnt*a;
    int rightestplus1=-1;
    auto rid=upper_bound(all(x),x[leftest]+2*d);
    if(rid==x.end()) rightestplus1=n;
    else rightestplus1=rid-x.begin();
    rmq.update(leftest,rightestplus1,damage);
    leftest=rmq.find_leftest(leftest+1,n,0);
    ans+=attackcnt;
  }
  cout << ans << endl;
}