#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll N=1000000007;
//ll power(ll a,ll b,ll mod)
//{
//    ll result=1;
//    while(b>0)
//    {
//        if(b%2==1)
//            result=(result*a)%mod;
//        a=(a*a)%mod;
//        b=b/2;
//    }
//    return result;
//}
//ll d,x,y;
//void extendedEuclid(ll a,ll b)
//{
//    if(b==0)
//    {
//        d=a; x=1; y=0;
//    }
//    else
//    {
//        extendedEuclid(b,a%b);
//        ll temp=x; x=y; y=temp-(a/b)*y;
//    }
//}
//ll modInverse(ll a,ll m)
//{
//    extendedEuclid(a,m);
//    return (x%m+m)%m;
//}
//ll lcm(ll a,ll b)
//{
//    if(a==0||b==0)
//        return 0;
//    return (a*b)/(__gcd(a,b));
//}
//void sieve(ll n)
//{
//    bool isPrime[n+1];
//    isPrime[0]=false; isPrime[1]=false;
//    for(ll i=2;i<=n;i++)
//        isPrime[i]=true;
//    for(ll i=2;i*i<=n;i++)
//    {
//        if(isPrime[i]==true)
//        {
//            for(ll j=i*i;j<=n;j+=i)
//                isPrime[j]=false;
//        }
//    }
//}
//bool isPowerOfTwo(ll n)
//{
//    return (n&&!(n&(n-1)));
//}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,j; cin>>n;
    if(n<=599&&n>=400) cout<<8;
    else if(n<=799&&n>=600) cout<<7;
    else if(n<=999&&n>=800) cout<<6;
    else if(n<=1199&&n>=1000) cout<<5;
    else if(n<=1399&&n>=1200) cout<<4;
    else if(n<=1599&&n>=1400) cout<<3;
    else if(n<=1799&&n>=1600) cout<<2;
    else  cout<<1;
}
