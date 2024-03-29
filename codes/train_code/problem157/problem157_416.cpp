#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define each(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define mp(a,b) make_pair(a,b)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define maxch(x,y) x=max(x,y)
#define minch(x,y) x=min(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt(x) bitset<32>(x).count()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;
typedef pair<ll, ll> PL;
typedef pair<P, ll> PPL;

#define INF INT_MAX/3

#define MAX_N 1000

int n,m;
P ps[11111];

int main(){
	cin.sync_with_stdio(false);
	while(1){
		cin>>n>>m;
		if(n==0)break;
		rep(i,n)cin>>ps[i].se>>ps[i].fi;
		sort(ps,ps+n,greater<P>());
		int res=0;
		rep(i,n){
			if(m==0)res+=ps[i].fi*ps[i].se;
			else if(m>ps[i].se){
				m-=ps[i].se;
			}else{
				res+=(ps[i].se-m)*ps[i].fi;
				m=0;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}