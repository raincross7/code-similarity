#include <bits/stdc++.h>

/*==========type============*/
typedef long long ll;
typedef std::pair<int,int> pii;
typedef std::pair<ll,ll> pll;
typedef std::pair<std::string,ll> psl;

/*==========constant============*/
#define INF INT_MAX
#define INF_L LONG_MAX
#define INF_LL LLONG_MAX
#define MOD 1000000007

/*==========function============*/
#define REP(ii,jj,nn) for (ll ii=jj;ii<(nn);ii++)
#define RREP(ii,nn,jj) for (ll ii = nn; jj<ii;ii--)
#define each(i,...) for (auto&& i:__VA_ARGS__)
#define ALL(vec) (vec).begin(),(vec).end()
#define sum(...) accumulate(ALL(__VA_ARGS__),0LL)
#define dsum(...) accumulate(ALL(__VA_ARGS__),0.0)
#define vec(type,name,...) vector<type> name(__VA_ARGS__)
template<class T> inline auto max(const T& a){ return *max_element(ALL(a)); }
template<class T> inline auto min(const T& a){ return *min_element(ALL(a)); }
inline ll gcd(ll a,ll b){if(b == 0) return a;return  gcd(b,a%b);}
inline ll lcm(ll a,ll b){ll g = gcd(a,b);return a / g * b;}

using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    vector< vector<ll> > abc(n,vector<ll>(3));
    REP(i,0,n){
        REP(j,0,3){
            cin >> abc[i][j];
        }
    }

    vector<vector<ll>> dp(n,vector<ll>(3));
    dp[0][0] = abc[0][0];
    dp[0][1] = abc[0][1];
    dp[0][2] = abc[0][2];

    REP(i,1,n){
        REP(j,0,3){
            ll x = dp[i-1][(j+1)%3], y = dp[i-1][(j+2)%3];
            dp[i][j] = x > y ? x : y;
            dp[i][j] += abc[i][j]; 
        }
    }
    
    ll ans = 0;
    REP(i,0,3){
        ans = max(dp[n-1][i],ans);
    }

    cout << ans << endl;

    return 0;
}    