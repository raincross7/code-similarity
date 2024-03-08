#include <bits/stdc++.h>
#include <math.h>
#include <cmath>

using namespace std;
using ll =long long;
using vi = vector<int>; 
using vvi = vector<vi>; 
using vl = vector<ll>; 
using vvl = vector<vl>; 
using vs = vector<string>;
using vvs = vector<vs>; 
using vc = vector<char>;
using vvc = vector<vc>; 
using vb = vector<bool>;
using vvb = vector<vb>; 

#define rep(i,n) ;for( int i =0; i < n ; i ++)
#define all(a) a.begin(),a.end()
#define pb(a) push_back(a)
#define pd(a) printf("%.10f\n",a)
#define mem(a) memset(a,0,sizeof(a))
#define f(i,a,b) for(int i=a;i<b;i++)
#define pri(a)  printf("%.14lf\n",a);
#define sz(a) ((int)a.size())
#define MOD 1000000007
bool is_int_lround(double x){
  return std::lround(x)==x;
}

ll keta(ll x){
  ll n=0;
  while(x>0){
    x /=10 ;
    n ++;
  }
  return n;
}

ll conbi(int n,int m){
  
  cin>>n>>m;
  vector<ll> a(100);
  a[0] =1;
  for(int i=0;i<14;i++){
    a[i+1]=a[i]*(i+1);
  }
  return a[n] /(a[m] *a[n-m]);
}

long long modpow(long long a, long long n, long long mod) {
    long long res = 1;//繰り返し二乗法
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
ll kaijoMOD(ll x){
  ll z=1;
  if(x==0){
    return 1;
  }
  while(x>0){
    z *=x;
    z %=MOD;
    x--;
  }
  return z;
}
ll div_num(ll n){
  vl div(n+1,1);
  for(ll i=2;i*i<=n;i++){ 
    while(n%i==0){
      n /=i;
      div[i]++;
    }
  }
  if(n!=1)div[n]++;
  ll num=1;
  for(ll i=0;i<=n;i++){
    num*=div[i];
  }
  return num;
}
vector<ll> divisor(ll n) {
  vector<ll> ret;
  for(ll i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      ret.push_back(i);
      if(i * i != n) ret.push_back(n / i);
    }
  }
  sort(begin(ret), end(ret));
  return (ret);
}

int keta_wa(int x){
  int tot=0;
  while(x>0){
    tot +=x%10;
    x/=10;
  }
  return tot;
}
long long lopow(ll a, long long n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a ;
        a = a * a ;
        n >>= 1;
    }
    return res;
}

        
//vc alp ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//vc Alp ={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//cout<<""<<endl;
int main(){
  int N;cin>>N;
  vi dp(100001);
  rep(i,100001)dp[i]=i;
for(int n=1; n<= N;n++){
  dp[n] =min(dp[n],dp[n-1]+1);
  for(int i=1;i<=6*6*6*6*6*6;i*=6){
    if(i>n)continue;
    dp[n]=min(dp[n],dp[n-i]+1);
  }
  for(int i=1;i<=9*9*9*9*9;i*=9){
    if(i>n)continue;
    dp[n]=min(dp[n],dp[n-i]+1);
  }
  
}
   cout<<dp[N]<<endl;
  
}
