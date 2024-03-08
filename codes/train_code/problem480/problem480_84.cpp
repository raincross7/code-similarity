#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define leading zero str.erase(0, min(str.find_first_not_of('0'), str.size()-1));
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
string text="abcdefghijklmnopqrstuvwxyz";
const int maxn=1e6+7;
//        .--------------.
//        | Try First One|
//        '--------------'
//                |     .--------------.
//                |     |              |
//                V     V              |
//              .--------------.       |
//              |      AC.     |<---.  |
//              '--------------'    |  |
//              (True)|  |(False)   |  |
//           .--------'  |          |  |
//           |           V          |  |
//           |  .--------------.    |  |
//           |  |   Try Again  |----'  |
//           |  '--------------'       |
//           |                         |
//           |  .--------------.       |
//           '->| Try Next One |-------'
//              '--------------'
ll bin_pow(ll a,ll b,ll m)
{
    ll res=1;
    a%=m;
    while(b>0)
    {
        if(b&1)
            res=res*a%m;
        b>>=1;
        a=a*a%m;
    }
    return res;
}
bool miller_rabin(ll d,ll n)
{
    ll a=2+rand()%(n-4);
    ll x=bin_pow(a,d,n);
    if(x==1 || x==n-1)
        return true;
    while(d!=n-1)
    {
        x=(x*x)%n;
        d*=2;
        if(x==1)
            return false;
        if(x==n-1)
            return true;
    }
    return false;
}
bool prime(ll n,ll k)
{
    if(n==1 || n==4)
        return false;
    if(n<=3)
        return true;
    ll d=n-1;
    while(d%2==0)
        d/=2;
    for(int i=0; i<k; i++)
    {
        if(!miller_rabin(d,n))
            return false;
    }
    return true;
}
int n;
string s;
ll ans = 0;

void solve(ll x,ll y){
    if(x==n+1){
        ans += y;
        return;
    }
    ll cur = 0;
    for(ll i=x;i<=n;i++){
        cur = (10*cur) + (s[i]-'0');
        solve(i+1,y+cur);
    }
}
struct node
{
    ll to;
    ll cost;
};
vector<node>v[100005];
ll depth[100005];
void dfs(ll u,ll p, ll d)
{
    depth[u]=d;
    for(auto &x: v[u]){
        if(x.to==p)continue;
        dfs(x.to,u,x.cost+d);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    ll q,k;
    cin>>q>>k;
    dfs(k,-1,0);
    while(q-->0){
        ll a,b;
        cin>>a>>b;
        cout<<depth[a]+depth[b]<<endl;
    }
}
