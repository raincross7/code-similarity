//#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<utility>
#include<algorithm>
#include<cstring>
#include<sstream>
#include <iomanip>

using namespace std;

typedef long long ll ;
typedef double db;
typedef vector<ll> vi;
typedef pair<int,int> pii;
typedef vector< pair<int,int> > vii;
const double pi = 2*acos(0) ;

#define pf		  	printf
#define sf			  scanf
#define pb(a)         push_back(a)
#define mp			make_pair
#define fi			 first
#define se			 second
#define for0(i,n)        for(ll i=0;i<n;i++)
#define for1(i,n)        for(ll i=1;i<=n;i++)
#define forab(i,a,b)       for(int i=a;i<=b;i++)
#define lcm(a, b)     ((a)*((b)/gcd(a,b)))
#define sq(a)		   (a)*(a)
#define nw				"\n"
#define abs(x)		fabs(x)
#define pcase(z,x)    cout<<"Case "<<z<<": "<<x<<"\n"
int main()
{
	ll n,m;
	cin>>n>>m;
	vi a(n),b(n),c(m),d(m);
	for0(i,n)cin>>a[i]>>b[i];
	for0(i,m)cin>>c[i]>>d[i]; 
	
	for0(i,n){
		ll x,pos,mn =1000000000;
		for0(j,m){
			x = abs(a[i]-c[j]) + abs(b[i]-d[j]);
			if(x<mn){
				mn = x;
				pos=j;
				}
			}
		cout<<pos+1<<nw;
		}
	return 0;
}
