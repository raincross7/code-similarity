/* When Talent doesn't work, Hard work beats Talent*/

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

#include"bits/stdc++.h"

using namespace std;

#define Fast_D cout<<fixed<<setprecision(2);
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define nl "\n"
#define sp " "
#define int long long
#define double long double
#define all(v) v.begin(),v.end()
#define scanstr(s) cin>>ws; getline(cin,s);

const double PI=3.141592653589793;

bool ok[10];

void solve()
{
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		sum+=a[i];
	}
	int ava=sum/n;
	int ans1=0, ans2=0;
	for(int i : a)
	{
		ans1 += (ava-i)*(ava-i);
	}
	ava= (sum+n-1)/n;
	for(int i : a)
	{
		ans2 += (ava-i)*(ava-i);
	}
	cout << min(ans1,ans2);
}

int32_t main()
{
	FastIO;
	Fast_D;
	int T;
	T=1;
	while(T--)
	{
		solve();
	}
	return 0;
}
