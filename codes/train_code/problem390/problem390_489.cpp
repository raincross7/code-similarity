#include<bits/stdc++.h>
#define rep(i,x,y) for (int i=(x); i<=(y); i++)
#define per(i,x,y) for (int i=(x); i>=(y); i--)
#define ll long long
#define ld long double
#define inf 1000000000
#define INF 1000000000000000000ll
#define pii pair<int,int>
#define F first
#define S second
#define all(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define sqr(x) ((x)*(x))
#define y1 y1_
#define cmin(x,y) (x)=(y)<(x)?(y):(x)
#define cmax(x,y) (x)=(y)>(x)?(y):(x)
#define mset(x,y) memset((x),(y),sizeof(x))
#define mcpy(x,y) memcpy((x),(y),sizeof(y))
using namespace std;
#define int ll
const ld pi=acos(-1);
const ld eps=1e-8;
//////////////////////// header files ////////////////////////
ll read(){
	char ch=getchar(); ll x=0; int op=1;
	for (; !isdigit(ch); ch=getchar()) if (ch=='-') op=-1;
	for (; isdigit(ch); ch=getchar()) x=(x<<1)+(x<<3)+ch-'0';
	return x*op;
}
void write(ll a){
	if (a<0) putchar('-'),a=-a;
	if (a>=10) write(a/10); putchar(a%10+'0');
}
////////////////////////// fast i/o //////////////////////////
#ifdef mod
ll ksm(ll x,ll p){
	ll ret=1;
	for (; p; p>>=1,x=x*x%mod) if (p&1) ret=ret*x%mod;
	return ret;
}
ll get_inv(ll x){
	return ksm(x,mod-2);
}
#else
ll ksm(ll x,ll p){
	ll ret=1;
	for (; p; p>>=1,x=x*x) if (p&1) ret=ret*x;
	return ret;
}
#endif
//////////////////////////// qpow ////////////////////////////
void solve(){
	ll a=read(),b=read(),c,ans;
	if (a>b) swap(a,b);
	if (a==1 && b==1){ cout<<0<<endl; return; }
	//if (a==2 && b==2){ cout<<1<<endl; return; }
	c=a*b-1; c=floor((ll)sqrt((ld)a*b-1));// if (c*c>=a*b) c--;
	ans=c*2; if (c*(c+1)>=a*b) ans--;
	if (c>=a) ans--;
	cout<<ans<<endl;
}
//#define local
signed main(){
#ifdef local
	freopen("test.in","r",stdin); freopen("test.out","w",stdout);
#endif
	int T=read(); while (T--) solve();
	return 0;
}
// sample data:
/*

*/

// rest:
/*

*/