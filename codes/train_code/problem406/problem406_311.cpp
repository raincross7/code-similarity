#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
const int MAXN = 1e5 + 5;
const int lb = 60 - 1;
const int LB = lb + 5;

#define bit(x,i) (((x)>>(i))&1)

int n;
ll a[MAXN];

struct Linear_Basis
{
	ll a[LB];
	void clear(void){ memset(a,0,sizeof(a));}
	bool insert(ll x)
	{
		for(int i=lb; i>=0; --i)
		{
			if(!x) return 0;
			if(!bit(x,i)) continue;
			if(a[i]) x^=a[i];
			else
			{
				for(int j=0; j<i; ++j) if(bit(x, j))
					x ^= a[j];
				for(int j=i+1; j<=lb; ++j) if(bit(a[j], i))
					a[j] ^= x;
				a[i] = x;
				return 1;
			}
		}
		return 0;
	}
	
	ll query_max(void)
	{
		ll res=0;
		for(int i=0; i<=lb; ++i) res ^= a[i];
		return res;
	}
}lin;

int main(void)
{
	scanf("%d",&n);
	for(int i=1; i<=n; ++i)
		scanf("%lld",&a[i]);
	
	ll ans = 0;
	for(int j=0; j<=lb; ++j)
	{
		int tmp = 0;
		for(int i=1; i<=n; ++i)
			if(bit(a[i], j)) ++tmp;
		if(tmp&1)
		{
			ans |= (1ll<<j);
			for(int i=1; i<=n; ++i)
				if(bit(a[i], j))
					a[i] ^= (1ll<<j);
		}
	}
	
	for(int i=1; i<=n; ++i)
		lin.insert(a[i]);
	ans += lin.query_max() * 2;
	
	printf("%lld",ans);
	return 0;
}