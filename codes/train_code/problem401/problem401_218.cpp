 #include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<map>  
#include<set>
#include<iterator>
#include<list>
#include<utility>
#include<cstdlib>
#include<queue>
#include<stack>
#include<bitset>
//#include<bits/stdc++.h>
#define PI  2*acos(0.0)
#define pb push_back

       
using namespace std;
using ll = long long;
using lli = long long int;
using ld = long double;



int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0), cout.tie(0);


ll m,n;
cin>>m>>n;
vector<string>v(m);
for(int i=0;i<m;i++)
{
	cin>>v[i];
}

sort(v.begin(),v.end());

/*while(!v.empty())
{
	cout<<*max_element(v.begin(),v.end())<<"\n";
	v.pop_back();
}
*/

for(int i=0;i<v.size();i++)
{
	cout<<v[i];
}






	
	
	return 0;
	
	
	       /***Israil Hosen
	            Computer Science & Engineering
	         University Of Rajshahi.
	         ***/
	
	
	
}