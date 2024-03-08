#include<bits/stdc++.h>
#include<cctype>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);i++)
#define reps(i,n) for (int i=1;i<=(n);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rreps(i,n) for (int i=(n);i>0;i--)
#define all(v) (v).begin(),(v).end()
#define pi 3.1415926535897932384
#define E9 1000000000
#define eps 1e-4
#define pii pair<int,int>
template<class T> inline bool chmin(T &a, T b) {if (a>b) {a = b; return 1;} return 0;};
template<class T> inline bool chmax(T &a, T b) {if (a<b) {a = b; return 1;} return 0;};
typedef long long int ll;
const long long INF = 1LL << 60;

int main(){
  int N; cin >> N;
  ll A[N]; rep(i,N) cin >> A[i];
  ll cumsum = 0;
  map<ll,int> d;
  d[0]++;
  rep(i,N){
    cumsum += A[i];
    d[cumsum]++;
  }
  ll ans = 0;
  for (auto p:d){
    ll n = p.second;
    ans += n*(n-1)/2;
  }
  cout << ans << endl;
 

  // cout << fixed << setprecision(10);
  
  return 0;
}
