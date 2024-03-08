#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define clr(a) memset(a, 0, sizeof(a))
#define sz(x) x.size()
#define printarray(arr) for (auto it = arr.begin(); it != arr.end(); ++it) cout<<*it<<" "; cout<<endl;
#define rep(n) for (ll i = 0; i < n; i++)
#define repc(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define DEC(i, x, y) for (int i = x; i >= y; i--)
#define all(v) v.begin(), v.end()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define alla(a, n) a, a + n
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b)/gcd(a, b)
#define int long long int
#define ull unsigned long long

using namespace std;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 5;

int fastexpo(int b, int exp){
    if(exp == 0) return 1;
    if(exp == 1) return b;
    int ans = (fastexpo(b,exp/2) % MOD);
    ans *= ans;
    ans %= MOD;
    if(exp % 2 == 1){
        ans *= b;
    }
    ans %= MOD;
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin>>n>>k;
    int a[n+2];
    for(int i= 1;i<=n;i++){
    	cin>>a[i];
    }
    int dp[n+2][k+2];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for(int i= 1;i<=n;i++){
    	int pref[k+2];
    	memset(pref, 0, sizeof(pref));
    	for(int j = 0;j<=k;j++){
    		if(j == 0){
    			pref[j] = dp[i-1][j];
    		} else {
    			pref[j] = pref[j-1];
    			pref[j] += (dp[i-1][j]%MOD);
    			pref[j] %= MOD;
    		}
    	}
    	for(int j = 0;j<=k;j++){
    		int val=(pref[j]%MOD);
            int mx=j-a[i]-1;
            if(mx>=0) {
                val=(val-pref[mx]+MOD)%MOD;
            }
            dp[i][j]=val;
    	}
    }
    cout<<dp[n][k]<<endl;
    return 0;
}



