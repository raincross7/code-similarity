#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//#include <boost/multiprecision/cpp_ll.hpp>
//typedef boost::multiprecision::cpp_ll ll;
typedef long double dd;
#define i_7 (ll)(1E9+7)
//#define i_7 998244353
#define i_5 i_7-2
ll mod(ll a){
    ll c=a%i_7;
    if(c>=0)return c;
    return c+i_7;
}
typedef pair<ll,ll> l_l;
ll inf=(ll)1E16;
#define rep(i,l,r) for(ll i=l;i<=r;i++)
#define pb push_back
ll max(ll a,ll b){if(a<b)return b;else return a;}
ll min(ll a,ll b){if(a>b)return b;else return a;}
void Max(ll &pos,ll val){pos=max(pos,val);}//Max(dp[n],dp[n-1]);
void Min(ll &pos,ll val){pos=min(pos,val);}
void Add(ll &pos,ll val){pos=mod(pos+val);}
dd EPS=1E-9;
string alp="abcdefghijklmnopqrstuvwxyz";
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
    ll n,k;cin>>n>>k;
    if(k>((n-2)*(n-1))/2){
        cout<<-1<<endl;
    }else{
        ll m=((n-2)*(n-1))/2-k;
        cout<<n-1+m<<endl;
        rep(i,2,n){
            cout<<1<<' '<<i<<endl;
        }
        if(m>0){
            rep(i,2,n-1){
                if(m==0)break;
                rep(j,i+1,n){
                    if(m==0)break;
                    cout<<i<<' '<<j<<endl;
                    m--;
                }
            }
        }
    }
    
    
    return 0;
}


