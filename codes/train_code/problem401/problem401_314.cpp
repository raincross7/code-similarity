//Tanzim bin nasir
#include<bits/stdc++.h>
typedef long long ll;
#define ff first
#define ss second
using namespace std;
void fast()
{
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
}
ll gcd(ll a,ll b)
{
    if(b==0)
    return a;
    else
    gcd(b,a%b);
}
ll lcd(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> v;
    string s,ans;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    ans+=v[i];
    cout<<ans<<endl;
}
