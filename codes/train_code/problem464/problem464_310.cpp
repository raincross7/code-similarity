#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <numeric>
#include <cmath>

#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

template<class T> inline bool chmin(T& a,T b) {if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a,T b) {if (a < b) {a = b; return true;} return false;}

const ll MOD = 1000000007;
const int INF = 1<<30;
//const ll INF = (ll)1e18 + 1;

int main(){
  int N, M; cin >> N >> M;
  vector<int> que(N);
  rep(i, M){
    int a, b; cin >> a >> b;
    a--, b--;
    que[a]++, que[b]++;
  }
  bool flag = true;
  rep(i, N){
    if (que[i] % 2 != 0) flag = false;
  }
  if (flag) cout << "YES" << endl;
  else cout << "NO" << endl;
}
