#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;   
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update> 
#define ld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define sz(a) (ll)(a.size())
int deg[5];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	for(int i=1;i<4;i++)
	{
		int a,b;
		cin>>a>>b;
		deg[a]++;
		deg[b]++;
		if(deg[a] == 3 || deg[b] == 3)
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}