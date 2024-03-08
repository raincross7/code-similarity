#include <bits/stdc++.h>
#define MOD 1000000007
#define INF 1001001001
#define LINF 1001001001001001001
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define bit(n) (1LL<<(n))
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> LLP;

int main() {
  
  int A, B;
  cin >> A >> B;

  int ans = 0;
  for (int i = A; i <= B; i++) {
    if (i % 10 == i / 10000 && i % 100 / 10 == i / 1000 % 10) ans++;
  }

  cout << ans << endl;

  return 0;
}