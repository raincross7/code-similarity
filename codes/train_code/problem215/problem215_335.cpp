#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pl;
#define all(a) (a).begin(),(a).end()
#define overload4(_1, _2, _3, _4, name, ...) name
#define rep1(n) for(ll i = 0;i < (n);i++)
#define rep2(i,n) for(ll i = 0;i < (n);i++)
#define rep3(i,a,b) for(ll i = (a);i < (b);i++)
#define rep4(i,a,b,c) for(ll i = (a);i < (b);i += (c))
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define rrep1(n) for(ll i = (n)-1;i >= 0;i--)
#define rrep2(i,n) for(ll i = (n)-1;i >= 0;i--)
#define rrep3(i,a,b) for(ll i = (a)-1;i >= (b);i--)
#define rrep4(i,a,b,c) for(ll i = (a)-1;i >= (b);i -= (c))
#define rrep(...) overload4(__VA_ARGS__, rrep4, rrep3, rrep2, rrep1)(__VA_ARGS__)
#define SHOW(x) cout << #x << ": " << x << endl;
template<class T> ll sumArr(const T& a){ return accumulate(all(a), 0LL);}
template<class T> auto minArr(const T& a){ return *min_element(all(a));}
template<class T> auto maxArr(const T& a){ return *max_element(all(a));}
template<class T> void DEBUG_PRINT(T tmp){cout<<tmp<<endl;}
template<class T1,class... T2> void DEBUG_PRINT(T1 tmp,T2... tmp2){cout<<tmp<<" ";DEBUG_PRINT(tmp2...);}
ll gcd(ll a, ll b){ while(b){ ll c = b; b = a % b; a = c; } return a; }
const ll INF=1e18,MOD = 1e9+7;
const int iINF = 1e9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string n;
    ll k,dp[101][2][5];//dp[digit][smaller][0,1,2,3,over]
    rep(i,101)rep(j,2)rep(k,5)dp[i][j][k] = 0;
    dp[0][0][0] = 1;

    cin>>n>>k;

    rep(i,n.size()){
        int num = n[i] - '0';
        rep(j,2)rep(d,(j)?10:num + 1)rep(k,4){
            dp[i + 1][j || d < num][k + (d != 0)] += dp[i][j][k];
        }
    }
    
    cout<<dp[n.size()][0][k] + dp[n.size()][1][k]<<endl;

    return 0;
}
