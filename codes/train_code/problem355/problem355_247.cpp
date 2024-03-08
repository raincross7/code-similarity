#include<bits/stdc++.h>
//ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef pair<int,int> pii;
typedef pair<pii,int> ppii;
typedef pair<int,pii> pipi;
typedef pair<ll,ll> pll;
typedef pair<pll,ll> ppll;
typedef pair<ll,pll> plpl;
typedef tuple<ll,ll,ll> tl;
ll mod=1000000007;
ll mod2=998244353;
ll mod3=1000003;
ll mod4=998244853;
ll inf=1000000000000000000;
long double pi=3.14159265358979323846L;
#define rep(i,m,n) for(ll i=m;i<n;i++)
#define rrep(i,n,m) for(ll i=n;i>=m;i--)
int dh[4]={1,-1,0,0};
int dw[4]={0,0,1,-1};
int ddh[8]={-1,-1,-1,0,0,1,1,1};
int ddw[8]={-1,0,1,-1,1,-1,0,1};
ll lmax(ll a,ll b){
    if(a<b)return b;
    else return a;
}
ll lmin(ll a,ll b){
    if(a<b)return a;
    else return b;
}
ll gcd(ll a,ll b){
    if(a<b)swap(a,b);
    if(b==0)return a;
    if(a%b==0)return b;
    return gcd(b,a%b);
}
ll Pow(ll n,ll k){
    ll ret=1;
    ll now=n;
    while(k>0){
        if(k&1)ret*=now;
        now*=now;
        k/=2;
    }
    return ret;
}
ll gya[1000010];
ll kai[1000010];
ll beki(ll n,ll k,ll md){
  ll ret=1;
  ll now=n;
  while(k>0){
    if(k%2==1){
      ret*=now;
      ret%=md;
    }
    now*=now;
    now%=md;
    k/=2;
  }
  return ret;
}
ll gyaku(ll n,ll md){
  return beki(n,md-2,md);
}
void nckinit(ll n,ll md){
  kai[0]=1;
  kai[1]=1;
  for(int i=2;i<=n;i++){
    kai[i]=kai[i-1]*i;
    kai[i]%=md;
  }
  gya[n]=gyaku(kai[n],md);
  for(int i=n-1;i>=1;i--){
    gya[i]=gya[i+1]*(i+1);
    gya[i]%=md;
  }
  gya[0]=1;
}
ll nck(ll n,ll k,ll md){
  if(k<0)return 0;
  if(k==0||n==k)return 1;
  ll ret=kai[n];
  ret*=gya[n-k];
  ret%=md;
  ret*=gya[k];
  ret%=md;
  return ret;
}
ll npk(ll n,ll k,ll md){
  if(k<0)return 0;
  if(k==0)return 1;
  ll ret=kai[n];
  ret*=gya[n-k];
  ret%=md;
  return ret;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    string s;cin>>s;
    char a[2]={'S','W'};
    rep(i,0,2){
        rep(j,0,2){
            char c[n];
            if(i==0)c[0]='S';
            else c[0]='W';
            if(j==0)c[1]='S';
            else c[1]='W';
            rep(k,1,n-1){
                if(c[k]=='S'){
                    if(s[k]=='o')c[k+1]=c[k-1];
                    else{
                        if(c[k-1]=='S')c[k+1]='W';
                        else c[k+1]='S';
                    }
                }
                else{
                    if(s[k]=='x')c[k+1]=c[k-1];
                    else{
                        if(c[k-1]=='S')c[k+1]='W';
                        else c[k+1]='S';
                    }
                }
            }
            if(c[n-1]=='S'){
                if(s[n-1]=='o'){
                    c[0]=c[n-2];
                }
                else{
                    if(c[n-2]=='S')c[0]='W';
                    else c[0]='S';
                }
            }
            else{
                if(s[n-1]=='x')c[0]=c[n-2];
                else{
                    if(c[n-2]=='S')c[0]='W';
                    else c[0]='S';
                }
            }
            if(c[0]=='S'){
                if(s[0]=='o'){
                    c[1]=c[n-1];
                }
                else{
                    if(c[n-1]=='S')c[1]='W';
                    else c[1]='S';
                }
            }
            else{
                if(s[0]=='x')c[1]=c[n-1];
                else{
                    if(c[n-1]=='S')c[1]='W';
                    else c[1]='S';
                }
            }
            if(c[0]==a[i]&&c[1]==a[j]){
                rep(k,0,n)cout<<c[k];
                cout<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
}

