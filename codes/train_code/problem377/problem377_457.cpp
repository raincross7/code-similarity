
/*
─────────────────────
───────────████████──
──────────███▄███████
──────────███████████
──────────███████████
──────────██████─────
──────────█████████──
█───────███████──────
██────████████████───
███──██████████──█───
███████████████──────
███████████████──────
─█████████████───────
──███████████────────
────████████─────────
─────███──██─────────
─────██────█─────────
─────█─────█─────────
─────██────██────────
─────────────────────
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

#define int long long
#define read(a) int a; cin >> a;
#define readb(a, b) int a, b; cin >> a >> b;
#define readc(a, b, c) int a, b, c; cin >> a >> b >> c;
#define reads(s) string s; cin >> s;
#define readarr(a, n) int a[(n) + 1] = {}; fori (i, 1, n) {cin >> a[i];}
#define readmat(a, n, m) int a[(n) + 1][(m) + 1] = {}; fori (i, 1, n) {fori (j, 1, m) cin >> a[i][j];}

#define print(a) cout << a << endl;
#define printarr(a, n) fori (i, 1, n) cout << a[i] << " "; cout << endl;
#define printv(v) for (int i: v) cout << i << " "; cout << endl;
#define printmat(a, n, m) fori (i, 1, n) {fori (j, 1, m) cout << a[i][j] << " "; cout << endl;}
#define all(v) v.begin(), v.end()
#define sz(s) (int)(s.size())
#define pb push_back
#define fi first
#define se second
#define rz resize
#define fori(i, a, b) for (int i = (a); i <= (b); i++)
#define ford(i, a, b) for (int i = (a); i >= (b); i--)
#define endl '\n'
#define setprec(x) cout << fixed << setprecision(x);
 
using namespace std;
using namespace __gnu_pbds; 
 
typedef tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair <int, int>> vpi;
typedef vector < vector <int> > vvi;
 
const int INF = 4e18;
const int mod = 1e9+7; 

     
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE 
        freopen ("INPUT.txt" , "r" , stdin);
        freopen ("OUTPUT.txt" , "w" , stdout);
        freopen ("OUTPUT_ERROR.txt" , "w" , stderr);
    #endif

    //start from here

    readb(n, k) readarr(a, n)

    int dp[n+1][k+1] = {};
    int count[n+1][k+1] = {};

    fori (i, 0, n) dp[i][0] = 1;

    count[0][0] = dp[0][0];
    fori (j, 1, k) count[0][j] = (count[0][j-1] + dp[0][j]) % mod;

    fori (i, 1, n)
    {
        fori (j, 1, k) 
        {
            if(j > a[i]) dp[i][j] = (count[i-1][j] - count[i-1][j - a[i]-1] + mod) % mod;
            else dp[i][j] = count[i-1][j];
        }

        count[i][0] = dp[i][0];
        fori (j, 1, k) count[i][j] = (count[i][j-1] + dp[i][j]) % mod;
    }

    print(dp[n][k])

    return 0;
}