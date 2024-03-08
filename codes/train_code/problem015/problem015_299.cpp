#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<unordered_map>
#include<stack>
#include<string>
#include<iomanip>
#include<algorithm>
#include<functional>
#include<cstring>
#include<utility>
#include<math.h>
using namespace std;



/**** Type Define ****/

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<ll, P> Q;

/**** Const List   ****/
const ll INF = 1LL << 60;
const ll mod = 1000000007;
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, -1, 0, 1};
const ll NCK_MAX = 510000;
/**** General Functions ****/
ll ketawa(ll n){
  ll a=0;
  while(n!=0){
    a+=n%10;
    n/=10;
  }
  return a;
}
ll RepeatSquaring(ll N, ll P, ll M){//pow->double
    if(P==0) return 1;
    if(P%2==0){
        ll t = RepeatSquaring(N, P/2, M);
        return ((t% M)*(t % M))%M;
    }
    return (N * RepeatSquaring(N, P-1, M))%M;
}
ll RS(ll N, ll P){//modがだるいときにつかう
    if(P==0) return 1;
    if(P%2==0){
        ll t = RS(N, P/2);
        return t*t;
    }
    return (N * RS(N, P-1));
}
map< ll, int > prime_factor(ll n) {
  map< ll, int > ret;
  for(ll i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}
bool IsPrime(ll a){//order root a
  if(a==1)return false;
  for(int i=2;i*i<=a;i++){
    if(a%i==0&&a!=i){
      return false;
    }
  }
  return true;
}
ll gcd(ll a, ll b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b){
    return a  / gcd(a, b)*b;
}

ll extgcd(ll a, ll b, ll& x, ll& y) {
  if (b == 0) {
    x = 1, y = 0; return a;
  }
  ll q = a/b, g = extgcd(b, a - q*b, x, y);
  ll z = x - q * y;
  x = y;
  y = z;
  return g;
}

ll invmod (ll a, ll m) { // a^-1 mod m
  ll x, y;
  extgcd(a, m, x, y);
  x %= m;
  if (x < 0) x += m;
  return x;
}

ll *fac, *finv, *inv;

void nCk_init(ll mod) {
  fac = new ll[NCK_MAX];
  finv = new ll[NCK_MAX];
  inv = new ll[NCK_MAX];
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  for (ll i = 2; i < NCK_MAX; i++) {
    fac[i] = fac[i-1] * i % mod;
    inv[i] = mod - inv[mod%i] * (mod / i) % mod;
    finv[i] = finv[i-1] * inv[i] % mod;
  }
}

ll nCk(ll n, ll k, ll mod) {
  if (fac == NULL) nCk_init(mod);
  if (n < k) return 0;
  if (n < 0 || k < 0) return 0;
  return fac[n] * (finv[k] * finv[n-k] % mod) % mod;
}

ll lmin(ll a, ll b) { return a > b ? b : a; };

ll lmax(ll a, ll b) { return a > b ? a : b; };

ll lsum(ll a, ll b) { return a + b; };

void warshall_floyd(int n) {
  for (int k = 0; k < n; k++){       // 経由する頂点
    for (int i = 0; i < n; i++) {    // 始点
      for (int j = 0; j < n; j++) {  // 終点
        //d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}

// 汎用的な二分探索のテンプレ
/*
int binary_search(int key) {
    ll ng = -1; //絶対falseの値、なければ最小値-1
    ll ok = (int)a.size(); // 絶対trueの値　なければ最大値+1

    // ok と ng のどちらが大きいかわからないことを考慮
    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;

        if (isOK(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}
*/
/**** Zip ****/

template <typename T>
class Zip {
  vector<T> d;
  bool flag;
public:
  Zip() {
    flag = false;
  }
  void add(T x) {
    d.push_back(x);
    flag = true;
  }
  ll getNum(T x) { // T need to have operator < !!
    if (flag) {
      sort(d.begin(), d.end());
      d.erase(unique(d.begin(), d.end()), d.end());
      flag = false;
    }
    return lower_bound(d.begin(), d.end(), x) - d.begin();
  }
  ll size() {
    if (flag) {
      sort(d.begin(), d.end());
      d.erase(unique(d.begin(), d.end()), d.end());
      flag = false;
    }
    return (ll)d.size();
  }
};

/**** Union Find ****/

class UnionFind {
  vector<ll> par, rank; // par > 0: number, par < 0: -par
public:
  void init(ll n) {
    par.resize(n, 1); rank.resize(n, 0);
  }
  ll getSize(ll x) {
    return par[find(x)];
  }
  ll find(ll x) {
    if (par[x] > 0) return x;
    return -(par[x] = -find(-par[x]));
  }
  void merge(ll x, ll y) {
    x = find(x);
    y = find(y);
    if (x == y) return;
    if (rank[x] < rank[y]) {
      par[y] += par[x];
      par[x] = -y;
    } else {
      par[x] += par[y];
      par[y] = -x;
      if (rank[x] == rank[y]) rank[x]++;
    }
  }
  bool isSame(ll x, ll y) {
    return find(x) == find(y);
  }
};

/**** Segment Tree ****/
class SegmentTree {
public:
  vector<pair<double, double>> node;//node[0]は使用しない
  ll n;//データの個数(nodeの最下層には何個並んでいるか)
  pair<double, double> initial_value;//初期値
public:
  void Init(ll n_,pair<double, double> initial_value_){
    n=1;
    while(n<n_)n*=2;
    node.resize(2*n);
    for(ll i=0;i<2*n;i++){
      node[i]=initial_value_;
    }
    initial_value=initial_value_;
  }
  void Update(ll k,pair<double, double> a){
    //node[k]をaにする
    //それに従って先祖も変わっていく
    k+=n;
    node[k]=a;
    while(k>1){
      k=k/2;
      node[k]=pair<double, double>(node[k*2].first*node[k*2+1].first,node[k*2].second*node[k*2+1].first+node[k*2+1].second);
    }
  }
  /*void Watch(){
    for(ll i=0;i<2*n;i++){
      cout<<node[i]<<endl;
    }
  }*/
  double Query(){//[a,b)
    return node[1].first+node[1].second;
  }
};


/**** LIS ****/
ll lis(ll* a, ll n, ll* dp) {
  fill(dp, dp + n, INF);//INFを代入
  for (ll i = 0; i < n; i++) *lower_bound(dp, dp + n, a[i]) = a[i];
  return (ll)(lower_bound(dp, dp + n, INF) - dp);
}


/**** main function ****/
ll n,m,kk;
ll ans;
string s;
vector<ll> t,a;
ll kakutei[100001];
map<P,ll> mp;
int main(){
  cin>>n>>kk;
  for(ll i=0;i<n;i++){
    ll aa;
    cin>>aa;
    a.push_back(aa);

  }
  for(ll i=0;i<=n;i++){//左からi個とる
    for(ll j=0;j<=n;j++){//右からj個とる
      //cout<<"i="<<i<<"j="<<j<<endl;
      if(i+j>kk||i+j>n)continue;
      vector<ll> totta;
      ll hidari=0,migi=0;
      //左からi個とる
      for(ll k=0;k<i;k++){
        totta.push_back(a[k]);
        hidari+=a[k];
      }
      //右からj個とる
      for(ll k=0;k<j;k++){
        totta.push_back(a[n-1-k]);
        migi+=a[n-1-k];
      }
      //cout<<hidari<<migi<<endl;
      sort(totta.begin(),totta.end());
      ll modosu=kk-(i+j);
      ll kati=hidari+migi;
      //cout<<"tottatoki"<<kati<<endl;
      for(ll k=0;k<modosu&&k<totta.size();k++){
        if(totta[k]<0){
          kati-=totta[k];
        }else{
          break;
        }
      }
      //cout<<"tottaato"<<kati<<endl;
      ans=lmax(ans,kati);
    }
  }
  cout<<ans<<endl;
}
