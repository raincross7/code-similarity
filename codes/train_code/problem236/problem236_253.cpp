#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define ll long long
#define all(v) (v).begin(), (v).end()
#define rep(i,n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<n;++i)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define EPS (1e-7)
#define gearup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef pair<ll, ll> P;
typedef vector<ll> vl;
typedef vector<vector<ll> > vvl;
typedef vector<vector<vector<ll> > > vvvl;
ll MOD = 1000000007;
const long long L_INF = 1LL << 60;
const int INF = 2147483647; // 2^31-1
const double PI = acos(-1);
//cout<<fixed<<setprecision(10);

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
template<class T> void debug(T v){rep(i,v.size()) cout<<v[i]<<" ";cout<<endl;}
const ll dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const ll dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

ll dfs(ll n,ll x,vl s,vl S){ //層の段,残り層数
    if(n==0)return 1;
    else if(x==1)return 0;
    else if(x>1 && x<= 1+s[n-1])return dfs(n-1,x-1,s,S);
    else if(x==2+s[n-1])return (1+S[n-1]);
    else if(x>2+s[n-1] && x<3+2*s[n-1])return S[n-1]+1+dfs(n-1,x-2-s[n-1],s,S);
    else return (1+2*S[n-1]);
}
signed main()
{   
    gearup;
    ll n,m; cin >> n >> m;

    vector<ll> S(n+1); //パティの数
    vector<ll> s(n+1); //層数
    s[0] = 1;
    S[0] = 1;
    rep1(i,n){
        s[i] = 2*s[i-1] + 3;
        S[i] = 2*S[i-1] + 1;
    }
    
    cout << dfs(n,m,s,S) << endl;
}
