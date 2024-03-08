#include<bits/stdc++.h>
#include<ctype.h>
# define pb push_back
#define fst first
#define sec second
#define For(i,a,b) for(int i=a;i<b;i++)
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fo(i,n) for(ll i=0;i<n;i++)
#define endl "\n"
#define rev(i,n) for(ll i=n-1;i>=0;i--)
#define fo1(i,n) for(ll i=1;i<=n;i++)
#define boolsize 1000001
#define pi pair<ll,ll>
#define vi vector<ll>
#define vii vector<pi>
using namespace std;
template<typename T>
void showvector(vector <T> v)
{
    for(T x:v)
        cout<<x<<" ";
    cout<<endl;

}
template<typename T>
void showvector1(vector <T> v)
{
    ll n=v.size();
    fo1(i,n-1)
        cout<<v[i]<<endl;

}
template<typename T>
void showset(set <T> s)
{
    for(T x: s)
        cout<<x<<" ";
    cout<<endl;
}
template<class T>
void showvectorpair(vector<T> v)
{
    for(auto it=v.begin();it!=v.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    cout<<endl;
}
template<typename T,typename P>
void showmap(map <T,P> m)
{
    for(auto it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    cout<<endl;
}
template<typename T>
bool comp(T a,T b)
{
    return (a>b);
}
template<class T>
bool comppair(T a,T b)
{
    if(a.first==b.first)
        return(a.second>b.second);
    return (a.first>b.first);
}
bool sameparity(ll a,ll b)
{
    return (a%2==b%2);
}
bool difparity(ll a,ll b)
{
    return !(a%2==b%2);
}
bool isprime(ll x)
{   if(x<=1)
     return false;
    for(ll i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
bool iseven(ll x)
{
    return !(x%2);
}
bool isodd(ll x)
{
    return (x%2);
}
/// check for test case before submitting
void vfun()
{
    ll n,k;
    cin>>n;
    vector <ll> v(n);
    fo(i,n)
    cin>>v[i];

}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("inputh.txt", "r", stdin);
    freopen("outputh.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0); ///cant use scanf, printf
    cin.tie(0);cout.tie(0); /// no longer auto flush cout before each cin, remove for interactive
    //cout << fixed << setprecision(11); /// no scientific output
    ll test=1;
    //cin>>test;
    while(test--)
    {
            ll w,h,a,b,c;
            cin>>w>>h;
            ll ans=INT_MAX;
            if(w%3==0 || h%3==0)
                ans=0;
            ll A=w*h;
            fo1(i,h)
            {
                a=w*i;
                b=(h-i)*(w/2);
                ll x=w-(w/2);
                c=(h-i)*(x);
                ans=min(ans,max(max(a,b),c)- min(min(a,b),c));
                b=(h-i)/2;
                b*=w;
                c=A-(a+b);
                ans=min(ans,max(max(a,b),c)- min(min(a,b),c));
            }
            fo1(i,w)
            {
                a=h*i;
                b=(w-i)*(h/2);
                ll x=h-(h/2);
                c=(w-i)*(x);
                ans=min(ans,max(max(a,b),c)- min(min(a,b),c));
                b=(w-i)/2;
                b*=h;
                c=A-(a+b);
                ans=min(ans,max(max(a,b),c)- min(min(a,b),c));

            }
            cout<<ans<<endl;
//         if(vfun())
//            cout<<"YES\n";
//         else
//            cout<<"NO\n";
    }
}
///before sub
/// check for value of zero and single input in array
///loop vars,1LL in mult, equal, one, bounds, int v ll, endl, finish taking inputs
/// check whether test cases are given or not



