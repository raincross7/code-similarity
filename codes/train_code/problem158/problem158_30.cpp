#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

template<typename T>
void out(T x) { cout << x << endl; exit(0); }
#define watch(x) cout << (#x) << " is " << (x) << endl

const int maxn = 1e6 + 5;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
  cout << fixed << setprecision(12);
  int a,b; cin>>a>>b;
  int ans = a + b/2;
  cout<<ans;
  

  return 0;
}