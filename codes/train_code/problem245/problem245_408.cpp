// in case of multiple test cases and N=1e5 don't intialize arrays as global except for graph vector-array
// always check whether or not you are doing mod of a negative number
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
 
using namespace __gnu_pbds;
using namespace std;

#define double      	long double
#define int         	long long
#define pb          	push_back
#define pii         	pair<int,int>
#define vi          	vector<int>
#define vii         	vector<pii>
#define mi          	map<int,int>
#define mii         	map<pii,int>
#define all(a)      	(a).begin(),(a).end()
#define sz(x)       	(int)x.size()
#define endl        	"\n"
#define repp(i,a,b) 	for(int i=a;i<b;i++)
#define rep(i,a,b) 		for(int i=a;i<=b;i++)
#define brep(i,a,b)     for(int i=a;i>=b;i--)
#define deb1(x)      	cout << #x << "=" << x << endl
#define deb2(x, y)  	cout << #x << "=" << x << "," << #y << "=" << y << endl
#define deb3(x, y, z)  	cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << endl
#define trace(v) 		for(auto it=v.begin();it!=v.end();it++)cout<<*it<<" ";cout<<endl;
#define tracearr(a,l,r) for(int iii=l;iii<=r;iii++)cout << a[iii] << " ";cout << endl;
#define PI          	3.1415926535897932384626
#define F 				first
#define S 				second
#define clr(x,y) 		memset(x, y, sizeof(x))
#define IOS         	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
// *s.find_by_order(1) - gives the 2nd samllest element in set
// s.order_of_key(x)   - gives the number of elements in the set which are strictly smaller than x


const int N= 5000 + 5;
const int MOD=1e9 + 7;


int val[N];
int a[N];
int n,k;

int solve(int idx)
{
	int mp[N];
	clr(mp,0);
	int cost = 0;
	int len = 0;
	vi v;
	while(mp[idx]==0)
	{
		mp[idx]=1;
		idx = a[idx];
		cost += val[idx];
		v.pb(val[idx]);
		len++;
	}
	int ans  = 0;
	int times = k/len;
	int left = k%len;
	int flag = 0;
	if(cost>0)
	{
		flag = 1;
		ans = cost*times;
	}
	if(flag==1)
	{
		int cur = 0;
		int sum = 0;
		int temp = ans;
		while(left>0)
		{
			idx = a[idx];
			sum += val[idx];
			cur = max(cur,sum);
			left--;
		}
		ans += cur;
		sum = 0;
		cur = INT_MAX;
		for(int j=v.size()-1;j>=0;j--)
		{
			sum += v[j];
			cur = min(sum,cur);
		}
		if(cur<0)
			temp -= cur;
		ans = max(ans,temp);
	}
	else
	{
		clr(mp,0);
		int kk = k;
		int cur = INT_MIN;
		int sum = 0;
		while(kk>0 && mp[idx]==0)
		{
			mp[idx] = 1;
			idx = a[idx];
			sum += val[idx];
			cur = max(cur,sum);
			kk--;
		}
		ans += cur;
	}
	return ans;
}

int32_t main()
{
	IOS;
	int T=1;
	//cin >> T;
	// int numOfSetBits = __builtin_popcountll(n);
	std::cout << std::fixed << std::setprecision(12);
	while(T--)
	{
		cin >> n >> k;
		rep(i,1,n)
			cin >> a[i];
		rep(i,1,n)
			cin >> val[i];
		int ans = INT_MIN;
		rep(i,1,n)
			ans = max(ans,solve(i));	
		cout << ans;
	}
}