// author - shreyanshjn (Shreyansh Jain)
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair <int,int> PII;
typedef pair <ll, ll> PLL;
typedef pair <int,string> PIS;
typedef vector <int> vec;
typedef priority_queue<int> PQ;
/* #define input 1 */
#define INF 100000000000000000
#define endl '\n'
#define debug(x) cout<<#x<<": "<<x<<endl
#define pi 3.141592653589793
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(ar) ar.begin(), ar.end()
#define sz(x) (int)(x).size()
#define len(x) (int)x.length()
#define rep(a,b,c) for(int a=b; a<c; a++)
#define fori(z,n)  for(int i=z;i<n;i++)
#define fork(z,n)  for(int k=z;k<n;k++)
#define forii(z,n) for(int i=z;i<=n;i++)
#define forkk(z,n) for(int k=z;k<=n;k++)
const int mod = 1e9 + 7;
int powm(int a, int b) {
    int res=1;
    while(b) {
        if(b&1)
            res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}
string trim(const string& str) {
    size_t first = str.find_first_not_of(' ');
    if (string::npos == first)
    {
        return str;
    }
    int last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}
int main() { 
    #ifdef input
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(15);
    int n; cin >> n;
    int arr[n];
    fori(0, n) cin >> arr[i];
    int dp[n];
    dp[0] = 0; dp[1] = abs(arr[1] - arr[0]);
    for(int i = 2; i < n; i++) {
        dp[i] = min(dp[i - 2] + abs(arr[i] - arr[i - 2]), dp[i - 1] + abs(arr[i] - arr[i - 1]));
    }
    cout << dp[n - 1] << endl;
    cerr<<"Time elapsed"<<1.0*clock()/CLOCKS_PER_SEC<<"s\n";
    return 0;
}
