//Dragon_warrior7(IITK)
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
#define umap unordered_map
#define uset unordered_set
#define ll long long
#define pb push_back
#define nl cout << '\n'
#define sor(x) sort(x.begin(), x.end())
#define rev(v) reverse(v.begin(), v.end())
#define lb(v, temp) lower_bound(v.begin(), v.end(), temp)
#define ub(v, temp) upper_bound(v.begin(), v.end(), temp)
#define fi first
#define se second
#define llmax 1000000000000000000
#define pll pair<ll, ll> 
#define ull unsigned ll
#define vll vector<ll> 
#define rub cout << "\n------------------------------------\n"
#define deb(x) cout<<#x<<' '<<'='<<' '<<x<<'\n'
#define fo(i,a,b) for(int i=a;i<b;i++)
//typedef  tree < int ,  null_type ,  greater<int> ,  rb_tree_tag ,  tree_order_statistics_node_update > oset;
void read(vector<ll> &v)
{
	for (int i = 0; i < v.size(); i++)
		cin >> v[i];
}
// const int mod=1e9+7;
// ll power(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
// ll modInverse(ll a){return power(a,mod-2);}
ll n,m,a,b,c,k,temp,x,y;
const int MAXN=100000+11;
void solveforthiscase(const int & test)
{//deb(test);
cin>>n;
vll factors;
for(ll i=1;i*i<=n;i++)
{
    if(n%i==0)
    {factors.pb(i);
    if((n/i)!=i)
    factors.pb(n/i);}
}
sor(factors);
vector<ll> ans;
for(auto x:factors)
{
    temp=n/x;
    temp--;
    if(temp>0 && n%temp==(n/temp))
    ans.pb(temp);
}
ll sum=0;
for(auto x:ans)
sum+=x;
cout<<sum;





return ;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int test=1;
// 	cin>>test;
    for(int i=1;i<=test;i++)
    {
        solveforthiscase(i);
    }
}