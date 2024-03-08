
#include <iostream>
#include <vector>
#include <array>
#include <set>
#include <cmath>
#include <string>
#include <sstream>
#include <queue> 
#include <list>
#include <stack>
#include <unordered_map>
#include <algorithm> 
#include <numeric>  
#include <functional>
#include <cassert>
#include <bitset>
#include <cctype>  
#include <iomanip> 
#include <limits>  
#include <regex>
// std::numeric_limits<int>::max(), min()
// std::setprecision(X)
// std::islower(), std::isupper(), std::tolower, std::toupper
// std::accumulate(m.begin(), m.end(), 0LL);
// std::sort(begin(),end()) // 0, 1, 2, 3 ,4 (default, less);
// std::priority_queue<int, vector<int>, less<int>> que; // 4, 3, 2, 1 (defualt, less) : 
// if ( std::regex_match(S, std::regex("(dream|dreamer|erase|eraser)*")) ) std::cout << "YES" << std::endl;

#define rep(i, n) for(int i = 0; i < (int)(n);    i++)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
typedef long long ll;

ll gcd ( ll a, ll b ) { if ( b == 0 ) return a; else return gcd ( b, a%b ); }
ll lcm ( ll a, ll b ) { return a * b / gcd(a, b); }

int main (void) {
  std::cin.tie(0);  std::ios::sync_with_stdio(false);
  ll N, K; std::cin >> N >> K;
  std::vector<ll> A(N); rep(i,N) std::cin >> A[i];

  std::vector<ll> S(N+1, 0);
  rep(i, N) {
    S[i+1] = S[i] + A[i];
    S[i+1] %= K;
  }

  ll ans = 0;
  std::queue<ll> q;
  std::unordered_map<ll, ll> mp;
  for(int r = 0; r < N+1; r++) {
    ll k = (S[r] - r) % K; if ( k < 0 ) k += K;
    ans += mp[ k ];
    mp[ k ]++;

    q.push(k);
    if ( sz(q) >= K ) {
      mp [ q.front() ]--;
      q.pop();
    }
  }
  std::cout << ans << std::endl;

  return 0;
}
