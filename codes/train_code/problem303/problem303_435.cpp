#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sl set<ll>
#define vs vector<string>
#define vl vector<ll>
#define vi vector<int>
#define vpl vector<pair<ll,ll>>
#define pb push_back
#define PI 3.14159265358979323846
#define ll long long
#define ld long double
#define endl "\n"
#define rep(i,a,b) for (ll i = (a); i < (b); i++)
#define repp(i,a,b) for (ll i = (a); i >= (b); i--)
#define rop(i,a,b)  for(ll i=(a); i>(b); i--)
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define tt long long t; cin>>t; while(t--)
#define IOS ios::sync_with_stdio(0);cin.tie(0);
const int maxn=1e5+100;


int main()
{
   string a,b;
  cin>>a>>b;
  int n=0;
  for(int i=0;i<a.size();i++)
    if(a[i]!=b[i]) n++;
  cout<<n;
    
    
}