#include<iostream>
#include<queue>
#include<string>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<set>
#include<map>
#include<utility>
#include<vector>
#include<stack>
#include<sstream>
#include<algorithm>
using namespace std;
/****************************/
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vpii vector<pair<int,int> >
#define qi queue<int>
#define mii map<int,int>
#define msi map<string,int>
#define vs vector<string>
#define vc vector<char>
/****************************/
#define rep(i,n) for(ll i=0;i<(n);i++)
#define rep2(i,n) for(ll i=(n)-1;i>=0;i--)
#define rep3(i,a,n) for(ll i=(a);i<(n);i++)
#define rep4(i,a,n) for(ll i=(a)-1;i>=n;i--)
#define mp make_pair
#define pb push_back
#define st first
#define nd second
#define pi 3.1415926535897932384626433832795
#define zero(n) memset(n,0,sizeof(n));
#define SZ(n) n.size()
#define sn st.nd 
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
/****************************/
ll n;
ll a[110];
int main()
{
	cin>>n;
	rep(i,n)
	{
		cin>>a[i];
	}
	ll now=1000,stock=0;
	rep(i,n)
	{
		now+=stock*a[i];
		if(a[i]<a[i+1])
		{
			stock=now/a[i];
			now%=a[i];
		}
		else
		{
			stock=0;
		}
	}
	cout<<now;
	return 0;
}