#include<bits/stdc++.h>				//Written by ThiDaiLoc
using namespace std;				//Team Three Wolves
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pll;
#define fu(i,a,b)   for(ll i=a;i<b;i++)
#define fd(i,b,a)   for(ll i=b;i>=a;i--)
#define ms(a,x)     memset(a, x, sizeof a)
#define prec(n)     fixed<<setprecision(n)
#define pb(i)       push_back(i)
#define popb()      pop_back()
#define sc(a)       cin>>a
#define sc2(a,b)    cin>>a>>b
#define pr(a)       cout<<a<<" "
#define pr2(a,b)    cout<<a<<" "<<b<<" "
#define lowb(a,n,x) lower_bound(a,a+n,x) -a
#define lowb2(a,x)  lower_bound(a.begin(),a.end(),x) -a.begin()
#define all(x)      (x).begin(), (x).end()
#define sz(a)       (ll)a.size()
#define le(s)       (ll)s.length()						
#define re          return 	
#define	mp(a,b)     make_pair(a,b)
#define se          second
#define fi          first 
#define debug(x)    cerr << #x << " = " << x << endl
#define INPUT       freopen("locin.txt", "r", stdin)
#define OUTPUT      freopen("locout.txt", "w", stdout)
void inline minize(ll& a,ll b){a=(a>b?b:a);};
void inline maxize(ll& a,ll b){a=(a<b?b:a);};
double const eps = 1e-6;
ll const Base=1e9+7,oo=1e17,MAXN=1e5;
ll n;
bitset <MAXN+5> came;
vi dske[MAXN+5];

ll DFS(ll cur){
	ll res=0,x,cntchild=0;
	came[cur]=1;
	
	fu(i,0,sz(dske[cur])){
		x=dske[cur][i];
		if(came[x])continue;
		cntchild++;
		res^=(DFS(x)+1);
	}
	//if(cntchild==1)res++;
	//debug(cur); debug(res);
	re res;
}

ll Solves(){
//	INPUT;
	ll x,k,cnt=0,ans=0,a,b;
	came.reset();
	// PROCESSING IN HERE
	sc(n);
	fu(i,0,n-1){
		sc2(a,b);
		dske[a].pb(b);
		dske[b].pb(a);
		
	}
	
	if(DFS(1))pr("Alice");
	else pr("Bob");
	
	re 0;
	// Hack it if you can :)
}
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Solves();
}