#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define fr(i,a,b) for(int i=a;i<b;i++)
#define frr(i,a,b) for(int i=a;i>=b;i--)
//vector
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define pp pop_back
//pair
#define pi pair<int ,int >
#define mk make_pair
#define ff first
#define ss second
//set
#define si set<int>
#define sit set<int>::iterator 
using namespace std;
int main()
{
fast;
ll n;cin>>n;
ll ans=1,t=n;
while(t%360!=0)
{
       ans++;
t+=n;
}
cout<<ans;

return 0;
}
