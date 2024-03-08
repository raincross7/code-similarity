/* Simplicity and Goodness */

#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace __gnu_pbds;
using namespace std;
// typedef tree<int, null_type, less<int>, rb_tree_tag,
//             tree_order_statistics_node_update> indexed_set;

void my_dbg() { cout << endl; }
template<typename Arg, typename... Args> void my_dbg(Arg A, Args... B)
{ cout << ' ' << A; my_dbg(B...); }
#define dbg(...)  cout << "(" << #__VA_ARGS__ << "):", my_dbg(__VA_ARGS__)

#define scn(n) scanf("%d", &n)
#define lscn(n) scanf("%lld", &n)
#define pri(n) printf("%d ", (int)(n))
#define prin(n) printf("%d\n", (int)(n))
#define lpri(n) printf("%lld ", n)
#define lprin(n) printf("%lld\n", n)
#define rep(i,a,b) for(int i=(int)(a); i<(int)(b); i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second

using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;

const int inf = INT_MAX;
const int ninf = INT_MIN;
const int mod = 1e9+7;
const int N = 2e5+2;


void solve()
{
    int n, k;
    scn(n); scn(k);

    string s;
    cin >> s;

    s += "#";

    int cnt = 0;
    char prv = '1';

    vi util;

    rep(i, 0, s.size()) {
        if(s[i] != prv) {
            util.pb(cnt);
            cnt = 1;
        } else {
            cnt ++;
        }
        prv = s[i];
    }

    if(s[n-2] == '0')
        util.pb(0);

    int ans = 0, sum = 0;

    rep(i, 0, util.size()) {
        sum += util[i];

        if(i - (k * 2 + 1) >= 0) 
            sum -= util[i - (k * 2 + 1)];

        if(i % 2 == 0)
            ans = max(ans, sum);
    }

    prin(ans);
}

int main()
{
    int t = 1;
    // scn(t);
    
    while(t --) {
        solve();
    }
    return 0;
}