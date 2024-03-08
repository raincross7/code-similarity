#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <bitset>    // bitset
#include <deque>     // deque
#include <iomanip>   //setprecsion
#include <iostream>  // cout, endl, cin
#include <map>       // map
#include <queue>     // queue, priority_queue
#include <set>       // set
#include <stack>     // stack
#include <string>    // string, to_string, stoi
#include <tuple>     // tuple, make_tuple
#include <utility>   // pair, make_pair
#include <vector>    // vector

#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <cmath>  //sin, cos, tan

using namespace std;

#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rrep(i, n) for (ll i = (n - 1); i >= 0; --i)
#define blank(ans) cout << (ans) << " ";
#define mp(p, q) make_pair(p, q)
#define mt(p, q, r) make_tuple(p, q, r)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef string str;

typedef vector<ll> vll;
typedef vector<ld> vd;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<str> vs;
typedef vector<vector<ll>> vvll;
typedef vector<vector<ld>> vvd;
typedef vector<vector<bool>> vvb;
typedef vector<vector<char>> vvc;
typedef vector<vector<str>> vvs;
typedef vector<pair<ll, ll>> vpll;
typedef vector<tuple<ll, ll, ll>> vtlll;

const ld PI = acos(-1.0);
const ll MAX = 9000000000000000000;
const ll MIN = -9000000000000000000;
const ld DMAX = 4500;
const ld DMIN = -4500;
const ll MOD = 1000000007;

template <typename T>
void fin(T a)
{
  cout << a << endl;
  exit(0);
}

void Main()
{
  str s; cin >> s;
  ll Max = 0;
  ll tmp = 0;
  rep(i, s.size())
  {
    if(s[i] == 'R') tmp ++;
    else
    {
      Max = max(Max, tmp);
      tmp = 0;
    }
  }
  Max = max(Max, tmp);
  fin(Max);
}

//前処理
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << fixed << setprecision(4); //高精度少数表示
  Main();
  return 0;
}
