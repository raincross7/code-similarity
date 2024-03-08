#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <string>
#include <cstring>
#include <bitset>
#include <functional>
#include <random>
#define REP(_i,_a,_n) for(int _i=_a;_i<=_n;++_i)
#define PER(_i,_a,_n) for(int _i=_n;_i>=_a;--_i)
#define hr putchar(10)
#define pb push_back
#define lc (o<<1)
#define rc (lc|1)
#define mid ((l+r)>>1)
#define ls lc,l,mid
#define rs rc,mid+1,r
#define x first
#define y second
#define io std::ios::sync_with_stdio(false)
#define endl '\n'
#define DB(_a) ({REP(_i,1,n) cout<<_a[_i]<<',';hr;})
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int P = 1e9+7, INF = 0x3f3f3f3f;
ll gcd(ll a,ll b) {return b?gcd(b,a%b):a;}
ll qpow(ll a,ll n) {ll r=1%P;for (a%=P;n;a=a*a%P,n>>=1)if(n&1)r=r*a%P;return r;}
ll inv(ll x){return x<=1?1:inv(P%x)*(P-P/x)%P;}
inline int rd() {int x=0;char p=getchar();while(p<'0'||p>'9')p=getchar();while(p>='0'&&p<='9')x=x*10+p-'0',p=getchar();return x;}
//head



#ifdef __APPLE__
const int N = 1e2+50;
#else
const int N = 1e6+50;
#endif



int n,v,p,m,a[N];
ll s[N];

int main() {
	scanf("%d%d%d%d",&n,&m,&v,&p);
	REP(i,1,n) scanf("%d",a+i);
	sort(a+1,a+1+n,greater<int>());
	REP(i,1,n) s[i]=s[i-1]+a[i];
	int ans, pos = p;
	while (pos<n&&a[pos+1]==a[p]) ++pos;
	ans = pos++;
	REP(i,pos,n) {
		if (a[i]+m<a[p]) break;
		int j = i;
		while (j<n&&a[j+1]==a[i]) ++j;
		int cnt = v-(p-1)-(n-i+1);
		if (cnt>0) {
			if (s[i-1]-s[p-1]+(ll)cnt*m>(ll)(i-p)*(a[i]+m)) break;
		}
		ans += j-i+1;
		i = j;
	}
	printf("%d\n",ans);
}






