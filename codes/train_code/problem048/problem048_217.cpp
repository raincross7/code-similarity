
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long int
#define ld long double
#define ordered_set tree < ll ,  null_type ,  less<ll> ,  rb_tree_tag ,  tree_order_statistics_node_update >
//added two more functions to set
//(1)*(set.find_by_order(k))[kth element in the sorted set] 
//(2)set.order_of_key(k)[count of elements strictly less than k]

typedef vector< int > vi;
typedef vector<long long> lvi;
typedef vector< vector<int> > vvi;
typedef vector< vector<long long> > lvvi;
typedef pair< int,int > ii;
typedef pair< long long,long long > lii;
typedef vector<pair<int,int>> vii;
typedef vector<pair<long long,long long>> lvii;
typedef vector<vector<pair<int,int>>> vvii;
typedef vector<vector<pair<long long,long long>>> lvvii;
typedef vector<bool> vb;

// #ifdef ONLINE_JUDGE 
// #define endl '\n'
// #endif
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)//remember i is an iterator
#define tc(t) int (t); cin>>(t);while((t)--)
#define ff first
#define ss second
#ifdef ONLINE_JUDGE
	#define error(args...) 0
#else
	#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#endif
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr <<"[ "<< *it << " = " << a << " ]"<< endl;
	err(++it, args...);
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
const long long mod = 1e9 + 7;
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------

long long mos() { return 0LL; }
template<typename T, typename... Args>
T mos(T a, Args... args) { return ((a + mos(args...))%mod + mod)%mod; }

long long mop() { return 1LL; }
template<typename T, typename... Args>
T mop(T a, Args... args) { return (a*mop(args...))%mod; }
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------



signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);	
	int n,k;
	cin>>n>>k;
	vi a(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int k1=k;
	while(k>0)
	{
		// vi b(n);
		vi suffix(n+1,0);
		for (int i = 0; i < n; ++i)
		{
			// for(int j=max(0,i-a[i]);j<=min(n-1,i+a[i]);j++)
			// {
			// 	b[j]++;
			// }
			int low = max(0,i-a[i]),high = 1+min(n-1,i+a[i]);
			suffix[low]++;
			suffix[high]--; 
			// error(i,low,high);
		}
		a[0]=suffix[0];
		for(int i=1;i<n;i++)
		{
			suffix[i]+=suffix[i-1];
			a[i]=suffix[i];
		}
		k--;
		bool ok=true;
		for (int i = 0; i < n; ++i)
		{
			// cout<<a[i]<<" ";
			if(a[i]!=n) ok=false;
		}
		// cout<<endl;
		if(ok) break;
	}
	// cout<<"steps: "<<k1-k<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}	


// WA
// 1. overflow
// 2. re-initialize global variables for every test case.
// 3. edge cases like n=1

// Run time error
// 1. division by zero.
// 2. array bounds.

// TLE
// 1. uncomment that #define endl '\n' line