#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define mp make_pair
#define PI pair<int,int>
#define poly vector<ll>
#define For(i,l,r) for(int i=(int)(l);i<=(int)(r);i++)
#define Rep(i,r,l) for(int i=(int)(r);i>=(int)(l);i--)
#define pb push_back
#define fi first
#define se second
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
inline ull rnd(){
	return ((ull)rand()<<30^rand())<<4|rand()%4;
}
const int N=1005;
int x[N],y[N];
bool vis[2];
char ans[35];
int main(){
	int n=read();
	For(i,1,n){
		x[i]=read(); y[i]=read();
		vis[(x[i]+y[i])&1]=1;
	}
	if(vis[0]&&vis[1]){
		puts("-1");  return 0;
	}
	int m=31;
	cout<<m+vis[0]<<endl;
	For(i,0,m-1)wri(1<<i);
	if(vis[0]){
		m++;
		For(i,1,n)x[i]--; puts("1");
		ans[31]='R';
	}
	For(i,1,n){
		Rep(j,30,0){
			int t=1<<j;
			if(x[i]>=t){x[i]-=t; ans[j]='R';}
			else if(x[i]<=-t){x[i]+=t; ans[j]='L';}
			else if(y[i]>=t){y[i]-=t; ans[j]='U';}
			else if(y[i]<=-t){y[i]+=t; ans[j]='D';}
			else if(abs(x[i])>=abs(y[i])){
				if(x[i]>0){x[i]-=t; ans[j]='R';}
				else {x[i]+=t; ans[j]='L';}
			}else{
				if(y[i]>0){y[i]-=t; ans[j]='U';}
				else {y[i]+=t; ans[j]='D';}
			}
		}
		cout<<ans<<endl;
	}
}