#include <bits/stdc++.h>
using namespace std;

#define rep(i,m,n) for(int (i)=(int)(m);i<(int)(n);++i)
#define rep2(i,m,n) for(int (i)=(int)(n)-1;i>=(int)(m);--i)
#define REP(i,n) rep(i,0,n)
#define REP2(i,n) rep2(i,0,n)
#define FOR(i,c) for(decltype((c).begin())i=(c).begin();i!=(c).end();++i)
#define all(hoge) (hoge).begin(),(hoge).end()
#define en '\n'
using ll = long long;
using ull = unsigned long long;
template <class T> using vec = vector<T>;
template <class T> using vvec = vector<vec<T>>;
typedef pair<ll, ll> P;
constexpr long long INF = 1LL << 60;
constexpr int INF_INT = 1 << 25;
constexpr long long MOD = (ll) 1e9 + 7;
//constexpr long long MOD = 998244353LL;
using ld=long double;
static const ld pi = 3.141592653589793L;
typedef vector<ll> Array;
typedef vector<Array> Matrix;


template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

struct Edge {
	ll to, cap, rev;
	Edge(ll _to, ll _cap, ll _rev) {
	to = _to; cap = _cap; rev = _rev;
	}
};
using Edges = vector<Edge>;
using Graph = vector<Edges>;

void add_edge(Graph& G, ll from, ll to, ll cap, bool revFlag, ll revCap) {
	G[from].push_back(Edge(to, cap, (ll)G[to].size()));
	if (revFlag)G[to].push_back(Edge(from, revCap, (ll)G[from].size() - 1));
}

void solve(){
	ll n;
	cin>>n;
	Array a(n);
	REP(i,n) cin>>a[i];

	Graph g(n);
	REP(i,n-1){
		ll a,b;
		cin>>a>>b;
		a--;b--;
		add_edge(g,a,b,1,true,1);
	}

	auto dfs=[&](auto &&self,int v, int p)->P{
		//cout<<v<<en;
		ll sum=0;
		if(p!=-1 && g[v].size()==1) return {true,a[v]};
		ll con=0;
		for(auto e:g[v]){
			if(e.to==p) continue;
			P ret = self(self, e.to, v);
			if(ret.first==false || ret.second>a[v]) return {false,0};
			sum += ret.second;
			con++;
		}
		ll z=a[v];
		ll x = sum-z;
		ll y = z-x;
		//cout<<v<<" "<<x<<" "<<y<<en;
		if(x<0 || y<0) return {false,0};
		if(con==1 && x>0) return {false,0};
		return {true, y};
	};
	P ans = dfs(dfs,0,-1);
	cout<<((ans.first && (g[0].size()==1||ans.second==0))?"YES":"NO")<<en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
	solve();
	//ll t;cin>>t;REP(i,t) solve();

    return 0;
}