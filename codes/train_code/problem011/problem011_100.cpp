#include<stdio.h>
#include <algorithm>
#include<iostream>
#include<string.h>
#include<vector>
#include<stdlib.h>
#include<math.h>
#include<queue>
#include<deque>
#include<ctype.h>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<algorithm>
#define INF 0x3f3f3f3f
#define FAST_IO ios::sync_with_stdio(false)
const double PI = acos(-1.0);
const double eps = 1e-6;
const int MAX=1e5+10;
const int mod=1e9+7;
typedef long long ll;
using namespace std;
#define gcd(a,b) __gcd(a,b)
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
inline ll qpow(ll a,ll b){ll r=1,t=a; while(b){if(b&1)r=(r*t)%mod;b>>=1;t=(t*t)%mod;}return r;}
inline ll inv1(ll b){return qpow(b,mod-2);}
inline ll exgcd(ll a,ll b,ll &x,ll &y){if(!b){x=1;y=0;return a;}ll r=exgcd(b,a%b,y,x);y-=(a/b)*x;return r;}
inline ll read(){ll x=0,f=1;char c=getchar();for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;for(;isdigit(c);c=getchar()) x=x*10+c-'0';return x*f;}

long long n, x,ans;
ll gcdgcd(ll x,ll n)
{
    if(n%x==0)
        return n*2-x;
    ans=n/x*x*2+gcdgcd(n%x, x);
    return ans;
}

int main()
{
    cin>>n>>x;
    cout<<gcdgcd(x, n-x)+n<<endl;
    return 0;
}
