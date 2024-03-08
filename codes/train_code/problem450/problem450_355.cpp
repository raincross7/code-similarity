#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<cmath>
#include<queue>
#include<cstring>

#define ll long long
#define ull unsigned long long
#define ld long double
#define fo2(i,start,end,diff) for(int i=start;i<end;i=i+diff)
#define fo(i,start,end) for(int i=start;start<end?i<end:i>end;start<end?i+=1:i-=1)
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define vll vector<ll>
#define vc vector<char>
#define pll pair<ll,ll>
#define vop vector<pll>
#define vov vector<vector<ll>>
using namespace std;
const ld pi=3.14159265358979323;

const long long mod1=1e9+7;
const long long mod2=1e18;
const ll mod3=9e18;
const ll N=1e7;

long long power(ll  x, ll n){if(n==0)return 1;ll temp=power(x,n/2);if(n%2==0)return temp*temp;else return x*temp*temp;}

ll gcd(ll a,ll b){if(a<b) return gcd(b,a);if(b==0) return a;return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a*b)/(gcd(a,b));}
void swap(int* a, int* b){int t = *a;*a = *b;*b = t;}
bool f(ll x,ll y){return x>y;}
bool cmp(ll x ,ll y){
    return abs(x)<abs(y);
}
ll MAX(ll a,ll b){return a>b?a:b;}
ll MIN(ll x,ll  y){return x>y?y:x;}

ll ow(ll a, ll b, ll mod)//a^b%mod
{
    ll ans=1;
    while(b)
    {
        if(b&1)
            ans=(ans*a)%mod;
        b/=2;
        a=(a*a)%mod;
    }
    return ans;
}
ll sum(vll v){
    ll sm=0;
    fo(i,0,v.size())sm=sm+v[i];
    return sm;
}
int main(){
    ll x,n;
    cin>>x>>n;
    vll v(n);
    fo(i,0,n)cin>>v[i];
    fo(i,0,x+1){
        ll a=x+i;
        ll b=x-i;
        if(find(v.begin(),v.end(),b)==v.end()){
            cout<<b<<endl;
            return 0;
        }
        else if(find(v.begin(),v.end(),a)==v.end()){
            cout<<a<<endl;
            return 0;
        }
    }
    return 0;
}