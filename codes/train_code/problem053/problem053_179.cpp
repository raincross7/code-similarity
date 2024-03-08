#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repI(i, d, n) for (int i = (d); i < (n); ++i)
#define reps1(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using ll = long long;
using P = pair<int, int>;
using Pl = pair<ll, ll>;
using M = map<int, int>;
using Ml = map<ll, ll>;
ll const INF = 1ll<<61;
double pi = 3.141592653589793238;

int main() {
  string s;
  cin >> s;
  if (s[0] != 'A') {
    cout << "WA" << endl;
    return 0;
  }
  if (count(s.begin()+2, s.end() - 1, 'C') != 1) {
    cout << "WA" << endl;
    return 0;
  }
  ll lower_count = 0;

  rep(i, ll(s.size()))
    if (islower(s[i]))
      lower_count++;

  if (lower_count != ll(s.size()) - 2) cout << "WA" << endl;
  else cout << "AC" << endl;

  return 0;
}