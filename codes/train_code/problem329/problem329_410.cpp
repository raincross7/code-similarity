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
#define INF 987654321
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
typedef pair<double, double> Pd;
typedef vector<int> Vi;
typedef vector<ll> Vll;
typedef vector<double> Vd;
typedef vector<Pi> VPi;
typedef vector<Pll> VPll;
typedef vector<Pd> VPd;
typedef tuple<int, int, int> iii;
typedef tuple<ll, ll, ll> LLL;
typedef vector<iii> Viii;
typedef vector<LLL> VLLL;
typedef complex<double> base;
const ll MOD = 1000000007;
ll POW(ll a, ll b, ll MMM = MOD) {ll ret=1; for(;b;b>>=1,a=(a*a)%MMM)if(b&1)ret=(ret*a)% MMM; return ret; }
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
ll lcm(ll a, ll b) { if (a == 0 || b == 0)return a + b; return a*(b / gcd(a, b)); }
int dx[] = { 0,1,0,-1,1,1,-1,-1 }, dy[] = { 1,0,-1,0,1,-1,1,-1 };

bitset<5001> bs[5001],now;
int a[5001],n;
int d[5001][5001];
int main() {
	bs[0]=now=1;
	int N,k;
	scanf("%d%d",&N,&k);
	while(N--)
	{
		int x;
		scanf("%d",&x);
		if(x<k)a[++n]=x;
	}
	fup(i,1,n,1)bs[i]=bs[i-1]|(bs[i-1]<<a[i]);
	fup(i,0,n-1,1)
	{
		d[i][0]=1;
		fup(j,1,k-1,1)d[i][j]=d[i][j-1]+bs[i][j];
	}
	int ans=0;
	fdn(i,n,1,1) 
	{
		bool ok=0;
		fup(j,0,k-1,1)
		{
			if(now[j])
			{
				int t=d[i-1][k-j-1];
				if(k-a[i]-j-1>=0)t-=d[i-1][k-a[i]-j-1];
				if(t>0)ok=1;
			}
		}
		if(!ok)ans++;
		now|=(now<<a[i]);
	}
	printf("%d",ans);
}