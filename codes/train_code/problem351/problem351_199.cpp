#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()
typedef long long ll;
typedef pair<int, int> P;
typedef vector<vector<int>> Matrix;
static const int INF = 2000000000;


int main(){
  char x, y, ans;
  cin >> x >> y;
  if (x > y) ans = '>';
  else if (x < y) ans = '<';
  else ans = '=';
  cout << ans << endl;
}