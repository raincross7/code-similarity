#include <bits/stdc++.h>
using namespace std;

#if DEBUG && !ONLINE_JUDGE
  #include "header.h"
#else
  #define debug(args...)
#endif

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef long long lli;
typedef long double ld;

#define pb push_back
#define all(x) x.begin(),x.end()
#define SZ(x) (int)(x).size()
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define rep(i,a,b) for(auto i=(a);i<b;i++)

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007
void preprocess(void) {
  return;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.precision(20);
  preprocess();
  int n, m; cin>>n>>m;
  vi c(n+1);
  rep(i,0,m) {
    int x, y; cin>>x>>y;
    c[x]++;
    c[y]++;
  }
  rep(i,1,n+1) {
    if(c[i] % 2) {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
}

