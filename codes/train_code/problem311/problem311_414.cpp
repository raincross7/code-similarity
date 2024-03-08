#include <bits/stdc++.h>

using namespace std;
#define SORT(a) sort((a).begin(), (a).end())
#define RSORT(a) reverse((a).begin(), (a).end())
#define rep(i, a, b) for (int64_t i = (a); i < (b); ++i)
const int MOD = 1e9 + 7;
typedef long long ll;
// const long long INF = 1LL << 60;
const int INF = 1000000000;
using Graph = vector<vector<int>>;
typedef pair<int, int> P;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> t(n);
  for (int i = 0; i < n; i++) cin >> s[i] >> t[i];
  string k;
  cin >> k;
  bool tf = false;
  int total = 0;
  for (int i = 0; i < n; i++) {
    if (tf) total += t[i];
    if (s[i] == k) tf = true;
  }
  cout << total << endl;
}
