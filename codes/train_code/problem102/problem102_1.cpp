#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pdd;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef vector<pll> vpl;
typedef vector<vll> vvll;

#define ALL(a) a.begin(),a.end()
#define SZ(a) ((int)a.size())
#define FI first
#define SE second
#define REP(i,n) for(int i=0;i<((int)n);i++)
#define REP1(i,n) for(int i=1;i<((int)n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define PB push_back
#define EB emplace_back
#define MP(a,b) make_pair(a,b)
#define SORT_UNIQUE(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define GET_POS(c,x) (lower_bound(c.begin(),c.end(),x)-c.begin())
#define yes cout<<"Yes"<<endl
#define YES cout<<"YES"<<endl
#define no cout<<"No"<<endl
#define NO cout<<"NO"<<endl
#define Decimal fixed<<setprecision(20)
#define INF 1000000000
#define LLINF 1000000000000000000LL

const int inf = 1e9;
const ll linf = 1LL << 50;
const double eps = 1e-10;
const int MOD = 1e9 + 7;
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, -1, 0, 1};

ll mpow(ll m, ll p){
  ll power = m;
  ll res = 1;
  while(p>0){
    if(p&1)
      res = res*power;
    power = power*power;
    p /= 2;
  }
  return res;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n,k;
  cin>>n>>k;

  vll a(n);
  REP(i,n)cin>>a[i];
  vll remind(n+1);
  REP(i,n)remind[i+1]=remind[i]+a[i];

  vll sum(n*(n+1)/2);
  ll cur=0;
  for(ll i=0; i<n; i++){
    for(ll j=i+1; j<=n; j++){
      sum[cur]=remind[j]-remind[i];
      cur++;
    }
  }


  ll max_p=40;
  ll now=0;
  ll base=pow(2,40);
  for(ll i=max_p; i>=0; i--){
    ll cnt=0;
    REP(j,sum.size()){
      if(((now+base)&sum[j])==now+base)
          cnt++;
    }

    if(k<=cnt)
      now+=base;
    base/=2;
  }

  cout<<now<<endl;
}
