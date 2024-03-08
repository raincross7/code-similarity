#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define printVec(v) printf("{"); for (const auto& i : v) { std::cout << i << ", "; } printf("}\n");
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//Get the highest value and key from a map.
template<typename KeyType, typename ValueType>
std::pair<KeyType,ValueType> get_max( const std::map<KeyType,ValueType>& x ) {
  using pairtype=std::pair<KeyType,ValueType>;
  return *std::max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) {
        return p1.second < p2.second;
  });
}
using namespace std;
using P = pair<int,int>;
using ll = long long;
const ll INF = 1LL<<60;

int main() {
  int n;
  cin >> n;
  vector<int> dn(n);
  rep(i, n) cin >> dn[i];

  int cnt = 0;
  sort(dn.begin(), dn.end());
  for (int i = 1; i <= 1e5; i++) {
    auto iter_upper = upper_bound(dn.begin(), dn.end(), i);
    if (iter_upper == dn.end()) break;
    if (iter_upper - dn.begin() == dn.end() - iter_upper) ++cnt;
  }

  cout << cnt << endl;
  return 0;
}
