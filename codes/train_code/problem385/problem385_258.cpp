#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef map<ll,ll>::iterator itll;
typedef long double ld;
typedef map<ll,ll> mapll;

#define con continue
#define pb push_back
#define fi first
#define se second
#define fr front()
#define INF 1000000000000000000
#define all(vl) vl.begin(),vl.end()
#define m_p make_pair 
#define sz(a) sizeof(a)
#define forn(mp,it) for(it = mp.begin();it!=mp.end();it++)
#define FOR(i,a,n) for(ll i=a;i<n;i++) 
#define FORE(i,a,n) FOR(i,a,n+1)
#define Endl endl
#define eNdl endl
#define enDl endl
#define endL endl

int main()
{
	ll n;
	cin>>n;
	vector<ll> vl(n-1);
	FOR(i,0,n-1)cin>>vl[i];
	ll ans = 0;
	FOR(i,0,n-2)
	{
		ans+=min(vl[i],vl[i+1]);
	}
	ans+=vl[n-2];
	cout<<ans+vl[0]<<endl;
	return 0;
}