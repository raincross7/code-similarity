//Template Matching

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define rep(i,x,y) for(ll i=x;i<y;i++)
#define irep(i,a) for(auto i = a.begin(); i != a.end(); ++i)
#define nvarep(n,a) ll n;cin>>n;vector<ll>a(n);rep(i,0,n)cin>>a[i]
#define vecrep(n,a,type) vector<type>a(n);rep(i,0,n)cin>>a[i]
#define lcm(a,b) (a/__gcd(a, b)*b)
#define range(a) (a).begin(),(a).end() 
#define pb push_back
#define mp make_pair
#define nnn "\n"
#define spa " "
using p = pair<ll, string>;
using garph = vector<vector<ll>>;
const int inf = 2147483647;//2*10^9
const ll INF = 9223372036854775807;//9*10^18

signed main (){
    int n,m;cin>>n>>m;
    vecrep(n,a,string);
    vecrep(m,b,string);
    rep(i,0,n-m+1){
        rep(j,0,n-m+1){
            vector<string>t(m);
            rep(k,0,m){
                t[k]=a[i+k].substr(j,m);
            }
            if(t==b){
                cout<<"Yes"<<nnn;
                return 0;
            }
        }
    }
    cout<<"No"<<nnn;
    return 0;
}