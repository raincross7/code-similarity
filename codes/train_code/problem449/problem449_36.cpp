// B - Ruined Square
// https://atcoder.jp/contests/abc108/tasks/abc108_b
#include <bits/stdc++.h>
#define lli long long int
#define uli unsigned long long int
#define rep(i, m, n) for (lli i = m; i < (n); i++)
#define repe(i, m, n) for (lli i = m; i <= (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((lli)(x).size())
#define MAX(x) *max_element(ALL(x))
const lli INF = 2147483647;
const lli MINF = -2147483648;
const lli LINF = 9223372036854775807;
const lli MOD = 1000000007; //10^9+7
const long double PI = acos(-1);
#define SORT(n) sort(n.begin(), n.end())
#define SORTR(n) sort(n.begin(), n.end(), greater<int>())
#define REV(n) reverse(n.begin(), n.end())
#define Vec(K, L, N, S) vector<L> K(N, S)
#define rt sqrt
#define pb push_back
#define eb emplace_back
#pragma GCC optimize("Ofast")
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vlli = vector<lli>;
using P = pair<lli, lli>;
// vector<P> vp;
// vp.emplace_back(a[i], b[i]);
using vs = vector<string>;
using ll = long long;
// vector入力
template <typename T>
istream &operator>>(istream &is, vector<T> &vec)
{
  for (T &x : vec)
    is >> x;
  return is;
}
// vector出力
template <typename T>
ostream &operator<<(ostream &os, vector<T> &vec)
{
  // os << '{';
  for (int i = 0; i < vec.size(); i++)
  {
    os << vec[i] << (i + 1 == vec.size() ? "" : "");
  }
  // os << '}';
  return os;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli a, b, c, d, h, k, n, x1, x2, y1, y2, w, ans = 0, count = 0;
  string s, t;
  cin >> a >> b >> c >> d;
  w = c - a;
  h = d - b;
  // if (c - a > 0)
  // {
  x1 = a + (w - h);
  y1 = b + (w + h);
  x2 = c - (w + h);
  y2 = d + (w - h);
  // }
  // else
  // {
  //   x1 = a - (w + h);
  //   y1 = b - (w - h);
  //   x2 = c + (w - h);
  //   y2 = d - (w + h);
  // }
  cout << x1 << " " << y1 << " " << x2 << " " << y2 << "\n";
}