#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/tree_policy.hpp>
//#include <functional> // for less
#define PI acos(-1.0)
#define eps 1e-9
#define ll long long
#define ull unsigned long long
#define nl printf("\n")
#define sf scanf
#define pf printf
#define INF (ll)1e15
#define mod 1000000007

///#define isValid(n,m,nx,ny)nx>=0&&nx<n&&ny>=0&&ny<m
///int kx[]={1, 1, -1, -1, 2, 2, -2, -2}; //knight moves
///int ky[]={2,-2,  2, -2, 1,-1,  1, -1}; //knight moves
///int dx[]={1,-1,0,0,1,-1,1,-1};//eight direction
///int dy[]={0,0,1,-1,1,-1,-1,1};//eight direction
 
///using namespace __gnu_pbds;
using namespace std;
 
///inline double toRad(double deg){return deg*PI/180;}
///inline double toDeg(double rad){return rad*180/PI;}
///typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> new_data_set;
 
const int S=123456;
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    #endif
    int n;
    while(sf("%d",&n)==1)
    {
    	int ara[n+5];
    	int mx=0;
    	for(int i=0;i<n;i++)sf("%d",&ara[i]),mx=max(mx,ara[i]);

    	int freq[mx+5];
    	memset(freq,0,sizeof freq);
    	for(int i=0;i<n;i++)freq[ara[i]]++;

    	int ans=0,even=0;
    	for(int i=1;i<=mx;i++)
    	{
    		if(freq[i]!=0)
    		{
    			ans++;
    			if(freq[i]%2==0)even++;
    		}
    	}

    	if(even%2)ans--;
    	pf("%d\n",ans);
    }
    return 0;
}
 









 


























