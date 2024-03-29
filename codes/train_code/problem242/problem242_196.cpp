// This amazing code is by Eric Sunli Chen.
#include<bits/stdc++.h>
using namespace std;
template<typename T> bool get_int(T &x)
{
	char t=getchar();
	bool neg=false;
	x=0;
	for(; (t>'9'||t<'0')&&t!='-'&&t!=EOF; t=getchar());
	if(t=='-')neg=true,t=getchar();if(t==EOF)return false;
	for(; t<='9'&&t>='0'; t=getchar())x=x*10+t-'0';
	if(neg)x=-x;return true;
}
template<typename T> void print_int(T x)
{
	if(x<0)putchar('-'),x=-x;
	short a[20]= {},sz=0;
	while(x>0)a[sz++]=x%10,x/=10;
	if(sz==0)putchar('0');
	for(int i=sz-1; i>=0; i--)putchar('0'+a[i]);
}
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define get1(a) get_int(a)
#define get2(a,b) (get1(a)&&get1(b))
#define get3(a,b,c) (get1(a)&&get2(b,c))
#define printendl(a) print_int(a),puts("")
typedef long long LL;
typedef unsigned long long uLL;
typedef pair<int,int> pii;
typedef vector<int> vi;
const int inf=0x3f3f3f3f;
const LL Linf=1ll<<61;
const double pi=acos(-1.0);

const int maxn=1111;
const int dx[]={1,-1,0,0};
const int dy[]={0,0,1,-1};
const char dir[]="LRDU";

int n;
LL x[maxn],y[maxn];

void construct(int lvl,LL x,LL y)
{
	if(lvl<0)return;
	LL len=1ll<<lvl;
	for(int d=0;d<4;d++)
	{
		LL nx=x+dx[d]*len,ny=y+dy[d]*len;
		if(abs(nx)+abs(ny)<len)
		{
			construct(lvl-1,nx,ny);
			putchar(dir[d]);
			return;
		}
	}
}

int main()
{
	get1(n);for(int i=1;i<=n;i++)get2(x[i],y[i]);
	for(int i=1;i<=n;i++)if((x[i]+y[i]-x[1]-y[1])%2)
	{
		puts("-1");
		return 0;
	}
	
	if((x[1]+y[1])%2!=0)
	{
		puts("40");
		for(int i=0;i<40;i++)printf("%lld ",1ll<<i);puts("");
		for(int i=1;i<=n;i++)
		{
			construct(39,x[i],y[i]);
			puts("");
		}
	}
	else
	{
		puts("40");
		printf("1 ");for(int i=0;i<39;i++)printf("%lld ",1ll<<i);puts("");
		for(int i=1;i<=n;i++)
		{
			putchar('L');construct(38,x[i]+1,y[i]);
			puts("");
		}
	}
	return 0;
}