#include <bits/stdc++.h>
#define int long long
#define gcd            __gcd
#define setbits(x)     __builtin_popcountll(x)
#define zrobits(x)     __builtin_ctzll(x)
#define mod            1000000007
#define mod2           998244353
#define maxe           *max_element
#define mine           *min_element
#define inf            1e18
#define deci(x,y)      fixed<<setprecision(y)<<x
#define w(t)           int t; cin>>t; while(t--)
#define nitin          ios_base::sync_with_stdio(false); cin.tie(NULL)
#define PI             3.141592653589793238
using namespace std;

int power(int x, int y, int p)
{
    int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
int modi(int a, int m)
{
    return power(a, m - 2, m);
}
void multiply(vector<int>&fact,int &n,vector<int>&ans,int i)
{
    int carry=0;
    int sum=0;
    for(int j=0;j<n;j++)
    {
        fact[j]=fact[j]*i+carry;
        carry=fact[j]/10;
        fact[j]=fact[j]%10;
        sum+=fact[j];
    }
    while(carry)
    {
        fact.push_back(carry%10);
        sum+=carry%10;
        carry=carry/10;
        n++;
    }
    ans[i]=sum;
}
int32_t main()
{
    nitin;
    int n;
    cin>>n;
    int x;
    cin>>x;
    if(n*500<x)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return 0;

}