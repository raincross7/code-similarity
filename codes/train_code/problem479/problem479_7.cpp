#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops,no-stack-protector")
#pragma GCC target("sse,sse2,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define debug cout << "hi" << endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<long long ,long long>pll;

ll gcd(ll a, ll b) {return (!b ? a : gcd(b, a % b));}
ll lcm(ll a, ll b) {return ((a*b)/gcd(a,b));}
bool cmp(int a,int b){return a>b;}

const ll mod = 1e9 + 7;
const int INF32 = 1<<30;
const ll INF64 = 1LL<<60;
const ld pi = 3.141592653589793;

unsigned long long modpow(unsigned long long n, unsigned long long k, unsigned long long mod)
{
if (k == 0) return 1;
long long r = modpow(n * n % mod, k >> 1, mod);
if (k & 1) r = r * n % mod;
return r;
}

void solve(){
     int n,m;cin >> n >> m;
     vector<string>s(n);
     vector<vector<ll>>dp(n,vector<ll>(m,0));
     for(int i = 0;i<n;i++) cin >> s[i];
     for(int i = 0;i<m;i++) {
        if(s[0][i]=='#') break;
        dp[0][i] = 1;
     }
     for(int i = 0;i<n;i++){
        if(s[i][0]=='#') break;
        dp[i][0] = 1;
     }
     for(int i = 1;i<n;i++){
        for(int j = 1;j<m;j++){
            if(s[i][j]=='#') dp[i][j] = 0;
            else dp[i][j] = (dp[i-1][j]+dp[i][j-1]+mod)%mod;
        }
     }
     cout << dp[n-1][m-1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
    return 0;
}
