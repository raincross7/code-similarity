#include <bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>
#define standardVar ll n,m,k,num,num1,num2,flag=0
#define nn <<"\n"
#define __ <<" "<<
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define ittr(x,v) for(auto x=v.begin();x!=v.end();x++)                  //COMMON FOR LOOP (ITERATOR)
#define itr(x,n) for(int x=0;x<n;x++)                                       //COMMON FOR LOOP (VARIABLE)
#define itrab(x,a,b) for(int x=a;x<b;x++)                                   //FOR LOOP WITH SPECIFIED START/END
#define itpr(v) ittr(x,v)cout<<*x<<" "; cout nn                         //PRINTS VECTOR,SET,MAP OF INTS
#define itppr(v) ittr(x,v)cout<<(*x).ff<<" "<<(*x).ss<<"  "; cout nn    //PRINTS VECTOR,SET,MAP OF PAIRS
#define sz(x) (ll)((x).size())

#define pi   3.14159265359
#define dTor(x) ((x)*pi)/180.0
#define INF  1000000000
#define INFF 1000000000000000000

typedef long long int ll;       //TYPEDEFS
typedef long double ld;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef map<ll,ll> ml;
typedef set<ll> sl;
typedef string str;
typedef pair<ll, ll> pl;
typedef vector< pl > vpl;
typedef map<pl,ll> mpl;
typedef set< pl > spl;
typedef vector<str> vst;
typedef vector<vl> vvl;
typedef vector<vb> vvb;

const ll M=1000000007;          //COMMON MODULO PRIMES
const ll N=998244353;

ll power(ll x, ll y, ll p){     //MODULAR EXPONENTIATION
    ll res=1;
    x=x%p;
    if(x==0)
        return 0;
    while(y>0){
        if(y&1)
            res=(res*x)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}
ll inv(ll x, ll m){             //FERMAT INVERSE
    return power(x,m-2,m);
}
ll nCr(ll n, ll r){             //nCr MOD P  
    vl fac(10);
    if (r==0) 
        return 1;
    return (fac[n]*inv(fac[r],M)%M*inv(fac[n-r],M)%M)%M;
}
struct comp{                    //COMPARISON ON PAIRS
    template<typename T>        
    bool operator()(const T &a, const T &b){
        if (a.ff==b.ff)
            return (a.ss<b.ss);
        else
            return (a.ff<b.ff);
    }
};
bool mod(const pair<ll,ll> &a, const pair<ll,ll> &b){   //COMPARATOR FOR PAIRS (SORTING)
    if(a.ff!=b.ff)
        return (a.ff<b.ff);
    else
        return (a.ss>b.ss);
}
void sieve(){       //SIEVE OF ERATOSTHENES
    vector<bool> pr(1000000+1,1);
    for(ll i=2;i*i<=1000000;i++)
        if(pr[i]==1)
            for(ll j=i*i;j<=1000000;j+=i)
                pr[j]=0;
}
bool isValid(ll i, ll j, ll n, ll m){   //CHECKS FOR OVERFLOW
    if(i>=1&&i<=n&&j>=1&&j<=m){
        return true;
    }
    return false;
}

//MAIN FUNCTION STARTS HERE

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    standardVar;
    cin>>n>>m;
    vvl adj(n+1);
    vb vis(n+1);
    itr(i,m){
        ll a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    queue<ll> q;
    q.push(1);
    vis[1]=true;
    vl ans(n+1);
    while(!q.empty()){
        ll fr=q.front();
        q.pop();
        itr(i,sz(adj[fr])){
            if(!vis[adj[fr][i]]){
                vis[adj[fr][i]]=true;
                ans[adj[fr][i]]=fr;
                q.push(adj[fr][i]);
            }
        }
    }
    cout<<"Yes" nn;
    itrab(i,2,n+1){
        cout<<ans[i] nn;
    }
    return 0;
}