#include<bits/stdc++.h>
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define f0(i,n) for( ll i = 0; i < ( n ); i ++)
#define f1(i,n) for(i = 1; i <= ( n ); i ++)
#define f(i,m,n) for(auto i = ( m ); i <= ( n ); i ++)
#define nl cout<<"\n"
#define  mod 1000000007
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define rall(v) v.rbegin(), v.rend()
#define SZ(x) ((ll)x.size())
#define mem(a, b) memset(a, b, sizeof(a));
#define make_graph(k) int x,y; f0(i,k){cin>>x>>y; adj[x].pb(y); /*adj[y].pb(x);*/}
#define dekh cout<<"dekh"

#define o_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define o_setpll tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update>
typedef vector<ll> vl;




/*ll Pow(ll a, ll b, ll m){
    if(b==0)return 1;
    if(b%2==0){
        ll x = a*a;
        x%=m;
        return Pow(x,b/2,m);
    }
    return (a*Pow(a,b-1,m))%m;
}
*/
/*vector<ll>adj[200005];
 ll vis[200005]={0};
 ll depth[200005]={0};*/

//ll p;ll arr[200005];
/*
void dfs(ll x)
{

    vis[x]=1;

    for(auto child : adj[x])
    {   if(!vis[child])
         {
             dfs(child);
         }
         depth[x]= max(depth[x],depth[child]+1);

    }

}

*/



int main()
{
    fast
    ll n,i,j,m;
    cin>>n>>m;
    char arr[n][m];
    ll dp[n][m]={{0}};
    f0(i,n){
        f0(j,m){
                 cin>>arr[i][j];
                 if(arr[i][j]=='#'){dp[i][j]=0;}
            }
        }

    dp[0][0]=1;
          f1(i,m-1){
        if(arr[0][i]=='#')dp[0][i]=0;
       else{ dp[0][i]=dp[0][i-1];}//cout<<dp[0][i];

        }

        f1(i,n-1){
        if(arr[i][0]=='#')dp[i][0]=0;
     else{   dp[i][0]=dp[i-1][0];}//cout<<dp[i][0];

        }
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
              if(arr[i][j]=='#')continue;
                dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
              
            }
        }
  //f0(i,n)f0(j,m)cout<<dp[i][j]<<" ";
     cout<<dp[n-1][m-1];

}



