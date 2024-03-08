#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;
string char_to_string(char val) {
  return string(1, val);
}
int char_to_int(char val) {
  return val - '0';
}
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
int vector_finder(std::vector<ll> vec, int number) {
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return 1;
  }
  else { // 発見できなかったとき
    return 0;
  }
}

int main() {
  int N, M; cin >> N >> M;
  vector<ll> a(N), b(N), c(M), d(M);
  REP(i, N) cin >> a[i] >> b[i];
  REP(i, M) cin >> c[i] >> d[i];
  vector<int> ans(N);
  for(int i = 0; i < N; ++i) {
    ll tmp = pow(10, 17) + 7;
    for(int k = 0; k < M; ++k) {
      if(tmp > abs(a[i] - c[k]) + abs(b[i] - d[k])) {
        ans[i] = k + 1;
        tmp = abs(a[i] - c[k]) + abs(b[i] - d[k]);
      }
    }
  }
  REP(i, N) cout << ans[i] << endl;
}
