#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define ALL(a)  (a).begin(),(a).end()
#define SZ(a) int((a).size())
#define SORT(c) sort((c).begin(),(c).end())
#define MEMSET(v, h) memset((v), h, sizeof(v))
#define sqr(x) ((x) * (x))
#define bit(n) (1LL<<(n))
#define pcnt(x) __builtin_popcountll(x)
#define PB push_back
#define MP make_pair
#define endl "\n"
using Edge = pair<int,int>;
using Graph = vector<vector<Edge>>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
// ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main() {
  int n,k; cin >> n >> k;
  ll a[n];
  FOR(i,0,n-1) cin >> a[i];

  ll ans = 20010010011;

  FOR(b,0,bit(n)-1){
    if(pcnt(b)<k) continue;
		ll nowh = 0;
    ll cost = 0;
		FOR(i,0,n-1){
			if(b & bit(i)){
				if(nowh<a[i]){
          nowh = a[i];
        } else {
          cost += nowh+1 - a[i];
          nowh = nowh+1;
        }
			}
      chmax(nowh,a[i]);
		}

    chmin(ans,cost);
	}

  cout << ans << endl;
}

