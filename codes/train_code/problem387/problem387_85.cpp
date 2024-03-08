#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rep(i,n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<n;++i)
#define exrep(i, a, b) for(ll i = a; i < b; i++)
#define out(x) cout << x << endl
#define EPS (1e-7)
#define gearup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<pair<int,int> > vpii;
typedef vector<vector<int> > vvi;
typedef vector<vector<char> > vvc;
typedef vector<vector<bool> > vvb;
typedef vector<vector<double> > vvd;
typedef vector<vector<string> > vvs;
typedef vector<ll> vl;
typedef vector<vector<ll> > vvl;
typedef vector<vector<vector<ll> > > vvvl;
//ll MOD = 1000000007;
ll MOD = 998244353;
const long long L_INF = 1LL << 60;
const int INF = 2147483647; // 2^31-1
const double PI = acos(-1);
//cout<<fixed<<setprecision(10);

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
template<class T> void debug(T v){rep(i,v.size()) cout<<v[i]<<" ";cout<<endl;}
const ll dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const ll dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

// a^b mod を計算する
ll mod_pow(ll a, ll b, ll p) {
    if (b == 0) return 1;
    if (b & 1) return (a * mod_pow(a, b - 1, p)) % p;
    ll t = mod_pow(a, b / 2, p);
    return (t * t) % p;
}

signed main()
{   
  gearup;
  ll n; cin >> n;
  vl d(n);
  rep(i,n)cin>>d[i];
  
  if(d[0] != 0){
      out(0);
      return 0;
  }
  ll res = 1;
  map<int,ll> mp;
  rep1(i,n){
      if(d[i] == 0){
          out(0);
          return 0;
      }
      mp[d[i]]++;
  }
  for(auto m:mp){
      int num = m.first;
      if(num == 1)continue;
      if(mp[num-1] == 0){
          out(0);
          return 0;
      }
      res = res * mod_pow(mp[num-1],m.second,MOD) % MOD;
  }
  out(res);
}