#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
vector<int> v;

int main()
{
	ll n;
	cin>>n;


	if(n%2!=0)
	{
		cout<<0<<endl;
		return 0;
	}

	n = n/2;

	ll pot = 5,result = 0;

	while(pot <= n)
	{
		result += n/pot;
		pot *=5;
	}

	cout<<result<<endl;


	return 0;
}
