#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<list>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define mp make_pair
#define rep(i, n) for(int i=0;i<n;++i)
#define rrep(i, n) for(int i=n;i>=0;--i)
const int inf=1e9+7;
const ll mod=1e9+7;
const ll mod1=998244353;
const ll big=1e18;
const double PI=2*asin(1);

int main() {
  double N, K;
  cin>>N>>K;
  double ans=0;
  double tmpans;
  int tmp;
  for(int i=1;i<=N;++i) {
    if(i>=K) ans += 1/N;
    else {
      tmpans = 1/N;
      tmp = i;
      while(tmp<K) {
        tmpans /= 2;
        tmp *= 2;
      }
      ans += tmpans;
    }
  }
  cout<<setprecision(20)<<ans<<endl;
}
