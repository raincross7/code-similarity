#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<complex>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<utility>
using namespace std;
typedef long long ll;
typedef unsigned int ui;
const ll mod = 1000000007;
typedef long double ld;
const ll INF = 1e+14;
typedef pair<int, int> P;
#define stop char nyaa;cin>>nyaa;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
typedef complex<ld> Point;
const ld eps = 1e-8;
const ld pi = acos(-1.0);
typedef pair<ld, ld> LDP;
typedef pair<ll, ll> LP;
#define fr first
#define sc second

bool check(int x, int a) {
  rep(i, 30) {
    if((!(x & (1<<i))) && (a & (1<<i))) return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N, K; cin >> N >> K;
  int A[100100];
  ll B[100100];
  rep(i, N) cin >> A[i] >> B[i];
  ll ans = 0;
  rep(i, N) {
    if(check(K, A[i])) ans += B[i];
  }
  rep(i, 30) {
    ll maxi = 0;
    if(!(K & (1<<i))) continue;
    int _K = K & ~(1<<i);
    rep(j, i) _K |= (1<<j);
    rep(i, N) if(check(_K, A[i])) maxi += B[i];
    ans = max(ans, maxi);
  }
  cout << ans << "\n";
  return 0;
}