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
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll k,a,b;
	cin>>k>>a>>b;
	if(b-a <= 2)
	{
		cout<<k+1<<"\n";
		return 0;
	}
	if(a-1 >= k)
	{
		cout<<(k+1)<<"\n";
		return 0;
	}
	k-=(a-1);
	ll x = a;
	ll z = k/2;
	x = a + z*(b-a);
	if(k%2)
		x++;
	cout<<x<<"\n";
	return 0;
}