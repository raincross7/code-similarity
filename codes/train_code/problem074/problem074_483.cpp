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
const ll INF = 2e18;
template<class T> void print(const T& t){ cout << t << endl; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
int gcd(int a,int b){return b?gcd(b,a%b):a;}

int main(){
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  bool res = true;
  if(a!=1&&b!=1&&c!=1&&d!=1){
    res = false;
  }
  if(a!=4&&b!=4&&c!=4&&d!=4){
    res = false;
  }
  if(a!=7&&b!=7&&c!=7&&d!=7){
    res = false;
  }
  if(a!=9&&b!=9&&c!=9&&d!=9){
    res = false;
  }
  if(res){
    print("YES");
  }
  else{
    print("NO");
  }
}