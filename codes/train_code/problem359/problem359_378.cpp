#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int                 long long   
#define double              long double
#define endl                "\n"
#define pb                  push_back
#define PI                  3.1415926535897932384626433832795l
#define F                   first
#define S                   second
#define mp                  make_pair
#define f(i,n)              for(int i=0;i<n;i++)
#define fastio              ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v)              (v).begin(),(v).end()
#define rall(v)             (v).rbegin(),(v).rend()
#define gcd(a,b)            __gcd((a),(b))
#define fill(a,value)       memset(a,value,sizeof(a));
#define minn(v)             *min_element(v.begin(), v.end());
#define maxx(v)             *max_element(v.begin(), v.end());
#define print(x)            cout<<(x)<<endl;
#define sum(v)+x            accumulate(v.begin(), v.end(),x);
#define debug(x)            cout<<#x<<'='<<(x)<<endl;
typedef pair<int,int> pii;  
typedef vector<int> vi;

signed main() 
{
    fastio;
    cout << fixed << setprecision(12);
    int n;
    cin>>n;
    vi a(n+1),b(n);
    f(i,n+1)cin>>a[i];
    f(i,n)cin>>b[i];
    int ans=0;
    f(i,n)
    {
        int x=min(a[i],b[i]);
        ans+=x;
        int y=b[i]-x;
        if(y>0)
        {
            int z=min(a[i+1],y);
            ans+=z;
            a[i+1]-=z;
        }
        
    }
    print(ans)
    
    
    
    return 0;
}