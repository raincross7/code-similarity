/*
Author: Deep Chaklasiya
*/

#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define double      long double
#define pb          push_back
#define pf          push_front
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define piiii       pair<pii,pii>
#define viiii       vector<pair<pii,pii>>
#define mi          map<int,int>
#define mii         map<pii,int>
#define piii           pair<int,pair<int,int> >
#define all(a)      (a).begin(),(a).end()
#define rall(a)     (a).rbegin(),(a).rend()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        998244353
#define PI          3.141592653589
#define bs(v,n)     binary_search(all((v)),(n))
#define lb(v,n)     lower_bound(all((v)),(n))
#define ub(v,n)     upper_bound(all((v)),(n))
#define fo(i,l,u)   for(i=l;i<u;i++)
#define rfo(i,l,u)  for(i=l;i>=u;i--)
#define allfo(s)    for(auto it=(s).begin();it!=(s).end();it++)
#define _init(b)     memset(b,-1,sizeof(b))
#define _init0(b)     memset(b,0,sizeof(b))
#define MOD         1000000007
#define ef else if
template<class A,class B>ostream&operator<<(ostream&out,const pair<A,B>&a){return out<<"("<<a.first<<","<<a.second<<")";}
template<class A>ostream&operator<<(ostream&out,const vector<A>&a){for(const A &it:a)out<<it<<" ";return out;}
template<class A,class B>istream&operator>>(istream&in,pair<A,B>&a){return in>>a.first>>a.second;}
template<class A>istream&operator>>(istream&in,vector<A>&a){for(A &i:a)in>>i;return in;}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b) cout<<c;
    else if(b==c) cout<<a;
    else cout<<b;
    return 0;
}
