#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll> P;
typedef pair<ll,P>  PP;
typedef vector<ll> Vector;
typedef vector<Vector> DVector;
typedef priority_queue<PP, vector<PP>, greater<PP>> PPQueue;

#define fi          first
#define se          second
#define sfi         se.fi
#define sse         se.se
#define pb          push_back
#define INF         INT_MAX
#define MOD         1000000007
#define bcnt        __builtin_popcount
#define all(x)      (x).begin(),(x).end()
#define uni(x)      x.erase(unique(all(x)),x.end())
#define ub(x,y)     (upper_bound(all(x),y)-x.begin())
#define lb(x,y)     (lower_bound(all(x),y)-x.begin())
#define rep(i,n)    repl(i,0,n-1)
#define usort(x)    sort(all(x))
#define dsort(x)    sort(all(x),greater<ll>())
#define mkp(x,y)    make_pair(x,y)
#define mmax(x,y)   (x>y?x:y)
#define mmin(x,y)   (x<y?x:y)
#define maxch(x,y)  x=mmax(x,y)
#define minch(x,y)  x=mmin(x,y)
#define exist(x,y)  (find(all(x),y)!=x.end())
#define each(itr,v) for(auto itr:v)
#define repl(i,a,b) for(ll i=(ll)(a);i<=(ll)(b);i++)

int main(){
  cin.sync_with_stdio(false);
  ll n,k;
  cin >> n >> k;
  Vector a(n);
  rep(i,n)cin >> a[i];
  usort(a);
  vector<bitset<5001>> table(n);
  rep(i,n)table[i].set(i);
  vector<bitset<5001>> dp(k,~bitset<5001>());
  dp[0] = ~dp[0];
  rep(i,n)for(ll j=k-1;j>=a[i];j--)if(!dp[j-a[i]][5000])dp[j] &= (dp[j-a[i]] | table[i]);
  ll cou = n;
  rep(i,n)repl(j,mmax(0,k-a[i]),k-1)if(!dp[j][i]){cou--;break;}
  cout << cou << endl;
}
