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
const int N=5005;
bool p[N][N],s[N][N];
int a[N];
int32_t main(){
    int n,k;
    cin>>n>>k;
    p[0][0]=1;
    for(int i=1;i<=n;++i)cin>>a[i];
    for(int i=1;i<=n;++i){
        forn(j,k){
            p[i][j]=p[i-1][j];
            if(j>=a[i])p[i][j]|=p[i-1][j-a[i]];
        }
    }
    s[n+1][0]=1;
    for(int i=n;i>=1;--i){
        forn(j,k){
            s[i][j]=s[i+1][j];
            if(j>=a[i])s[i][j]|=s[i+1][j-a[i]];
        }   
    }
    int ans=0;
    for(int i=1;i<=n;++i){
        int r=k,l=k,z=0;
        while(l>0&&l>k-a[i])z+=s[i+1][--l];
        int bad=0;
        forn(j,k){
            if(p[i-1][j]&&z){
                bad=1;
                break;
            }
            z-=s[i+1][--r];
            if(l>0)z+=s[i+1][--l];
        }
        ans+=1^bad;
    }
    cout<<ans<<'\n';
    return 0;
}