#include<bits/stdc++.h>
//using namespace std;
#define rep(i,j,n) for(ll i=(ll)(j);i<(ll)(n);i++)
#define REP(i,j,n) for(ll i=(ll)(j);i<=(ll)(n);i++)
#define per(i,j,n) for(ll i=(ll)(j);(ll)(n)<=i;i--)
#define ll long long
#define ALL(a) (a).begin(),(a).end()
#define disup(A,key) distance(A.begin(),upper_bound(ALL(A),(ll)(key)))
#define dislow(A,key) distance(A.begin(),lower_bound(ALL(A),(ll)(key)))
#define pb push_back
#define mp std::make_pair
#define endl "\n"
using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::upper_bound;
using std::lower_bound;
using vi=vector<ll>;
using vii=vector<vi>;
using pii=std::pair<ll,ll>;
const ll MOD=1e9+7;
//const ll MOD=998244353;
const ll MAX=500000;
const ll INF=(1ll<<62)-1;
template<class T>
class prique :public std::priority_queue<T, std::vector<T>, std::greater<T>> {};
struct Binary_indexed_tree{
    int N;
    vi bit;
    Binary_indexed_tree(int n):N(n){
        bit.resize(N+1,0);
    }
    void add(int x,int a){
        for(x;x<=N;x+=(x&-x)) bit[x]+=a;
    }
    ll sum(int x){
        ll ret=0;
        for(x;x>0;x-=(x&-x)) ret+=bit[x];
        return ret;
    }
};
ll modpow(ll X,ll Y){
    ll sum=X,cnt=1;
    vi A;
    while(cnt<=Y){
        A.pb(sum);
        sum*=sum;
        sum%=MOD;
        cnt*=2;
    }
    int M=A.size();
    ll ret=1;
    REP(i,1,M){
        if(Y>=(1ll<<M-i)){
            Y-=(1ll<<M-i);
            ret*=A[M-i];
            ret%=MOD;
        }
    }
    return ret;
}
ll fac[MAX],finv[MAX],inv[MAX];
void COMinit(){
    fac[0]=fac[1]=finv[1]=finv[0]=inv[0]=inv[1]=1;
    rep(i,2,MAX){
        fac[i]=fac[i-1]*i%MOD;
        inv[i]=modpow(i,MOD-2);
        finv[i]=finv[i-1]*inv[i]%MOD;
    }
}
ll COM(ll n,ll r){
    if(n<r||n<0||r<0) return 0;
    return fac[n]*finv[r]%MOD*finv[n-r]%MOD;
}
int ans[MAX];
void dfs(vi &A,vii &Edge,vector<bool> &F,vi &dp,int X){
    ll P=dislow(dp,A[X]);
    ll memo=dp[P];
    dp[P]=A[X];
    ans[X]=dislow(dp,INF)-1;
    rep(i,0,Edge[X].size()){
        int Y=Edge[X][i];
        if(F[Y]){
            F[Y]=0;
            dfs(A,Edge,F,dp,Y);
        }
    }
    dp[P]=memo;
}
signed main(){
    int N; cin>>N;
    string S; cin>>S;
    ll ans=1,cnt=1,memo=0;
    if(S[0]=='W'||S[2*N-1]=='W'){
        cout<<0<<endl;
        return 0;
    }
    rep(i,1,2*N){
        if(S[i]==S[i-1]){
            if(memo==0){
                ans*=cnt;
                ans%=MOD;
                cnt--;
            }
            else{
                cnt++;
            }
            memo=1-memo;
        }
        else{
            if(memo==0){
                cnt++;
            }
            else{
                ans*=cnt;
                ans%=MOD;
                cnt--;
            }
        }
    }
    COMinit();
    if(cnt>0) ans=0;
    ans*=fac[N];
    ans%=MOD;
    cout<<ans<<endl;
}