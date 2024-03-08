/*
I am the fire that burns your skin
Soy el fuego que arde tu piel

I am the water that kills your thirst
Soy el agua que mata tu sed

The castle, the tower, I am
El castillo, la torre, yo soy

The sword that keeps the flow
La espada que guarda el caudal

You the air that I breathe
Tú el aire que respiro yo

And the moonlight on the sea
Y la luz de la luna en el mar

The throat that I want to wet
La garganta que ansio mojar

I fear drowning in love
Que temo ahogar de amor

And which desires will you give me?
¿Y cuáles deseos me vas a dar?

You say, 'my treasure just look at it'
Dices tú, 'mi tesoro basta con mirarlo'

And yours will be
Y tuyo será

And yours will be
Y tuyo será
*/
#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using dijkstra = priority_queue<T, vector<T>, greater<T>>;

typedef long long ll;
typedef unsigned long long ull;
#define fbo find_by_order  // k th index
#define ook order_of_key   // strictly smaller than k
#define PI acos(-1.0)
#define inf 0x3f3f3f3f
#define lead_zero(x) __builtin_clzll(x)
#define trail_zero(x) __builtin_ctzll(x)
#define total_1s(x) __builtin_popcountll(x)
#define first_1(x) __builtin_ffsll(x)
#define log2_(x) __builtin_clz(1) - __builtin_clz(x)
#define isLeap(x) ((x % 400 == 0) || (x % 100 ? x % 4 == 0 : false))
#define QUERY           \
    int test;           \
    scanf("%d", &test); \
    for (int _T = 1; _T <= test; _T++)
#define FAST ios_base::sync_with_stdio(0), cin.tie(0)
#define all(v) v.begin(), v.end()
#define reunique(v) v.resize(std::unique(all(v)) - v.begin())
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pul pair<ull, ull>
#define ff first
#define ss second
#define MERGE(v1, v2, v) merge(all(v1), all(v2), back_inserter(v))
#define MP make_pair
#define EB emplace_back
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define in_range(v, r, l) upper_bound(all(v), r) - lower_bound(all(v), l)
#define LCM(a, b) (a / __gcd(a, b)) * b;

ll rdn(int y, int m, int d) {
    /* Rata Die day one is 0001-01-01 */
    if (m < 3)
        y--, m += 12;
    return 365 * y + y / 4 - y / 100 + y / 400 + (153 * m - 457) / 5 + d - 306;
}
/* Direction arrays */
/*int dx[] = {1,-1,0,0}, dy[] = {0,0,1,-1};                             */  // 4Direction
/*int dx[] = {1,-1,0,0,1,1,-1,-1}, dy[] = {0,0,1,-1,1,-1,1,-1};         */  // 8Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1};     */  // KnightDirection
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1};                */  // HexagonalDirection
/* int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; */
mt19937 R(chrono::system_clock().now().time_since_epoch().count());

int main() {
    FAST;
    int n, p;
    string s;
    cin >> n >> p >> s;

    ll ans = 0;
    if (p == 2 || p == 5) {
        for (int i = 0; i < n; i++) {
            if ((s[i] - '0') % p == 0) {
                ans = (ans + (i + 1));
            }
        }
    } else {
        reverse(all(s));
        vector<int> cnt(p + 2);
        vector<int> cum(n + 2);
        ll x = 1;
        for (int i = 0; i < n; i++) {
            int now = s[i] - '0';
            cum[i] = x * now;
            cum[i] %= p;
            x = x * 10;
            x %= p;
        }
        cnt[0] = 1;
        cnt[cum[0]]++;
        for (int i = 1; i < n; i++) {
            cum[i] += cum[i - 1];
            cum[i] %= p;
            cnt[cum[i]]++;
        }
        for(int i=0;i<p;i++){
            ans = (ans+((1LL*cnt[i]*(cnt[i]-1))/2LL));
        }
    }
    cout << ans << "\n";
}
