#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define pb push_back
#define digit(x) floor(log10(x))+1
#define mod 1000000007
#define endl "\n"
#define int long long
typedef long double ld;
typedef vector<vector<int> > matrix;
typedef vector<int> arr;
typedef vector<string> vs;
typedef vector<pair<int,int> > pv;
#define test() int t;cin>>t;while(t--)
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define ROF(i,a,b) for(int i=a;i>=b;--i)
#define all(x) x.begin(),x.end()
#define debug(x) cerr << #x << " is " << x << endl;
int bx[]={0,0,1,-1,1,-1,-1,1};
int by[]={1,-1,0,0,1,-1,1,-1};
//=================================================================//

int dp[2*3001][2*3001];
int n,m;
void CommonSubsequence(int *A, int *B) {
    
    memset(dp, 0, sizeof dp);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(A[i-1]==B[j-1]) {
                dp[i][j] = (1 + dp[i-1][j]%mod + dp[i][j-1]%mod)%mod;
            } else {
                dp[i][j] = (dp[i-1][j]%mod+dp[i][j-1]%mod-dp[i-1][j-1]%mod+mod)%mod;
            }
        }
    }    
}

#undef int
int main(){
#define int long long 
    fast;
    cin>>n>>m;
    int s[n], t[m];
    FOR(i,0,n-1) cin>>s[i];
    FOR(i,0,m-1) cin>>t[i];
    CommonSubsequence(s,t);
    // FOR(i,0,n) {
    //     FOR(j,0,m) cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }
    cout<<(dp[n][m]+1)%mod;
    return 0;
}