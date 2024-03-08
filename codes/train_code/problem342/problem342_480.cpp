#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (n); i++)
#define repto(i, n) for(int i = 0; i <= (n); i++)
#define all(c) (c).begin(), (c).end()
#define uniq(c) c.erase(unique(all(c)), (c).end())
#define _1 first
#define _2 second
#define pb push_back
#define INF 1145141919
#define MOD 1000000007
#define DEBUG(x) cout << #x << ": " << x << endl;
template<typename T> T gcd(T a, T b) { if (b == 0) return a; return gcd(b, a % b); }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  bool flag = true;
  cin >> s;
  if (s.size() == 2) {
    if (s[0] == s[1]) {
      flag = false;
      cout << "1 2" << endl;
    }
  }
  rep(i, s.size()-2) {
    if (s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2]) {
      flag = false;
      cout << i+1 << ' ' << i+3 << endl;
      break;
    }
  }
  if (flag)
    cout << "-1 -1" << endl;
}
