#include<bits/stdc++.h>
using namespace std;                                                            
#define pb push_back                                                            
#define mp make_pair                                                                                                                                
#define sqr(a) ((a) * (a))                                                      
#define io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);   
#define co() cout.precision(10);                                                
#define F for(li i=0;i<n;i++)
#define fo(i,a,n) for(i=a;i<n;i++)
#define ne cout<<"\n"; 
#define test int t;cin>>t;while(t--)
//#define oj #ifndef ONLINE_JUDGE freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); #endif

typedef long long li;
typedef long double ld;

const li mod = 1000000007;

int main()
{
	li n,i,c=0,ans=0;
	cin>>n;
	li a[n];
	F cin>>a[i];
	fo(i,0,n-1)
	{
		if(a[i]>=a[i+1])
		c++;
		else
		{
			ans=max(c,ans),c=0;
		}
	}
	ans=max(c,ans);
	cout<<ans;
}