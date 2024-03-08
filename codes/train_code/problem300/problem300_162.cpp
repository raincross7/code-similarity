#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
 
#define FS              ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll              long long int
#define ld              long double
#define pb              push_back
#define bp              __builtin_popcount
#define sz              size()
#define ff              first
#define ss              second
#define vll             vector<ll>
#define vbool           vector<bool>
#define vpll            vector<pair<ll,ll>>
#define pll             pair<ll,ll>
#define vllv            vector<vector<ll>>
#define setpri(x)       cout<<setprecision(x)<<fixed;
#define all(v)          v.begin(),v.end()
#define allr(v)         v.rbegin(),v.rend()
#define yesr {cout<<"YES"<<endl;return;}
#define nor {cout<<"NO"<<endl;return;}
// getline (std::cin,name);
ll MOD=1e9+7;
ll ceil1(ll n,ll x){return (n-1)/x+(n>0);}

ll gcd(ll a,ll b){return __gcd(a,b);}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}

ll pow1(ll n,ll m ,ll mod=MOD );
ll pow2(ll n,ll k);

ll modinv(ll n,ll mod=MOD){  return pow1(n,mod-2,mod);}

bool func(pair<pair<string,ll>,ll> &a,pair<pair<string,ll>,ll> &b ){
        if(a.ff.ff != b.ff.ff)return a.ff.ff < b.ff.ff;
        return a.ff.ss > b.ff.ss;
}
ll const N=(ll)1e5+11;
ll const LG=(ll)log2(N)+1;


void solve(){
        ll i,j,k,l,n,m,x,y,z,r;
        
        cin>>n>>m;
        
        vllv a(m+1);
        
        for(i=1;i<=m;i++){
                cin>>x;
                for(j=0;j<x;j++){
                        cin>>y;
                        y--;
                        a[i].pb(y);
                }
        }
        vll p(m+1);
        for(i=1;i<=m;i++){
                cin>>p[i];
        }
        ll ans=0;
        for(i=0;i<(1<<n);i++){
                
                vll tmp(m+1);
                
                for(j=1;j<=m;j++){
                        
                        for(k=0;k<a[j].sz;k++){
                                if(((1<<a[j][k])&(i))){
                                        tmp[j]++;
                                }
                        }
                }
                ll fl=1;
                for(j=1;j<=m;j++){
                        if(tmp[j]%2!=p[j])fl=0;
                }
                ans+=fl;
        }
        
        cout<<ans<<endl;
        
        
}       
int main(){
        FS;
        
        ll i,j,k,n,m,x,y,z,q;
        q=1;
        // cin>>q;
        while(q--){
                solve();
        }
        return 0;
}


ll pow1(ll n,ll m,ll mod){
        if(m==0)return 1;
        
        if(m%2==0)return pow1((n*n)%mod,m/2,mod);
    	
    	return (pow1((n*n)%mod,m/2,mod)*n)%mod;
}

ll pow2(ll n,ll k){
        ll ans=1;
            while(k>0){
                if(k%2==1)ans=ans*n;
                n=n*n;
                k/=2;
            }
            return ans;
}