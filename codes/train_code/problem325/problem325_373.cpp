///Bismillahir Rahmanir Rahim
#include "bits/stdc++.h"

#define                           ll                          long long
#define                           int                         ll
#define                           fi                          first
#define                           si                          second
#define                           mp                          make_pair
#define                           pb                          push_back
#define                           pi                          pair<ll,ll>
#define                           clr(x)                      memset(x,0,sizeof(x));
#define                           f(i,l,r)                    for(int i=l;i<=r;i++)
#define                           rf(i,r,l)                   for(int i=r;i>=l;i--)
#define                           done(i)                     cout<<"done = "<<i<<endl;
#define                           show(x,y)                   cout<<x<<" : ";for(auto z:y)cout<<z<<" ";cout<<endl;
#define                           fast                        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=100005;
int a[M];
 main()

{

    int n,l;
    scanf("%lld%lld",&n,&l);
    vector<int>ses;
    f(i,1,n)
    {
        scanf("%lld",&a[i]);
    }
    int flag=0;
    for(int i=1;i<n;i++)
    {
        int sum=a[i]+a[i+1];
        if(sum>=l)
        {
            flag=i;
        }
    }
    if(flag==0)
    {
        printf("Impossible\n");
        return 0;
    }
    printf("Possible\n");
    for(int i=1;i<flag;i++)
    {
        printf("%lld\n",i);
    }
    for(int i=n-1;i>flag;i--)
    {
        printf("%lld\n",i);
    }
    printf("%lld\n",flag);
    return 0;

}

































