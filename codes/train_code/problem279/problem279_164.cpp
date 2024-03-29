#include "bits/stdc++.h"
using namespace std;
#define MOD 1000000007
//#define MOD 998244353
const double EPS = 1e-9;
#define INF (1LL<<60)
#define D double
#define fs first
#define sc second
#define int long long
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define RFOR(i,a,b) for(int i = (int)(b-1);i>=(int)(a);--i)
#define REP(i,n)  FOR(i,0,(n))
#define RREP(i,n) RFOR(i,0,(n))
#define ITR(itr,mp) for(auto itr = (mp).begin(); itr != (mp).end(); ++itr)
#define RITR(itr,mp) for(auto itr = (mp).rbegin(); itr != (mp).rend(); ++itr)
#define range(i,a,b) ((a)<=(i) && (i)<(b))
#define debug(x)  cout << #x << " = " << (x) << endl;
#define SP << " " <<
typedef pair<int,int> P;
typedef vector<int> vec;
typedef vector<vector<int>> mat;

signed main() {
  ios::sync_with_stdio(false);
  cout.tie(0);
  cout.precision(20);

  stack<char> stack;
  int ans = 0;
  string s;
  cin >> s;
  stack.push(s[0]);
  FOR(i, 1, s.length()){
    if(!stack.empty()) {
      if (stack.top() == s[i]) {
        stack.push(s[i]);
      } else if (stack.top() != s[i]) {
        ans += 2;
        stack.pop();
      }
    }
    else{
      stack.push(s[i]);
    }
  }

  cout << ans << endl;

  return 0;
}