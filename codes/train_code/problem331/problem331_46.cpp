#include <bits/stdc++.h>
#define fi first
#define se second
#define rep(i,n) for(ll i=0;i<(n);i++)
#define rrep(i,n) for(ll i = 1; i <= (n); ++i)
#define drep(i,n) for(ll i = (n)-1; i >= 0; --i)
#define all(v) v.begin(),v.end()
#define len(x) (ll)(x).length()
#define maxs(x,y) x = max(x,y)
#define mins(x,y) x = min(x,y)
#define pb push_back
#define sz(x) (ll)(x).size()
#define v(T) vector<T>
#define vv(T) vector<vector<T>>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<P> vp;
ll gcd(ll a,ll b){if(a%b==0){return b;}else{return(gcd(b,a%b));}}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
const int INF=1e9;
const ll MX = 1e18;
const int MOD=INF+7;
const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};
const double PI=acos(-1);
 
int a[12][12];
 
int main() {
  int n, m, x;
  cin >> n >> m >> x;
  vector<int> c(n);
  rep(i,n) {
    cin >> c[i];
    rep(j,m) cin >> a[i][j];
  }
 
  int ans = INF;
  rep(s,1<<n) {
    int cost = 0;
    vector<int> d(m);
    rep(i,n) {
      if (s>>i&1) {
        cost += c[i];
        rep(j,m) d[j] += a[i][j];
      }
    }
    bool ok = true;
    rep(j,m) if (d[j] < x) ok = false;
    if (ok) ans = min(ans, cost);
  }
  if (ans == INF) cout << -1 << endl;
  else cout << ans << endl;
  return 0;
}