#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test() int t;cin>>t;for(int test=1;test<=t;test++)
#define pb push_back
#define nl cout<<"\n"
#define F first
#define S second
#define all(x) x.begin(),x.end()

template<class C> void min_self( C &a, C b ){ a = min(a,b); }
template<class C> void max_self( C &a, C b ){ a = max(a,b); }

const ll MOD = 1000000007;
ll mod( ll n, ll m=MOD ){ n%=m,n+=m,n%=m;return n; }

const int MAXN = 1e5+5;
const int LOGN = 21;
const ll INF = 1e14;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

template<class T1, class T2, class T3> void add( T1 &x, T2 y, T3 m = MOD )
{
	x += y;
	if( x >= m )
		x -= m;
}

template<class T1, class T2, class T3> void sub( T1 &x, T2 y, T3 m = MOD )
{
	x -= y;
	if( x < 0 )
		x += m;
}

int main() 
{
	fastio();

	int n;
	cin>>n;
	vector<ll>a(n),b(n),diff(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		diff[i] = a[i] - b[i];
	}

	// a[i] +2, b[j] +1, -> diff[i] +2, diff[j] -1
	ll decrease = 0, sum = 0;
	for(int i=0;i<n;i++)
	{
		if( diff[i] < 0 )
		{
			decrease += ( abs(diff[i])/2 );
		}
		else
		{
			sum += diff[i];
		}
	}

	if( decrease >= sum )
		cout<<"Yes";
	else
		cout<<"No";


	cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
	return 0;
}
