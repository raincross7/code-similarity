#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define all(x) x.begin(),x.end()
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define vll vector<ll>
#define sll set<ll>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define endl "\n"
const ll maxn = 2e5+2;

int main()
{
    fastio;
    ll i, j, k, n, m, t;

    cin>>n>>m;
    if(m%2==0)
    {
        if(m>=2*n && m<=4*n)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    else
        cout<<"No"<<endl;
    
        
    return 0;
}