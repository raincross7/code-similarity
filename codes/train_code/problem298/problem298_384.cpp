#include <iostream>
#include <iomanip>
#include <cstdio>
#include <queue>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <bitset>
#include <set>
#include <stack>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,k,n) for(int i=(k);i<(int)(n);i++)
#define all(i,n) (i),(i+n)

int dx4[4]={1,0,-1,0};
int dy4[4]={0,-1,0,1};
int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};
int dx9[9]={0,1,0,-1,1,-1,1,0,-1};
int dy9[9]={0,1,1,1,0,0,-1,-1,-1};

typedef pair<int, int> P;
typedef pair<string, int> SP;
typedef long long ll;
typedef pair<ll, ll> PLL;

const int INF = 1e9;
const ll LLINF = 1e18;
const int MAX_V = 1e6+1;
const ll mod = 1000000007;
// << fixed << setprecision
// --------------------------------------
int n, k;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> k;
  int mx = (n - 1) * (n - 2) / 2;
  if(mx < k) {
    cout << -1 << endl;
    return 0;
  }

  vector<P> ans;
  REP(i, n - 1) {
    ans.push_back(P(i + 1, n));
  }

  int add = mx - k;
  vector<P> edge;
  REP(i, n - 1) FOR(j, i + 1, n - 1) edge.push_back(P(i + 1, j + 1));

  REP(i, add) ans.push_back(edge[i]);
  cout << ans.size() << endl;
  REP(i, ans.size()) {
    cout << ans[i].first << " " << ans[i].second << endl;
  }
}
