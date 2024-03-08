#pragma GCC optimize("O3")
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds; 

#define int long long
#define pb push_back
#define pf push_front
#define eb emplace_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define f first
#define s second
#define sz(x) (int)x.size()
#define endl "\n"
#define forn(i,n) for(int i=0;i<n;++i)
#define fore(i,l,r) for(int i=int(l);i<=int(r);++i)
#define rep(i,begin,end) for(__typeof(end) i=(begin);i!=(end);i++)
#define fill(a,value) memset(a,value,sizeof(a));
#define gcd(a,b) __gcd((a),(b))
#define watch1(x) cout<<(x)<<endl
#define watch2(x,y) cout<<(x)<<" "<<(y)<<endl
#define watch3(x,y,z) cout<<(x)<<" "<<(y)<<" "<<(z)<<endl
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef long double ld; 
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> oset;

const int INF = 9e18;
const int mod = 1e9 + 7;
const int N = 2e5 + 5;

int pwr(int x,int y)
{
    int res=1;
    x%=mod;
    while(y>0)
    {
        if(y&1)
            res=(res*x)%mod;
        y>>=1;
        x=(x*x)%mod;
    }
    return res;
}

string s;

void solve()
{
    cin>>s;
    int ans=0,cnt=0;
    for(int i=0;i<sz(s);++i)
    {
        if(s[i]=='1')
        {
            int sum=pwr(2,cnt)*pwr(3,sz(s)-1-i);
            sum%=mod;
            ans+=sum;
            ans%=mod;
            cnt++;
        }
    }
    ans+=pwr(2,cnt);
    ans%=mod;
    cout<<ans;
}

signed main()
{
    fastio;
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}