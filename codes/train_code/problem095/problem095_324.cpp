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
  st s1,s2,s3;
  cin >> s1 >> s2 >> s3;
  rep(i,26){
    if(s1[0]==abc[i]){
      cout << ABC[i];
    }
  }
  rep(i,26){
    if(s2[0]==abc[i]){
      cout << ABC[i];
    }
  }
  rep(i,26){
    if(s3[0]==abc[i]){
      cout << ABC[i] << endl;
    }
  }
}
