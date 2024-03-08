#include<bits/stdc++.h>
using namespace std;
#define inf 1000000000
#define INF 1000000000000000
#define ll long long
#define ull unsigned long long
#define M (int)(1e9+7)
#define P pair<int,int>
#define PLL pair<ll,ll>
#define FOR(i,m,n) for(int i=(int)m;i<(int)n;i++)
#define RFOR(i,m,n) for(int i=(int)m;i>=(int)n;i--)
#define rep(i,n) FOR(i,0,n)
#define rrep(i,n) RFOR(i,n,0)
#define all(a) a.begin(),a.end()
#define IN(a,n) rep(i,n){ cin>>a[i]; }
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define PI 3.14159265
#define F first
#define S second
#define PB push_back
#define EB emplace_back


void init(){
  cin.tie(0);
  ios::sync_with_stdio(false);
}

int n;
ll a[110000],b[110000];
int la=0,lb=0;
ll ans=1;

signed main(){
  init();
  cin>>n;
  rep(i,n){
    cin>>a[i];
  }
  rep(i,n){
    cin>>b[i];
  }
  vector<ll> v(n,INF);

  rep(i,n){
    if(la<a[i]){
      v[i]=a[i];
      la=a[i];
    }
  }

  rrep(i,n-1){
    if(lb<b[i]){
      if(a[i]<b[i])
        ans = 0;
      v[i]=b[i];
      lb=b[i];
    }
  }

  if(la!=lb)
    ans = 0;

  rep(i,n){
    if(v[i]!=INF) continue;
    ans*=min(a[i],b[i]);
    ans%=M;
  }

  cout<<ans<<endl;
}
