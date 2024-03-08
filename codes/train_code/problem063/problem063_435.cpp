#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;


using namespace std;

#define debug(x) cout << '>' << #x << ':' << x << endl;
#define loop(i,n) for(int i=0;i<(int)(n);i++)
#define foi(i,k,n) for(int i=(k); i<(int)(n); i+=1)
#define fod(i,n,k) for(int i=k; i>=(int)n; i-=1)
#define fast_io ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define endl "\n"

#define int long long
#define INF 0x3f3f3f3f
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

#define fir first
#define sec second
#define pb push_back
#define mp make_pair

typedef long long llint;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<llint> VL;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MII;
typedef set<int> SI;
string tostr(int n) {stringstream rr;rr<<n;return rr.str();}
llint toint(string s) {stringstream ss(s); llint x; ss >> x; return x;}
//typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
//gp_hash_table<string, llint> table;


//int mpow(llint base, llint exp) {
  //base %= MOD;
  //llint result = 1;
  //while (exp > 0) {
    //if (exp & 1) result = ((llint)result * base) % MOD;
    //base = ((llint)base * base) % MOD;
    //exp >>= 1;
  //}
  //return result;
//}


//void makegraph(int n, int m){
	//int i, u, v;
	//while(m--){
		//cin>>u>>v;
		//u--, v--;
		//g[u].pb(v);
		//g[v].pb(u);
	//}
//}

//void dfs(int u, int par){
	//for(int v:g[u]){
		//if (v == par) continue;
		//dfs(v, u);
	//}
//}


// ------------------------------------------------------------------ILB----------------------------------------------------------------  //

const int MX = 2e8 + 100;

bitset <MX> vis;


bool check(int x){
	if(x % 2 == 0){
		if(vis[2]) return true;
		vis[2] = 1;
	}
	
	while(x % 2 == 0){
		x /= 2;
	}
	
	for(int i = 3; i <= sqrt(x); i += 2){
		
		if(x % i == 0 && vis[i]) return true;
		
		while(x % i == 0){
			vis[i] = 1;
			x /= i;
		}
	}
	
	if(x > 1){
		if(vis[x]) return true;
		vis[x] = 1;
	}
	
	return false;
}




void solve(){
	int n;
	cin >> n;
	
	VI v(n);
	loop(i, n) cin >> v[i];
	
	bool b = false;
	loop(i, n){
		b |= check(v[i]);
	}
	
	if(!b){
		cout << "pairwise coprime";
		return;
	}
	
	loop(i, n){
		if(i) v[i] = __gcd(v[i], v[i - 1]);
	}
	
	if(v[n - 1] == 1){
		cout << "setwise coprime";
		return;
	}
	
	cout << "not coprime";
}




int32_t main() {
	fast_io;
    int t = 1;
    //cin >> t;
    //int xx = 0
    while(t--) {
		//xx++;
		//cout << "Case ";
      solve();
    }
    return 0;
}


