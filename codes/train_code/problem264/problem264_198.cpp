#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define mp make_pair
#define PI pair<ll,ll>
#define poly vector<ll>
#define mem(a) memset((a),0,sizeof(a))
#define For(i,l,r) for(int i=(int)(l);i<=(int)(r);i++)
#define Rep(i,r,l) for(int i=(int)(r);i>=(int)(l);i--)
#define pb push_back
#define fi first
#define se second
#define SZ(x) ((int)(x.size()))
inline char gc(){
    static char buf[100000],*p1=buf,*p2=buf;
    return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;
}
#define gc getchar
inline ll read(){
	ll x = 0; char ch = gc(); bool positive = 1;
	for (; !isdigit(ch); ch = gc())	if (ch == '-')	positive = 0;
	for (; isdigit(ch); ch = gc())	x = x * 10 + ch - '0';
	return positive ? x : -x;
}
inline void write(ll a){
    if(a<0){
    	a=-a; putchar('-');
	}
    if(a>=10)write(a/10);
    putchar('0'+a%10);
}
inline void writeln(ll a){write(a); puts("");}
inline void wri(ll a){write(a); putchar(' ');}
ll rnd(){
	ull ans=0;
	For(i,0,4)ans=ans<<15^rand();
	return ans%((ull)1<<63);
}
const int N=200005;
ll a[N],b[N];
void GG(){
	puts("-1"); exit(0);
}
int main(){
	#ifdef Brollan
		freopen("1.in","r",stdin);
	#endif
	int n=read();
	For(i,0,n)a[i]=read();
	if(n==0){
		if(a[0]!=1)GG();
		else puts("1");
		return 0;
	}
	if(a[0])GG();
	Rep(i,n,1)b[i]=b[i+1]+a[i];
	ll dq=1,ans=1;
	For(i,1,n){
		if(a[i]>dq*2)GG();
		if(dq*2<=b[i])dq*=2;
		else dq=b[i];
		ans+=dq; dq-=a[i];
	}
	cout<<ans<<endl;
}
