#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
#define float long double
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define endl '\n'
#define pii pair<int, int>
#define tii tuple<int, int, int>
#define min3(a,b,c) min(a, min(b, c))
#define max3(a,b,c) max(a, max(b, c))
#define all(x) x.begin(), x.end()
#define fill(a,b) memset(a, b, sizeof(a))
#define sz(x) (int)x.size()
#define sp(x) setprecision(x)
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define bs binary_search

signed main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

	int n,k; cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	int ans=0;
	for(int i=0;i<k;i++) ans+=arr[i];
	cout<<ans<<endl;

}