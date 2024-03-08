#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FOR(i, a, b) for(int i=(a);i<(b);i++)
#define REP(i, n) FOR(i, 0, n)
#define RFOR(i, a, b) for(int i=(a);i>=(b);i--)
#define RREP(i, n) RFOR(i, n, 0)
#define MFOR(i, m) for(auto i=(m).begin();i!=(m).end();i++)
#define ALL(a) (a).begin(), (a).end()
#define SZ(x) ((int)(x).size())

typedef long long int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const double eps = 1e-10;
const int MOD = 1000000007;
const int INF = 1000000000;
const ll LINF = 1 << 30;

template<typename T>
void printv(vector<T> const& s) {
  REP(i, SZ(s)) {
    cout << s[i] << " ";
  }
  cout << endl;
}


int main () {
  cin.tie(0);
  cout << setprecision(10);

  int n; cin >> n;
  vi a(n);
  REP(i, n) cin >> a[i];
  sort(ALL(a));
  reverse(ALL(a));

  int mi = a[1];
  FOR(i, 1, n-1) {
    if(abs(a[0]/2 - a[i]) <= abs(a[0]/2 - a[i+1])) {
      mi = a[i];
      break;
    }
  }

  cout << a[0] << " " << mi << endl;
}
