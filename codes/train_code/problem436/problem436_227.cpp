//
// Noszály Áron 9a Debreceni Fazekas Mihály Gimnázium
//
#include<bits/stdc++.h>
#include<cstdlib>

using namespace std;

typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;

#define all(s) (s).begin(),(s).end()
#define pb push_back
#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define INF std::numeric_limits<int>::max()
#define MINF std::numeric_limits<int>::min()
#define tmax(a,b,c) max((a),max((b),(c)))
#define tmin(a,b,c) min((a),min((b),(c)))
#define vpii vector<pair<int,int>>
#define vpll vector<pair<ll,ll>>
#define mp make_pair
#define xx first
#define yy second
#define sz(x) (int)(x).size()

#ifndef ONLINE_JUDGE
#  define LOG(x) (cerr << #x << " = " << (x) << endl)
#else
#  define LOG(x) ((void)0)
#endif

const long double PI = acos(-1);

int d1[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int d2[8][2]={{1,0},{0,1},{0,-1},{-1,0},{1,1},{-1,1},{1,-1},{-1,-1}};

int main()
{
	IO;
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	
	int ans=INF;
	for(int e=-100;e<=100;++e)
	{
		int cost=0;
		for(int i=0;i<n;++i)
		{
			cost+=(a[i]-e)*(a[i]-e);
		}
		ans=min(ans,cost);
	}
	cout<<ans<<"\n";
	return 0;
	
}

