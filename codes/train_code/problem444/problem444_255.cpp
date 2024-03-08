#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define mod 1000000007
bool isPrime[1000001];
ll power(ll a,ll b)
{
    ll result = 1;
    while(b>0)
    {
        if(b%2)
        {
            result = (a*result)%mod;
        }
        a = (a*a)%mod;
        b = b/2;
    }
    return result;
}
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
void sieve()
{
    memset(isPrime,1,sizeof(isPrime));
    isPrime[0] = isPrime[1] = 0;
    for(int i=2;i*i<=1000000;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=1000000;j+=i)
            {
                isPrime[j] = 0;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int t,n;
    t = 1;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        unordered_map <int,int> mp;
        int penalties = 0,correct = 0;;
        for(int i=0;i<m;i++)
        {
            string s;
            int x;
            cin>>x>>s;
            if(s=="WA")
            {
                if(mp[x]!=1000000)
                {
                    mp[x]++;
                }
            }
            if(s=="AC")
            {
                if(mp[x]!=1000000)
                {
                    penalties+=mp[x];
                    correct ++;
                    mp[x] = 1000000;
                }
            }
        }
        cout<<correct<<" "<<penalties;
    }
    return 0;
}
