#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vl = vector<ll>;
using vll = vector<vl>;
using Pll = pair<ll, ll>;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(v) v.begin(), v.end()
#define sz(x) ((int) x.size())
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define F first
#define S second
const int MOD = 1e9+7;
const ll INF = 2e15;
template<class T> void print(const T& t){ cout << t << endl; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}

int main(){
  ll n, k;
  cin >> n >> k;
  vl a(n);
  rep(i,n){
    cin >> a[i];
  }
  ll sum = 0;
  rep(i,n){
    ll p = 0;
    ll q = 0;
    for (ll j = i + 1; j < n; j++){
      if(a[i]>a[j]){
        p++;
      }
    }
    for (ll j = 0; j < i+1;j++){
      if(a[i]>a[j]){
        q++;
      }
    }
    sum += p * k;
    sum %= MOD;
    sum += (p+q) * (k * (k - 1) / 2 %MOD);
    sum %= MOD;
  }
  sum %= MOD;
  print(sum);
}
