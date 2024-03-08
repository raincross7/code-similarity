#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define rep(i, n) for (ll i = (ll)(0); i < (ll)(n); ++i)
#define reps(i, n) for (ll i = (ll)(1); i <= (ll)(n); ++i)
#define rrep(i, n) for (ll i = ((ll)(n)-1); i >= 0; i--)
#define rreps(i, n) for (ll i = ((ll)(n)); i > 0; i--)
#define irep(i, m, n) for (ll i = (ll)(m); i < (ll)(n); ++i)
#define ireps(i, m, n) for (ll i = (ll)(m); i <= (ll)(n); ++i)
#define SORT(v, n) sort(v, v + n);
#define REVERSE(v, n) reverse(v, v+n);
#define vsort(v) sort(v.begin(), v.end());
#define all(v) v.begin(), v.end()
#define mp(n, m) make_pair(n, m);
#define cout(d) cout<<d<<endl;
#define coutd(d) cout<<std::setprecision(10)<<d<<endl;
#define cinline(n) getline(cin,n);
#define replace_all(s, b, a) replace(s.begin(),s.end(), b, a);
#define PI (acos(-1))
#define FILL(v, n, x) fill(v, v + n, x);
#define sz(x) ll(x.size())

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vs = vector<string>;
using vpll = vector<pair<ll, ll>>;
using vtp = vector<tuple<ll,ll,ll>>;
using vb = vector<bool>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1e15;
const ll MOD = 1e9+7;
const ll LINF = 1e18;



signed main()
{
  cin.tie( 0 ); ios::sync_with_stdio( false );
  ll n; cin>>n;
  priority_queue<pair<ll,pll>> q;
  rep(i,n){
    ll a,b; cin>>a>>b;
    q.emplace(a+b,pll(a,b));
  }
  ll a=0,b=0;
  ll i=0;
  while(!q.empty()){
    auto p=q.top(); q.pop();
    if(i%2==0) a+=p.second.first;
    else b+=p.second.second;
    i++;
  }
  cout<<a-b<<endl;
}