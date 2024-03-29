#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<vector>
#include<queue>
#include<bitset>
#include<string>
#include<stack>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<cstring>
#include<complex>
#include<cmath>
#include<iomanip>
#include<numeric>
#include<algorithm>
#include<list>
#include<functional>
#include<cassert>
#define mp make_pair
#define pb push_back
#define X first
#define Y second
#define y0 y12
#define y1 y22
#define INF 987654321987654321
#define PI 3.141592653589793238462643383279502884
#define fup(i,a,b,c) for(int (i)=(a);(i)<=(b);(i)+=(c))
#define fdn(i,a,b,c) for(int (i)=(a);(i)>=(b);(i)-=(c))
#define MEM0(a) memset((a),0,sizeof(a));
#define MEM_1(a) memset((a),-1,sizeof(a));
#define ALL(a) a.begin(),a.end()
#define SYNC ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
typedef long long ll;
typedef long double ld;
typedef double db;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int, int> Pi;
typedef pair<ll, ll> Pll;
typedef pair<ld, ld> Pd;
typedef vector<int> Vi;
typedef vector<ll> Vll;
typedef vector<double> Vd;
typedef vector<Pi> VPi;
typedef vector<Pll> VPll;
typedef vector<Pd> VPd;
typedef tuple<int, int, int> iii;
typedef tuple<int,int,int,int> iiii;
typedef tuple<ll, ll, ll> LLL;
typedef vector<iii> Viii;
typedef vector<LLL> VLLL;
typedef complex<double> base;
const ll MOD = 1000000007;
ll POW(ll a, ll b, ll MMM = MOD) {ll ret=1; for(;b;b>>=1,a=(a*a)%MMM)if(b&1)ret=(ret*a)% MMM; return ret; }
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
ll lcm(ll a, ll b) { if (a == 0 || b == 0)return a + b; return a*(b / gcd(a, b)); }
int dx[] = { 0,1,0,-1,1,1,-1,-1 }, dy[] = { 1,0,-1,0,1,-1,1,-1 };

int n;
Pll p[200];
int c(ll x,ll y)
{
	if(x>=0 && y>=0)return 1;
	if(x<=0 && y>=0)return 2;
	if(x<=0 && y<=0)return 3;
	return 4;
}
int main(){
	scanf("%d",&n);
	fup(i,0,n-1,1)
		scanf("%lld%lld",&p[i].X,&p[i].Y);
	sort(p,p+n,[&](Pll p1,Pll p2){
		int c1=c(p1.X,p1.Y),c2=c(p2.X,p2.Y);
		if(c1!=c2)return c1<c2;
		ll x1=(ll)abs(p1.X),y1=(ll)abs(p1.Y),x2=(ll)abs(p2.X),y2=(ll)abs(p2.Y);
		if(c1==1 || c1==3) return x2*y1<x1*y2;
		else return x2*y1>x1*y2;
	});
	fup(i,n,n+n-1,1)p[i]=p[i-n];
	ll ans=0;
	fup(i,0,n-1,1)
	{
		ll x=0,y=0;
		fup(j,i,i+n-1,1)
		{
			x+=p[j].X,y+=p[j].Y;
			ans=max(ans,x*x+y*y);
		}
	}
	printf("%.15f",sqrt(ans));
}