#include <bits/stdc++.h>
#define pb push_back
#define all(a) a.begin(),a.end()
#define forn(i,n) for(int i=0;i<int(n);i++)
#define forr(i,n) for(int i=int(n-1);i>=0;i--)
#define fora(i,a,b) for(int i=int(a);i<=int(b);i++)
#define forb(i,a,b) for(int i=int(a);i>=int(b);i--)
#define mod 1000000007
using namespace std;
using ll=long long int;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<ll> vii;
typedef pair<ll ,ll> pii;
ll get(ll a,ll k)
{
	ll x=abs(a-k);
	return x*x;
}
void solve()
{
	int n;
	cin>>n;
	int arr[n];
	forn(i,n)cin>>arr[i];
	int ans=1e9;
	fora(j,-1000,1000)
	{
		int cur=0;
		forn(i,n)
		{
			cur+=get(arr[i],j);
		}
		ans=min(ans,cur);
	}
	
	cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    int t=1;
   // cin>>t;
    while(t--)
	solve();
    return 0;
}
