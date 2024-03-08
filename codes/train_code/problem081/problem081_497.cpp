#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long 
#define REP(i, a, b) for (ll i = a; i < b; i++)
#define REPI(i, a, b) for (ll i = b - 1; i >= a; i--)
#define i_os ios::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
#define INF (ll)1e18 + 100
#define endl "\n"
#define p0(a) cout << a << " "
#define p1(a) cout << a << endl
#define p2(a, b) cout << a << " " << b << endl
#define p3(a, b, c) cout << a << " " << b << " " << c << endl
#define p4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl
#define MAX 1e6
/*SOME BITMASK KNOWLEDGE
1)x & (x - 1):sets the last one bit of x to zero
power of two exactly when x & (x − 1) = 0.
2)x & -x:sets all the one bits to zero, except last one bit
3)x | (x - 1):inverts all the bits after the last one bit*/
#define o_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define o_setll tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
typedef tree<pair<ll, ll>,null_type,less<pair<ll, ll>>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set

int mod = 1e9 + 7;

ll power(ll a,ll n){
	if(n == 0) return 1;
	ll small = power(a,n/2);
	small = (small * small) % mod;
	if(n % 2) small = (small * a) % mod;
	return small;
}
int main() 
{
	ll n,k;
	cin>>n>>k;
	ll sum = 0;
	ll arr[k+2] = {0};
	REPI(i,1,k+1){
		ll val = power(k/i,n);
		for(ll j = i;j <= k;j += i){
			val = (val - arr[j] + mod) % mod;
		}
		arr[i] = val;
		sum = (sum + (arr[i]*i) % mod) % mod;
	}
	cout<<sum<<endl;
	return 0;
}  
