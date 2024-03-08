#include <bits/stdc++.h>
#include <atcoder/all> 

#define f(i,a,b) for( ll i = a; i < b ; i++ ) 
#define af(i,a,b) for( ll i = a; i >= b ; i--)
#define rep(i,a,b,k) for(ll i = a; i < b ; i+= k )
#define arep(i,a,b,k) for( ll i = a; i >= b ; i-= k)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz(a) (ll) a.size()
#define all(a) a.begin(), a.end()
#define sor(a) sort( a.begin(), a.end() )
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define inter ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

// policy-based
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;	


using namespace std;
using namespace atcoder;

typedef long long ll; // int or long long
typedef long double ld;
typedef pair<ll,ll> ii ;
typedef vector<ll>  vi ;
typedef vector<ii> vii ;

/*
typedef tree<
ll,
null_type,
less<ll>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
*/
 
const ll MAX = 5e6 + 100;
const ll inf = 1e9;

int main(){
	fastio;	
	ll n,q,t,u,v;
	cin >> n >> q;
	dsu d(n);
	while(q--){
		cin >> t >> u >> v;
		if(t == 0) d.merge(u,v);
		else{
			if(d.same(u,v)) cout <<"1\n";
			else cout << "0\n";
		}
	}
}