#include <bits/stdc++.h>

using namespace std;

#define fastio cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0)
typedef long long ll;
//#define int ll
#define swap(x, y)((x)^=(y)^=(x)^=(y))
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> matrix;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define all(c) c.begin(),c.end()
#define mp make_pair
#define pb push_back
#define ff first
#define tcase int _; cin>> _; for( ; _; --_)
#define ss second
#define endl '\n'
const int MAX = 2*(1e5 + 1);
const int INF = 0x3f3f3f3f;
const double PI = acos(-1);
const double DEG = 180/PI;
const int MOD = 1e9+7;
int mod(int x, int m){ if(x >= 0) return x % m; if(-x < m) return m-(-x); return mod(x%m, m);}
int gcd (int a, int b) {while(b){a = mod(a, b); swap(a, b);} return a;}
int lcm (int a, int b) {return a / gcd(a, b) * b;}
int fexp(int base, int exp, int m){
	int total = 1;
	for(;exp; exp>>=1){
		if(exp % 2 == 1) total = mod(((mod(total, m)) * (mod(base, m))), m);
		base= mod((mod(base, m) * mod(base, m)), m);
	}
	return total;
}

set<int> adj[MAX];
vector<bool> is(MAX, false);

int dfs(int u){
    int ans = 1;
    is[u] = true;

    for(int v: adj[u])
        if(!is[v]) ans += dfs(v);

    return ans;
}

void solve(){
    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i < m ; ++i){
        int a, b;
        cin >> a >> b;

        adj[a].insert(b);
        adj[b].insert(a);
    }

    int ans = 0;

    for(int i = 1; i <= n ; ++i)
        if(!is[i]) ans = max(ans, dfs(i));

    cout << ans << endl;
}

int32_t main(){
	fastio;
	solve();
	return 0;
}

