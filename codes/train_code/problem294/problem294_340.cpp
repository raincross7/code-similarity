#include <bits/stdc++.h>

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
 
const ll MAX = 1e5+100;
const ll inf = 1e15;
const ll mod = 1e9+7;



int main(){
	fastio;
	ld a,b,n,x;
	cin >> a >> b >> x;
	ld ang ;
	if(a*a*b <= 2*x){
		x = a*a*b -x;
		ld h = 2*x/(a*a);
		ang =  atan(a/h)*180.0/acos(-1) ; 
	}
	else{
		ld h = 2*x/(a*b);
		ang =  atan(h/b)*180.0/acos(-1) ;
	}
	cout << fixed<< setprecision(12)<< 90.0 - ang << endl;
}