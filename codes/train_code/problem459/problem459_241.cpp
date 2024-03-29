#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define repi(i,a,b) for(ll i=(a);i<(b);++i)
#define rep(i,a) repi(i,0,a)
#define repdi(i,a,b) for(ll i=(a)-1;i>=(b);--i)
#define repd(i,a) repdi(i,a,0)
#define itr(it,a) for( auto it = (a).begin(); it != (a).end(); ++it )
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define endl '\n'
#define debug(x) std::cerr << #x << " = " << (x) << endl;

using ll = long long;
using P = std::pair<ll, ll>;

constexpr ll INF = 1ll<<60;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

template<class S, class T>
std::ostream& operator<< ( std::ostream& out, const std::pair<S,T>& a )
{ std::cout << '(' << a.first << ", " << a.second << ')'; return out; }

template<class T>
std::ostream &operator<< ( std::ostream& out, const std::vector<T>& a )
{ std::cout << '['; rep( i, a.size() ){ std::cout << a[i]; if( i != a.size()-1 ) std::cout << ", "; } std::cout << ']'; return out; }

ll N;

ll legendre( ll n, ll p ) {
  ll ret = 0;

  while( n > 0 ) {
    ret += n/p;
    n /= p;
  }

  return ret;
}

ll ans;

int main() {
  std::cin >> N;

  if( N&1 ) {
    N /= 2;

    ll two = legendre( 2*N+1, 2 )-N-legendre( N, 2 );
    ll five = legendre( 2*N+1, 5 )-legendre( N, 5 );

    chmax( two, 0ll );
    chmax( five, 0ll );

    ans = std::min( two, five );
  } else {
    N /= 2;
    ans = std::min( N+legendre( N, 2 ), legendre( N, 5 ) );
  }

  std::cout << ans << endl;

  return 0;
}