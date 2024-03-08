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
struct edge {
  ll to, cost;
};

int main() {
  ll N, M; cin >> N >> M;
  vector<ll> p(M); vector<string> S(M); REP(i, M) cin >> p[i] >> S[i];
  map<int, int> m; ll ac = 0; ll wa = 0;
  REP(i, M) {
    if(S[i] == "WA" && m[p[i]] != -1) m[p[i]]++;
    else if(S[i] == "AC" && m[p[i]] != -1) {
      ac++;
      wa += m[p[i]];
      m[p[i]] = -1;
    }
  }
  cout << ac << " " << wa << endl;
}