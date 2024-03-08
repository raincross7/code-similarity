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
#include <deque>

using namespace std;

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,k,n) for(int i=(k);i<(int)(n);i++)
#define all(i,n) (i),(i+n)

int dx4[4]={1,0,-1,0};
int dy4[4]={0,-1,0,1};
int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};

typedef pair<int, int> P;
typedef pair<string, int> SP;
typedef long long ll;
typedef pair<ll, ll> PLL;

const int INF = 1e9;
const ll LLINF = 1e18;
const int MAX_V = 1e6+1;
const ll mod = 1000000007;

// --------------------------------------
int n, k;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> k;

  vector<int> a(n);
  REP(i, n) cin >> a[i];

  REP(i, min(k, 51)) {
    vector<int> b(n, 0);

    REP(i, n) {
      int l = max(i - a[i], 0);
      int r = min(i + a[i], n - 1);

      b[l]++;
      if(r + 1 < n) b[r + 1]--;
    }

    FOR(i, 1, n) b[i] += b[i - 1];

    a = b;
  }

  REP(i, n) cout << a[i] << " ";
  cout << endl;
}
