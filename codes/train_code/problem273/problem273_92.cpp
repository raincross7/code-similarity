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

ll N, D, A;
ll X[200010], H[200010];
std::vector<P> ps;
ll ans = 0;

int main()
{
  std::cin >> N >> D >> A;

  rep( i, N ) {
    std::cin >> X[i] >> H[i];

    ps.emplace_back( X[i], H[i] );
  }

  std::sort(all(ps));

  std::queue<P> que;
  ll acc = 0;

  rep( i, N ) {
    while( !que.empty() && que.front().second < ps[i].first )
      acc -= que.front().first, que.pop();

    ps[i].second -= acc;

    if( ps[i].second < 0 )
      continue;

    ll num = (ps[i].second+A-1)/A;
    ans += num;
    acc += num*A;
    que.emplace( num*A, ps[i].first+2*D );
  }

  std::cout << ans << std::endl;

  return 0;
}