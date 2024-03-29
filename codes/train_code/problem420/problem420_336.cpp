#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define COUT(x) cout<<(x)<<endl
#define dump(x)  cout << #x << " = " << (x) << endl;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using M = map<int,int>;
using PQ = priority_queue<int>;
using PQG = priority_queue<int, vector<int>, greater<int>>;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

int main() {
  string s, t; cin >> s >> t;
  bool ok = true;
  reverse(t.begin(), t.end());
  if (s != t) ok = false;
  reverse(t.begin(), t.end());
  reverse(s.begin(), s.end());
  if (s != t) ok = false;
  COUT( ok ? "YES" : "NO");
  return 0;
}
