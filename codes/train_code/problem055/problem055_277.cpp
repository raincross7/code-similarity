#pragma region
#include <bits/stdc++.h>
using namespace std;
inline void ci(void){
  return;
}
template <typename First, typename... Rest>
void ci(First& first, Rest&... rest){
  cin >> first;
  ci(rest...);
  return;
}
inline void co(void){
  cout << endl;
  return;
}
template <typename First, typename... Rest>
void co(First first, Rest... rest){
  cout << first << "";
  co(rest...);
  return;
}
#define ll long long
#define ld long double
#define st string
#define wh while
#define ve vector
#define mp make_pair
#define tp tuple
#define mt make_tuple
#define pb push_back
#define pof pop_front
#define pob pop_back
#define pf push_front
#define fr front
#define ft first
#define sc second
#define tos to_string
#define len length
#define rt return
#define br break
#define con continue
#define lcm(n, m) (n * m / gcd(n, m))
#define np next_permutation
#define repi(i, m, n) for(int i=(int)(m);i<(int)(n);i++)
#define rep(i, n) repi(i, 0, n)
#define repill(i, m, n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define repll(i, n) repill(i, 0, n)
#define revi(i, m, n) for(int i=(int)(m);i>(int)(n);i--)
#define rev(i, m) revi(i, m, 0)
#define revill(i, m, n) for(ll i=(ll)(m);i>(ll)(n);i--)
#define revll(i, n) revill(i, 0, n)
#define sz(v) ((int)(v).size()) 
#define each(i, n) for(auto&& i: n)
#define all(n) (n.begin(), n.end())
#define allr(n) (n.rbegin(), n.rend())
#define sp(n) cout << fixed << setprecision(n)
#define inf pow(10, 9)
#pragma endregion
// sqrt ルート, int 2*10^9, gcd　最大公約数
// __builtin_popcount bitの個数

ve<int> dx = {0, 0, 1, -1}, dy = {1, -1, 0, 0};

int main() {
  int N;
  ci(N);
  ve<int> a(N);
  rep(i, N){
    ci(a.at(i));
  }
  int ans = 0, c = 1;
  rep(i, N - 1){
    if(a.at(i) == a.at(i + 1)){
      c ++;
    }
    else{
      ans += c / 2;
      c = 1;
    }
  }
  ans += c / 2;
  co(ans);
}
