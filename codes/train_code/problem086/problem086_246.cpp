#include <bits/stdc++.h>

using namespace std;
#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)

typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 1LL<<60;

ll gcd(ll a, ll b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

ll modpow(ll a, ll n, ll mod) {
  ll res = 1;
  while (n > 0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;
  vector<ll> a(N), b(N);
  rep(i, N){
    cin >> a[i];
  }

  rep(i, N){
    cin >> b[i];
  }

  ll sA = 0;
  ll sB = 0;
  ll sub = 0;
  ll cnt2 = 0;
  rep(i, N){
    sA += a[i];
    sB += b[i];
    if(b[i] < a[i]){
      sub += a[i]-b[i];
    }else{
      cnt2 += (b[i]-a[i]) / 2;
    }
  }

  if(sub <= sB - sA && sub <= cnt2){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }


  return 0;
}
