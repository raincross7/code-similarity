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
lll gcd(lll a,lll b,lll &x,lll &y){if(!b){x=1;y=0;return a;}lll d=gcd(b,a%b,y,x);y-=a/b*x;return d;}
ll gcd(ll a,ll b){lll x=0,y=0; return gcd(a, b, x, y);}
ll modpow(lll a,lll n,ll m){if(a==0)return a;lll p=1;for(;n>0;n/=2,a=a*a%m)if(n&1)p=p*a%m;return(ll)p;}
void dout(double d){printf("%.12f\n",d);}

const int iinf = 1e9;
const ll linf = 1e18;
const int mod = 1e9+7;
const double pi = acos(-1);
const double eps = 1e-10;
int n, a[100000];
main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> n;
  FOR(i, 0, n) cin >> a[i];
  sort(a, a + n);
  int j = -1, ans = -1;
  FOR(i, 0, n-1){
    if(min(a[i], a[n-1] - a[i]) > j){
      ans = a[i];
      j = min(a[i], a[n-1] - a[i]);
    }
  }
  cout << a[n-1] << " " << ans << endl;
  return 0;
}