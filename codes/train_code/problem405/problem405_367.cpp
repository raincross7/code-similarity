#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0;i<n;i++)
#define repl(i,l,r) for(ll i=(l);i<(r);i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define perl(i,r,l) for(ll i=r-1;i>=l;i--)
#define fi first
#define se second
#define pb push_back
#define ins insert
#define all(x) (x).begin(),(x).end()
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
const ll MOD=1000000007;
const ll MOD9=998244353;
const int inf=1e9+10;
const ll INF=4e18;
const ll dy[8]={1,0,-1,0,1,1,-1,-1};
const ll dx[8]={0,-1,0,1,1,-1,1,-1};
using Graph = vector<vector<int>>;
const ll mod=1000000007;
const int MAX_N = 1000;         // n の最大値
 
double nCk(int n, int k) {
double res=1.0;
for(int i=0; i<n; i++){
res*=0.5;}
for(int i=0; i<k; i++){
res*=(double)(n-i);
res/=(double)(k-i);
}
return res;}
 
int main() {
ll n;
cin>>n;
ll a[n]={};
ll b[n]={};
rep(i,n){
cin>>a[i];
b[i]=a[i];}
sort(a,a+n);
sort(b,b+n);
ll mi =a[0];
ll ma =a[n-1];
ll mii=b[0];
ll maa=b[n-1];
for(ll i=1; i<n-1; i++){
if(b[i]<0){
maa = maa -b[i];}
else{
mii = mii -b[i];}
}
ll ans = maa -mii;
cout << ans << endl;
for(ll i=1; i<n-1; i++){
if(a[i]<0){
cout << ma << " " << a[i] << endl;
ma = ma -a[i];}
else{
cout << mi << " " << a[i] << endl;
mi = mi - a[i];}
}
cout << ma << " " << mi << endl;}
