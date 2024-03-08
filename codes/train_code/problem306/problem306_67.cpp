/*input
9
1 3 6 13 15 18 19 29 31
10
4
1 8
7 3
6 7
8 5
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define int long long 
#define double long double
#define f first
#define s second
#define mp make_pair
#define pb push_back

#define RE(i,n) for (int i = 1; i <= n; i++)
#define RED(i,n) for (int i = n; i > 0; i--)
#define REPS(i,n) for(int i = 1; (i*i) <= n; i++)
#define REP(i,n) for (int i = 0; i < (int)n; i++)
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define REPD(i,n) for (int i = n-1; i >= 0; i--)
#define FORD(i,a,b) for (int i = a; i >= b; i--)

#define all(v) v.begin(),v.end()
#define pii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define print(arr) for (auto it = arr.begin(); it != arr.end(); ++it) cout << *it << " "; cout << endl;
#define debug(x) cout << x << endl;
#define debug2(x,y) cout << x << " " << y << endl;
#define debug3(x,y,z) cout << x << " " << y << " " << z << endl;

typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;

const int INF = 1e18+1;
const int MOD = 1e9+7;
const double PI = 3.14159265358979323846264338;

int raise(int a,int n,int m = MOD){
  if(n == 0)return 1;
  if(n == 1)return a;
  int x = 1;
    x *= raise(a,n/2,m);
    x %= m;
    x *= x;
    x %= m;
    if(n%2)x*= a;
    x %= m;
    return x;
}

int floor1(int n,int k){
    if(n%k == 0 || n >= 0)return n/k;
    return (n/k)-1;
}

int ceil1(int n,int k){
    return floor1(n+k-1,k);
}

const int LG = 17;
const int N = 1e5+1;
int x[N];
int pre[N][LG];
int n,q,l;

void solve(){
  	cin >> n;
  	RE(i,n){
  		cin >> x[i];
  	}
  	cin >> l >> q;

  	for(int i = 1;i <= n;i++){
  		int lo = 1;
  		int hi = i-1;
  		while(lo < hi){
  			int mid = (lo+hi)/2;
  			if(x[i]-x[mid] > l)lo = mid+1;
  			else hi = mid;
  		}
  		pre[i][0] = lo;
  		for(int j = 1;j < LG;j++)pre[i][j] = pre[pre[i][j-1]][j-1];
  	}
  	while(q--){
  		int a,b;cin >> a >> b;
  		if(a < b)swap(a,b);
  		int ans = 0;
  		for(int i = LG-1;i > -1;i--){
  			if(pre[a][i] > b){
  				ans += 1<<i;
  				a = pre[a][i];
  			}
  		}
  		cout << ans+1 << endl;
  	}
}

signed main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  //freopen(".in","r",stdin);freopen(".out","w",stdout);
  int t = 1;
  //cin >> t;
  while(t--){
    solve();
  }
  return 0;
}