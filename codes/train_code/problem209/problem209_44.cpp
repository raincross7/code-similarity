    #include<bits/stdc++.h>
    using namespace std;
    
    //                                 (POLICY BASED DS)
    // #include <ext/pb_ds/assoc_container.hpp>
    // #include <ext/pb_ds/tree_policy.hpp>
    // using namespace __gnu_pbds;
    // template<typename T>
    // using ordered_set=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
    // template<typename T>
    // using ordered_multiset=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
    //                      ( find_by_order( )  ,  order_of_key( ) )
    
    typedef long long ll;
    typedef long double ld;
    typedef unsigned long long ull;
    typedef vector<int> vi;
    typedef vector<long long> vll;
    typedef pair<ll,ll> pll;
     
    const ll mod = 1e9 + 7;
    const ld PI = 3.1415926535897932384626;
    const ld eps = 1e-9;                            
     
    #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
    #define sidha(i,a,b) for(ll i=(ll)(a);i<(ll)(b);++i)
    #define ulta(i,a,b) for(ll i=(ll)(a);i>=(ll)(b);--i)
    #define stl(container,itr) \
        for(auto itr = container.begin(); itr != container.end(); itr++)
    #define sab(v) v.begin(), v.end()
    #define rall(v) v.rbegin(), v.rend()            
    #define test ll t;cin>>t;while(t--)
    #define sz size()
    #define pb push_back
    #define mp make_pair
    #define fi first
    #define se second
    #define LOG2(X) (63ll - __builtin_clzll(X))
    #define endl '\n'
    #define modinv(x) power(x, mod-2)
    #define ncr(n,r) ( n >= r ? ((((fact[n]*modinv(fact[r]))%mod)*modinv(fact[n-r]))%mod) : (ll)0)
    #define MAX 100005
     
    ll power(ll x, ll y) { 
        ll ans=1;
        x=x%mod;
        while(y>0) { 
            if (y&1) 
                ans=(ans*x)%mod; 
            y=y>>1;
            x=(x*x)%mod; 
        } 
        return ans; 
    }
    //  vector<ll> adj[200005];
    //  ll visit[200005];
    // void dfs(ll node){
    //     visit[node]=1;
    //     for(auto i : adj[node]){
    //         if(!visit[i]) dfs(i);
    //     }
    // }
    ll arr[200005],siz[200005];
    ll findroot(ll i){
        while(arr[i]!=i){
            arr[i]=arr[arr[i]];
            i=arr[i];
        }
        return i;
    }
    
    void join(ll a ,ll b){
        ll root1=findroot(a);
        ll root2=findroot(b);
        if(root1!=root2){
            if(siz[root1]>=siz[root2]){
                siz[root1]+=siz[root2];
                arr[root2]=root1;
            }
            else{
                siz[root2]+=siz[root1];
                arr[root1]=root2;
            }
        }
    }
    // ll spf[MAX];
    // void sieve(){
    //     sidha(i,1,MAX)  spf[i]=i;
    //     for(ll i=4;i<MAX;i+=2)  spf[i]=2;
    //     for(ll i=3;i*i<=MAX;i++){
    //         if(spf[i]==i){
    //             for(ll j=i*i;j<MAX;j+=i){
    //                 if(spf[j]==j)   spf[j]=i;
    //             }
    //         }
    //     }
    // }

    int main()
    {
        boost;
        ll a,b,n,m,ans=0;
        cin>>n>>m;
        sidha(i,1,n+1){
            arr[i]=i;
            siz[i]=1;
        }
        while(m--){
            cin>>a>>b;
            join(a,b);
        }
        sidha(i,1,n+1)  ans=max(ans,siz[i]);
        cout<<ans;
        return 0;
    }
    