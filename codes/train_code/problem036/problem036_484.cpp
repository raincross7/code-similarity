#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define fbo find_by_order
#define ook order_of_key
 
typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef long double ld; 
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef set<ll>::iterator sit;
typedef map<ll,ll>::iterator mit;
int a[500001];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	vi vec;
	for(int i=n-1;i>=0;i-=2)
	{
		vec.pb(a[i]);
	}
	for(int i=(n&1);i<n;i+=2)
	{
		vec.pb(a[i]);
	}
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i];
		if(i+1<vec.size()) cout<<' ';
	}
	cout<<'\n';
}
