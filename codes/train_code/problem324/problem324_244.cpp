/*
    -ensure correct output format
    -ensure printing required output
    -reread the problem statement
  */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<ll,pair<ll,ll>>plll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))
#define F first
#define S second
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define minheap int,vector<int>,greater<int>
#define pb push_back
#define eb emplace_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define bug cout<<"BUG"<<endl;
const ull Max = 1e18 ;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;
bool compare(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    return (a.first > b.first);
}
ll lcm(ll a,ll b)
{
    if(a==0 || b==0)return 0;

    return a/__gcd(a,b)*b;
}

void input(ll ara[],ll n)
{
    for(ll i=0; i<n; i++)cin>>ara[i];
}


int main()
{

    fastread();

    ll j,n,m,p,a,sum=0,k,t,b,c,d,cnt=0,q,l,r;

    bool flag=false;

    cin>>n;

       vector<pll>v;

     while(n%2==0)
     {
         n/=2;
         cnt++;
     }

    if(cnt)
        v.eb(2,cnt);

    cnt=0;

    ll i;

     for(ll i=3; i<=sqrt(n); i+=2)
     {
         cnt=0;

         while(n%i==0)
         {
             n/=i;
             cnt++;
         }

         if(cnt)
            v.eb(i,cnt);
     }
     if(n>1)
        v.eb(n,1);
        cnt=0;

     for(auto x : v)
     {
         j=2;


         for(i=1; i<=x.S; )
         {
             cnt++;

             i+=j;
             j++;
         }
     }

     cout<<cnt<<endl;
}

