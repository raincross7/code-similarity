#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rapido ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define mod 1000000007



void solve()
{
    string s;cin>>s;
    if(s[2]==s[3] && s[4]==s[5])
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}
int32_t main() 
{
    rapido;
    int t;
    //cin>>t;
    t=1;
    while(t--)
    solve();
    return 0;
}

