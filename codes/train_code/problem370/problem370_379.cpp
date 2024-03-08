#include <bits/stdc++.h>
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define FORR(i,a,b) for (int i=(a);i>=(b);i--)
#define pb push_back
#define pcnt __builtin_popcount
#define show(x) cout<<#x<<" = "<<x<<endl;
#define maxs(x,y) x = max(x,y)
#define mins(x,y) x = min(x,y)
#define fi first
#define se second
#define rng(a) (a.begin()),(a.end())
#define each(it,c) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();it++)
#define sz(x) (int)(x).size()
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef set<int> si;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pll> vpll;
typedef set<ll> sl;
typedef __int128_t lll;
typedef pair<lll,lll> plll;
typedef vector<lll> vlll;
template<typename T>string join(vector<T>&v)
{stringstream s;FOR(i,0,sz(v))s<<' '<<v[i];return s.str().substr(1);}
template<typename A, size_t N, typename T>void Fill(A (&array)[N], const T&v)
{fill((T*)array,(T*)(array+N),v);}
template<typename T> T gcd(T a,T b){if(a>b)swap(a,b);for(;a>0;b%=a,swap(a,b));return b;}
ll modpow(lll a,lll n,ll m){if(a==0)return a;lll p=1;for(;n>0;n/=2,a=a*a%m)if(n&1)p=p*a%m;return(ll)p;}
void dout(double d){printf("%.12f\n",d);}

const int iinf = 1e9;
const ll linf = 1e18;
const int mod = 1e9+7;
const double pi = acos(-1);
const double eps = 1e-10;
int n, m, l, r;
ll d;
struct UnionFind{
  vpll p;
  void init(int n){
    p.resize(n);
    FOR(i, 0, n) p[i] = pll(-1, 0);
  }
  pll find(int a){
    if(p[a].fi < 0) return pll(a, 0);
    pll t = find(p[a].fi);
    p[a] = pll(t.fi, t.se+p[a].se);
    return p[a];
  }
  bool merge(int l, int r, ll d){
    pll _l = find(l);
    pll _r = find(r);
    if(_l.fi == _r.fi){
      return _r.se-_l.se == d;
    }else{
      p[_r.fi] = pll(_l.fi, _l.se - _r.se + d);
    }
    return true;
  }
};

UnionFind uf;
main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> n >> m;
  uf.init(n+1);
  FOR(i, 0, m){
    cin >> l >> r >> d;
    if(!uf.merge(l, r, d)){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}