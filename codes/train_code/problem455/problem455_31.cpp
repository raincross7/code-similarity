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
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef long double ld; 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef set<int>::iterator sit;
typedef map<int,int>::iterator mit;
typedef vector<int>::iterator vit;

ll a[111111];

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	ll cur=1;
	ll ans = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i]<cur) continue;
		if(a[i]==cur)
		{
			cur++;
			continue;
		}
		ans+=(a[i]-1)/cur;
		if(cur==1) cur++;
	}
	cout<<ans<<'\n';
}
