// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, n) for (int i = 0; i < n; ++i)
#define range(i,a,b) ((a)<=(i) && (i)<(b))
#define debug(x) cout << #x << ' ' << '=' << ' ' << (x) << endl;
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
typedef long long ll;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> T;
typedef vector<ll> vec;
typedef vector<P> pvec;
typedef vector<vector<ll>> vvec;
typedef vector<vector<P>> pvvec;
typedef priority_queue<ll> PQI;
typedef priority_queue<P> PQP;
typedef priority_queue<ll,vector<ll>,greater<ll>> PQIG;
typedef priority_queue<P,vector<P>,greater<P>> PQPG;
const vector<int> dx = {0, -1, 0, 1, 1, 1, -1, -1};
const vector<int> dy = {1, 0, -1, 0, 1, -1, 1, -1};
const int MOD = (1000000007);
// const int MOD = (998244353);
// const int INF = (1 << 30);
const int INF = (1LL << 62);
const double EPS = (1 >> 30);
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return 1;} return 0;}
template< typename T1, typename T2 > istream &operator>>(istream &is, pair< T1, T2 > &p) { is >> p.first >> p.second; return is; }
template< typename T > istream &operator>>(istream &is, vector< T > &v) { for(T &in : v) is >> in; return is; }

int check(vec &x,vec &y,int i,int j,int k,int l,int K){
    int maxx=-INF,maxy=-INF,minx=INF,miny=INF;
    maxx=max({x[i],x[j],x[k],x[l]});
    maxy=max({y[i],y[j],y[k],y[l]});
    minx=min({x[i],x[j],x[k],x[l]});
    miny=min({y[i],y[j],y[k],y[l]});
    int cnt=0;
    rep(g,x.size()){
        if(range(x[g],minx,maxx+1)&&range(y[g],miny,maxy+1)) cnt++;
    }
    if(cnt>=K){
        return (maxx-minx)*(maxy-miny);
    }
    else{
        return INF+1;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(15);
    //---------------------------------------------
    
    int n,K;
    cin>>n>>K;
    vec x(n),y(n);
    rep(i,n) cin>>x[i]>>y[i];
    int ans=INF;
    rep(i,n){
        rep(j,n){
            rep(k,n){
                rep(l,n){
                    int cnt=check(x,y,i,j,k,l,K);
                    chmin(ans,cnt);
                }
            }
        }
    }
    cout<<ans<<endl;
    
    
}