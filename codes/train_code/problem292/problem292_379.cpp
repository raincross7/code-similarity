/****************************
*  Developer : joshi08
*  Date  :  22-06-2020
*  Year  :  2020
****************************/

#include <bits/stdc++.h>

#define lli long long int
#define mod 1000000007
#define fi first
#define se second
#define ii pair<lli, lli>
#define mp make_pair
#define endl '\n'
const double PI = 3.141592653589793238460;
lli gcd(lli a, lli b) { if (a == 0) return b; return gcd(b % a, a);}
lli max(lli a, lli b) {if (a > b) return a; else return b;}
lli min(lli a, lli b) {if (a < b) return a; else return b;}
lli power(lli a,lli b) {lli i,p=1; for(i=0;i<b;i++){p*=a;} return p;}

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

	string s;
	cin>>s;
	
	lli i,j,n=0;
	
	for(i=1;i<s.size();i++)
	{
		if(s[i]!=s[i-1])
		{
			break;
		}
	}
	if(i==s.size())
	{
		cout<<"No";
	}
	else
	cout<<"Yes";

    return 0;
}

