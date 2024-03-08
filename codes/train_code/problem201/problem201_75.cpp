#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
using st=string;
using ch=char;
typedef pair<ll,ll> P;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<P> vP;
typedef vector<ch> vc;
typedef vector<vc> vvc;
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) FOR(i,0,n)
#define ROF(i,a,b) for(ll i=a;i>=b;i--)
#define per(i,a) ROF(i,a,0)
const ll MOD=1000000007;
const ll MOD2=998244353;
const ld PI=acos(-1);
const ll INF=1e18;
st abc="abcdefghijklmnopqrstuvwxyz";
st ABC="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
struct edge{ll to,cost;};

int main() {
  ll N;
  cin >> N;
  vP p(N);
  rep(i,N){
    ll x,y;
    cin >> x >> y;
    p[i].first=x+y;
    p[i].second=y;
  }
  sort(p.begin(),p.end());
  reverse(p.begin(),p.end());
  ll ans=0;
  rep(i,N){
    if(i%2==0){
      ans+=p[i].first-p[i].second;
    }
    else{
      ans-=p[i].second;
    }
  }
  cout << ans << endl;
}