#include<bits/stdc++.h>
using namespace std;
#define arep(i,x,n) for(int i=int(x);i<(int)(n);i++)
#define rep(i,n) for(long long i = 0;i < n;++i)
#define rrep(i,n) for(int i=int(n-1);i>=0;i--)
#define cy cout<<"Yes"<<endl;
#define cn cout<<"No"<<endl;
#define fs first
#define sc second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).begin(), (x).end()
#define pi 3.141592653589793
#define eps 0.00000001
#define INF 1e9+7
#define LINF 1e18+10  
using ll = long long; 

using P=pair<int,int>;
using lP=pair<ll,ll>;
using fP=pair<double,double>;
using PPI=pair<P,int>;
using Ps=pair<int,string>;

using vi=vector<int>;
using vl=vector<ll>;
using vc=vector<char>;
using vd=vector<double>;
using vs=vector<string>;
using vp=vector<P>;
using vb=vector<bool>;
using vvi =vector<vector<int>>;
using vvl =vector<vector<ll>>;
using vvd=vector<vector<double>>;
using vvc=vector<vector<char>>;
using vvp =vector<vector<P>>;
using vvb=vector<vector<bool>>;
template <typename T>
bool chmax(T &a, const T b){if(a < b){a = b; return true;} return false;}
template <typename T>
bool chmin(T &a, const T b){if(a > b){a = b; return true;} return false;}

//const ll mod=998244353;
const ll mod=1e9+7;
const ll MAX=300000;

//////////////////////////////////////
int main(){
    int n,m;
    cin>>n>>m;
    vs a(n),b(m);
    rep(i,n)cin>>a[i];
    rep(i,m)cin>>b[i];
    
    rep(i,n-m+1)rep(j,n-m+1){
        bool ok=true;
        rep(s,m)rep(t,m){
            if(a[s+i][t+j]!=b[s][t]){
                ok=false;
                break;
            }
        }
        if(ok){
            cy;
            return 0;
        }
    }
    cn;
    return 0;

}