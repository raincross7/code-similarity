
#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define INF LLONG_MAX
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
#define int ll
#define vi vector<int>
#define IP pair<int,P>
#define PP pair<P,P>


signed main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout<<fixed<<setprecision(20);

  int n;
  cin>>n;
  int l=0,r=n;
  string sl,sr;

  cout<<0<<endl;
  cin>>sl;
  if(sl=="Vacant"){
    return 0;
  }
  cout<<n-1<<endl;
  cin>>sr;
  if(sr=="Vacant"){
    return 0;
  }

  while(true){
    int m=(r+l)/2;
    string s;
    cout<<m<<endl;
    cin>>s;
    if(s=="Vacant"){
      return 0;
    }
    if((m-l)%2==0&&sl!=s||(m-l)%2&&sl==s){
      sr=s;
      r=m;
    }else{
      sl=s;
      l=m;
    }
  }


}