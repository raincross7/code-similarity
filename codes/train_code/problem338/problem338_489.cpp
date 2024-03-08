#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define printVec(v) printf("{"); for (const auto& i : v) { std::cout << i << ", "; } printf("}\n");
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//get the biggest element.
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
  vector<int> a(n);
  rep (i, n) cin >> a[i];

  bool ok = true;
  int skip = min_element(a.begin(), a.end()) - a.begin();
  int small = *min_element(a.begin(), a.end());
  while (ok) {
    ok = false;
    int div = small;
    int pre_skip = skip;
    for (int i = 0; i < a.size(); i++) {
      if (i == pre_skip) continue;
      a[i] %= div;
      if (a[i] != 0 && small > a[i]) {
        ok = true;
        small = a[i];
        skip = i;
      }
    }
  }

  cout << accumulate(a.begin(), a.end(), 0) << endl;
  return 0;
}
