/* Bismillahir Rahmanir Rahim */
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<string>
#include<stdlib.h>
#define   mod          1000000007
#define   lp(i,a,b)    for(ll i=a;i<=b;i++)
#define   ll           long long int
#define   ull          unsigned long long int
#define   tst          int t;cin>>t;while(t--)
#define   pb           push_back
#define   vi(v)        vector<int>v;
#define   vl(v)        vector<ll>v;
#define   vs           vector<string>v
#define   rslt(x)      cout<<x<<endl;
#define   mp(x,y)      make_pair(x,y)
#define   yes          rslt("YES");
#define   no           cout<<"NO"<<endl;
#define   srt(v)       sort(v.begin(),v.end())
#define   rvs(v)       reverse(v.begin(),v.end());
#define   AR           ios::sync_with_stdio(false);cin.tie(0);
#define   gcd(a,b)     __gcd(a,b)
#define   lcm(a,b)     (a/gcd(a,b))*b
#define   max          1000007
#define   str          int s[200000];
#define   coutv(v)     for(auto it:v)cout<<it<<' ';cout<<endl;
#define   cinv(v)      for(auto &it:v)cin>>it;
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll cnt=0;
    lp(i,0,2)
    if(s[i]=='R')
        cnt++;
    ll cnt1=1;
    lp(i,0,1)
    {
        if(s[i]=='R' && s[i+1]=='R')
            cnt1++;
    }
    if(cnt>0)
cout<<cnt1<<endl;
else cout<<0<<endl;





    return 0;

}

