#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<queue>
#include<string>
#include<stack>
#include<set>
#include<map>
#include<time.h>
#include<cstdlib>
typedef long long ll;
//#pragma comment(linker, "/STACK:1024000000,1024000000")
#define mm(a) memset(a,0,sizeof(a))
#define lr rt<<1
#define rr rt<<1|1
#define sync std::ios::sync_with_stdio(false);std::cin.tie(0);
#define inf 0x3f3f3f3f
#define eqs 1e-8
#define lb(x) (x&(-x))
#define ch(a) (int(a-'a')+1)
#define rep(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
typedef pair<int,int> pii;
const double pi=acos(-1);
const int maxn=100005;
const ll Mod=1000000007;


ll a[maxn];
bool cmp(ll a,ll b)
{
    return a>b;
}

int main()
{
    sync;
    ll n,m,v,p;
    cin>>n>>m>>v>>p;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1,cmp);
    ll d=a[p];
    int sum=0;
    ll s=0;
    ll c=0;
    for(int i=p;i<=n;i++)
    {
        if(a[i]>d)
        {
            sum++;
            continue;
        }
        if(d-m>a[i])
            break;
        if(s<=1ll*(n-v)*m+1ll*a[i]*c)
        {
            sum++;
            s+=a[i];
            c++;
        }
        else
            break;
    }
    cout<<sum+p-1<<endl;
    return 0;
}
