#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define mp make_pair
#define mm(a) memset(a,-1,sizeof(a))
#define rep(i,a,b) for(ll i = a; i < b; i++)
#define repn(i,a,b) for(ll i = a; i >= b; i--)
#define pb push_back
#define ff first
#define ss second
#define debug(this) cerr<<"> "<<#this<<" : "<<this<<"\n"
#define sz(a) ll((a).size())
#define pii 3.1415926535897
#define endl "\n"
#define ld long double
#define mod 1000000007
#define BRAHAMASTRA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    BRAHAMASTRA
    ll t; t=1;
    // cin >>t;
    while(t--)
    {
        string s,s1; cin >>s>>s1;
        ll cnt=0;
        rep(i,0,sz(s))if(s[i]!=s1[i])cnt++;
        cout<<cnt<<endl;
    }
}