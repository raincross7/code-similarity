#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define repl(i,l,r) for(ll i=(l);i<(r);i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define perl(i,r,l) for(ll i=r-1;i>=l;i--)
#define fi first
#define se second
#define pb push_back
#define ins insert
#define pqueue(x) priority_queue<x,vector<x>,greater<x>>
#define all(x) (x).begin(),(x).end()
#define CST(x) cout<<fixed<<setprecision(x)
#define vtpl(x,y,z) vector<tuple<x,y,z>>
#define rev(x) reverse(x);
using ll=long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using pl=pair<ll,ll>;
using vpl=vector<pl>;
using vvpl=vector<vpl>;
const ll MOD=1000000007;
const ll MOD9=998244353;
const int inf=1e9+10;
const ll INF=4e18;
const ll dy[8]={1,0,-1,0,1,1,-1,-1};
const ll dx[8]={0,-1,0,1,1,-1,1,-1};
ll powmod(ll n, ll k, ll m) {
ll r=1;
 for(; k>0; k >>=1) {
   if(k&1) r=(r*n)%m;
   n=(n*n)%m;
 }
  return r;
}

ll fact(ll n) {
ll a=1;
rep(i,n) {
a=a*(n-i);
}
return a;
}

ll pow(ll a, ll b) {
ll x=1;
rep(i,b) {
x=x*a;
}
return x;
}

ll X[9]={1,2,3,4,5,6,7,8,9};
int main() {
ll N;
  cin >>N;
  vl P(N);
  vl Q(N);
  rep(i,N) {
cin >>P.at(i);
  }
rep(i,N) {
cin >>Q.at(i);
}

  
  ll a=0;
  ll b=0;
 ll c=0;
  
  
  do{
    c++;
     bool aa=true;
  bool bb=true;
    rep(i,N) {
if(P.at(i)!=X[i]) {
aa=false;
}
      if(Q.at(i)!=X[i]) {
bb=false;
}
    }
    
    if(aa) {
      a=c;
    }
if(bb) {
b=c;
}

    
    
  }
while(next_permutation(X,X+N));

  
  cout<<abs(a-b)<<endl;
}

  