#include <iostream>
//#include <iomanip>
//#include <string>
#include <vector>
#include <algorithm>
#include <utility>
//#include <set>
//#include <map>
//#include <queue>
//#include <deque>
//#include <bitset>
//#include <math.h>
using namespace std ;
using ll = long long ;
//using ld = long double ;
using vll = vector<ll> ;
using vvll = vector<vll> ;
//using vc = vector<char> ;
//using vvc = vector<vc> ;
//using vb = vector<bool> ;
//using vvb = vector<vb> ;
using pll = pair<ll,ll> ;
//#define all(v) v.begin(),v.end()
//ll mod = 1000000007 ;
//long double pie = acos(-1) ;
ll INF = 1000000000000 ;

//void yorn(bool a){if(a) cout << "Yes" << endl ; else cout << "No" << endl ;}
//void YorN(bool a){if(a) cout << "YES" << endl ; else cout << "NO" << endl ;}
//ll gcd(long long a,long long b){if(b==0) return a ; return gcd(b,a%b) ;}
//ll lcm(long long a,long long b){return a/gcd(a,b)*b ;}
//ll sa(long long a,long long b){if(a>b) return a-b ; return b-a ;}
//void fix_cout(){cout << fixed << setprecision(20) ;}

int main(){
	ll n,m ; cin >> n >> m ;
	vector<vector<pll>> g(n,vector<pll>(0)) ;
	vvll d(n,vll(n,INF)) ;
	for(int i=0;i<m;i++){
		ll a,b,c ;
		cin >> a >> b >> c ;
		a-- ; b-- ;
		g.at(a).emplace_back(b,c) ;
		g.at(b).emplace_back(a,c) ;
		d.at(a).at(b) = c ;
		d.at(b).at(a) = c ;
	}
	for(int i=0;i<n;i++) d.at(i).at(i) = 0 ;
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) for(int k=0;k<n;k++) d.at(j).at(k) = min(d.at(j).at(k),d.at(j).at(i)+d.at(i).at(k)) ;
	ll cnt = 0 ;
	for(int i=0;i<n;i++){
		for(int j=0;j<g.at(i).size();j++){
			ll pi = i ;
			ll pj = g.at(i).at(j).first ;
			ll cost = g.at(i).at(j).second ;
			bool ok = false ;
			for(int k=0;k<n;k++){
				if(d.at(k).at(pi)+cost==d.at(k).at(pj)) ok = true ;
			}
			cnt += ok ;
		}
	}
	cnt /= 2 ;
	cout << m-cnt << endl ;
}
