#include <bits/stdc++.h>
using namespace std;using ll=long long;using uint=unsigned int;using pii=pair<int,int>;using pll=pair<ll,ll>;using ull = unsigned long long;using ld=long double;template<typename T>void _(const char*s,T h){cerr<<s<<" = "<<h<<"\n";}template<typename T,typename...Ts>void _(const char*s,T h,Ts...t){int b=0;while(((b+=*s=='(')-=*s==')')!=0||*s!=',')cerr<<*s++;cerr<<" = "<<h<<",";_(s+1,t...);}// break continue pop_back 998244353
#define int ll
#define pii pll
#define f first
#define s second
#define pb emplace_back
#define forn(i,n) for(int i=0;i<(n);++i)
#define sz(a)((int)(a).size())
#define sqr(x) ((x)*(x))
struct init{init(){cin.tie(0);iostream::sync_with_stdio(0);cout<<fixed<<setprecision(10);cerr<<fixed<<setprecision(5);}~init(){
#ifdef LOCAL
#define dbg(...) _(#__VA_ARGS__,__VA_ARGS__)
cerr<<"Time elapsed: "<<(double)clock()/CLOCKS_PER_SEC<<"s.\n";
#else
#define dbg(...) 
#endif
}}init;template<typename T,typename U>void upx(T&x,U y){if(x<y)x=y;}template<typename T,typename U>void upn(T&x,U y){if(x>y)x=y;}mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());const int D=4,dx[]={+1,0,-1,0},dy[]={0,+1,0,-1};
const int N=2e5+5;
int p[N],dp[N];
int32_t main(){
    string s;
    cin>>s;
    int n=sz(s);
    s="#"+s;
    vector<int> v={0};
    forn(i,26)v.pb(1<<i);
    unordered_map<int,int> m;
    for(int i=1;i<=n;++i){
        int x=s[i]-'a';
        p[i]=p[i-1]^(1<<x);
    }
    for(int i=n;i>=1;--i){
        if(m.count(p[i]))upn(m[p[i]],dp[i+1]);
        else m[p[i]]=dp[i+1];
        dp[i]=N;
        for(int j:v){
            int tar=j^p[i-1];
            auto it=m.find(tar);
            if(it!=m.end())upn(dp[i],it->s+1);
        }
    }
    cout<<dp[1]<<'\n';
    return 0;
}