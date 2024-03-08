#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

const ll MOD=1000000007;

ll abs1(ll a){
  if(a>=0)return a;
  else return -a;
}

ll gcd1(ll a,ll b){
  if(a==0 && b==0)return 0;
  ll n;
  while(a%b!=0){
    n=a%b;
    a=b;
    b=n;
  }
  return b;
}

ll solveLinear(ll n,ll m,ll c){
  if(n==0 && m==0)return 0;
  ll a[100],b[100];
  a[0]=n;b[0]=m;
  int i=1;
  while(b[i-1]!=0){
    a[i]=b[i-1];
    b[i]=a[i-1]%b[i-1];
    i++;
  }
  n=i;
  if(c%a[n-1]!=0){
    return 0;
  }
  ll x=c/a[n-1],y=0;
  for(i=1;i<n;i++){
    ll cnt=x;
    x=y;
    y=cnt-(a[n-i-1]/b[n-i-1])*y;
  }
  return x;
}

ll modRev(ll a,ll p){
  ll n=solveLinear(a,p,1);
  n=n%p;
  if(n<0)return n+p;
  return n;
}

int main(){
  int i,j,cnt=0;
  int n;
  cin>>n;
  int a[n],b[n];
  for(i=0;i<n;i++)cin>>a[i]>>b[i];
  ll sum=0;
  for(i=0;i<n;i++)sum+=a[i]-b[i];
  ll c[n];
  for(i=0;i<n;i++)c[i]=a[i]+b[i];
  sort(c,c+n,greater<int>());
  for(i=0;i<n;i++){
    if(i%2==0)sum+=c[i];
    else sum-=c[i];
  }
  cout<<sum/2<<endl;
}