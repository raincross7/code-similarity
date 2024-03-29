#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<bitset>
#include<random>
#include<time.h>
#define INF 1000000000ll
#define MOD 1000000007ll
#define EPS 1e-10
#define REP(i,m) for(long long i=0; i<(ll)m; i++)
#define FOR(i,n,m) for(long long i=n; i<(ll)m; i++)
#define DUMP(a) for(long long dump=0; dump<(ll)a.size(); dump++) { cout<<a[dump]; if(dump!=(ll)a.size()-1) cout<<" "; else cout<<endl; }
#define ALL(v) v.begin(),v.end()
#define UNIQUE(v) sort(v.begin(),v.end()); v.erase(unique(v.begin(),v.end()),v.end());
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;

int main() {
	ios::sync_with_stdio(false);
	ll q;
	cin>>q;
	REP(i,q) {
		ll a,b;
		cin>>a>>b;
		ll l=0,r=INF*INF;
		while(r-l>1) {
			__int128 m=(l+r)/2;
			__int128 maxi=0;
			ll medi=m/2;
			for(ll i=-10000; i<10000; i++) {
				ll p=medi+i;
				if(p==a) continue;
				if(p<1||p>m) continue;
				if(p>a) {
					if((m-p)>b) {
						maxi=max(maxi,(__int128)p*(__int128)(m-p+1));
					} else {
						maxi=max(maxi,(__int128)p*(__int128)(m-p));
					}
				} else {
					maxi=max(maxi,(__int128)p*(__int128)(m-p));
				}
			}
			if(maxi<a*b) l=m;
			else r=m;
		}
		cout<<l-2<<endl;
	}
}
