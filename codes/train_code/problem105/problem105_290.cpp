#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define m0(x) memset(x,-1,sizeof(x))
const int INF = 1e9 + 1;
const ll MOD = 1e9 + 7;
const double PI = 3.141592653589793;
const double eps = 1e-6;

int main(){
  ll a;
  double b;
  cin >> a >> b;
  ll c = b * 100 + eps;
  cout << ll(a*c/100) << endl;
}