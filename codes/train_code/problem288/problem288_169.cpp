#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
void Fast()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cerr.tie(0);
}
inline int D()
{
    int t;
    scanf("%d",&t);
    return t;
}
inline ll llD()
{
    ll t;
    scanf("%lld",&t);
    return t;
}
const int Max=1e5+8;
const int OO=-1e6;
int xt[4]= {1,0,0,-1};
int yt[4]= {0,1,-1,0};
ll n,m,f,l;
bool valid(int x,int y)
{
    return x>-1 && y>-1 && x<n && y<m;
}

int mem[209][209][209],k;
        string st,st2;

void init()
{
    memset(mem,-1,sizeof mem);
}
/////////////////////////////////////////////////////////////////////
int solve (int i=0,int t=0,int j=n )
{

}
ll arr[200009];
int main()
{

    int T=1;
///T=D();
    while(T-->0)
    {

       cin>>n;
    ll ans =0;
       for(int i =0;i<n;i++)
        {
            cin>>arr[i];
            if(i)
            {
            if(arr[i-1]>arr[i])
            {
                ans+=( arr[i-1]-arr[i]);
                arr[i]=arr[i-1];
            }
            }
        }
       cout<<ans;



    }

}
