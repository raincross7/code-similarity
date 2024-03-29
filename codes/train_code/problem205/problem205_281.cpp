#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>
using namespace std;

typedef long long ll;
typedef double lf;
typedef long double Lf;
typedef pair <int,int> pii;
typedef pair <ll, ll> pll;

#define TRACE(x) cerr << #x << "  " << x << endl
#define FOR(i, a, b) for (int i = (a); i < int(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define all(x) (x).begin(), (x).end()
#define _ << " " <<

#define fi first
#define sec second
#define mp make_pair

const int MAXN = 510;
const int INF = (int)1e9;

int n, m, d;
string s[2];

int main() {
  scanf("%d %d %d",&n,&m,&d);
  s[0] = "RB";
  s[1] = "YG";
  REP(i, n) {
    REP(j, m) {
      int x = i + j;
      int y = i - j;
      x = (x + INF) / d;
      x %= 2;
      y = (y + INF) / d;
      y %= 2;
      printf("%c",s[x][y]);
    }
    puts("");
  }

  return 0;
}
