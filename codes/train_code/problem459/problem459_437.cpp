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
#define mt make_tuple
#define pqueue priority_queue
const int inf=1e9+7;
const ll mod=1e9+7;
const ll mod1=998244353;
const ll big=1e18;
const double PI=2*asin(1);

int main() {
  ll N;
  cin>>N;
  if(N%2==1) {
    cout<<0<<endl;
    return 0;
  }
  N -= N%10;
  ll ans=0;
  ll tmp = 1;
  while(tmp<N) {
    ans += N/10/tmp;
    tmp *= 5;
  }
  cout<<ans<<endl;
}