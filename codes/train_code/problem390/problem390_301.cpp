/*{{{*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
// pll pp; -> (pp.first,pp.second)
// vector<vl> pp(n,vl(2)); sort(pp.begin(),pp.end(),[](vl a,vl b){return a[0]<b[0];});

#define REP(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define RREP(i,n) for(ll (i)=(n)-1;(i)>=0;(i)--)
#define DEBUG(x) cout << #x << ": " << x << endl
#define CHMAX(a,b) a=max((a),(b))
#define CHMIN(a,b) a=min((a),(b))
/*}}}*/
int main() {
  ll q;
  cin >> q;
  REP(i,q){
    ll a,b;
    cin >> a >> b;
    if(a==b){
      cout << 2*(a-1) << endl;
      continue;
    }
    ll rt = floor(sqrt((double)a*b));
    ll ans = 0;
    ans += 2*(rt-1);
    if(a<=rt) ans--;
    if(b<=rt) ans--;
    ans += a*b/rt - (rt-1);
    if(a*b%rt==0) ans --;
    cout << ans << endl;
  }
  return 0;
}
