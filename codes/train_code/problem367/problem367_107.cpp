#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const int dx[4] = {-1, 0, 0, 1};
const int dy[4] = {0, -1, 1, 0};
const int dx8[8] = {0, 1, 1, 1, 0, -1, -1, -1};
const int dy8[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
const string dir8[8] = {"U", "RU", "R", "RD", "D", "LD", "L", "LU"};

// Self settings
// clang-format off
#define MAX_N 100000
#define MAX 100000
#define INFTY (1<<30)
#define EPS (1e-10)
#define equals(a, b) (fabs((a) - (b)) < EPS)
#define REP(i, N) for (int i = 0; i < (int)(N); ++i)
#define SLN(i,N) (i == N-1 ? "\n" : " ")
ll fact(ll n) { ll res = 1; for(ll i=2;i<=n;++i) res = res * i; return res;}
ll nCr(ll n, ll r) {return (fact(n)/fact(n-r)*fact(r)) ;}
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
const ll MOD = 1e9+7;
const ll INF = 1LL << 60;
const int inf = 1000100011;
class Point { public: double x, y; Point(double x = 0, double y = 0) : x(x), y(y) {} Point operator+(Point p) { return Point(x + p.x, y + p.y); } Point operator-(Point p) { return Point(x - p.x, y - p.y); } Point operator*(double a) { return Point(a * x, a * y); } Point operator/(double a) { return Point(x / a, y / a); } double abs() { return sqrt(norm()); } double norm() { return x * x + y * y; } bool operator<(const Point& p) const { return x != p.x ? x < p.x : y < p.y; } bool operator==(const Point& p) const { return fabs(x - p.y) < EPS && fabs(y - p.y) < EPS; } };
typedef Point Vector;
double norm(Vector a) { return a.x * a.x + a.y * a.y; }
double abs(Vector a) { return sqrt(norm(a));}
double dot(Vector a, Vector b) { return a.x * b.x + a.y * b.y; }
double cross(Vector a, Vector b) { return a.x * b.y - a.y * b.x; }
struct Segment { Point p1, p2; };
typedef Segment Line;
// clang-format on

int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll N;
  cin >> N;
  vector<string> s(N);
  vector<int> sab(N);
  int nfb = 0, nba = 0, bab = 0;
  REP(i, N) cin >> s[i];

  for (int i = 0; i < N; i++) {
    int cnt = 0;
    if (s[i][0] == 'B' && s[i][s[i].size() - 1] == 'A') {
      bab++;  // c1
    } else if (s[i][s[i].size() - 1] == 'A') {
      nba++;
    } else if (s[i][0] == 'B') {
      nfb++;
    }

    for (int j = 0; j < s[i].size() - 1; j++) {
      if (s[i][j] == 'A' && s[i][j + 1] == 'B') {
        cnt++;
      }
    }
    sab[i] = cnt;
  }

  ll ans = 0;
  REP(i, N) ans += sab[i];

  if (bab == 0) {
    ans += min(nba, nfb);
  } else {
    if (nba + nfb > 0) {
      ans += bab + min(nba, nfb);
    } else if (nba + nfb == 0) {
      ans += bab - 1;
    }
  }

  cout << ans << endl;

  return 0;
}
