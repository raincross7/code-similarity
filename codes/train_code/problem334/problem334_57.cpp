#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define SZ(X) ((int)(X).size())
#define endl "\n";
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
 string s,t;
 int n;
 cin>>n>>s>>t;
 for (int i = 0; i < n; ++i)
 	{
 		cout<<s[i]<<t[i];
 	}	

   return 0;
}