#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;


#define pb push_back
#define ff first
#define ss second
#define INF int(3e9)
#define BIG_INF ll(9e18)
#define SIZE 200001
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define len(v) int((v).size())
#define sqr(x) (x) * (x)
#define cube(x) (x) * (x) * (x)
#define filein freopen("input.txt", "r", stdin)
#define fileout freopen("output.txt", "w", stdout);


ll binpow(ll a, ll b, ll MOD = BIG_INF)
{
    ll res = 1;

    while(b)
    {
        if(b & 1)
            res *= a;
        a *= a;
        b >>= 1;
        a %= MOD;
        res %= MOD;
    }

    return res % MOD;
}

const ll mod = 1e9 + 7;

int T = 1;

ll n, a[SIZE];
ll y = 1000, s = 0;

void solve()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int lst = 0;

    for(int i = 0; i < n; i++)
    {
        lst = i;
        while(i + 1 < n && a[i] <= a[i + 1])
        {
            i++;
        }
        ll cnt = y / a[lst];
//        cout << cnt << ' ';
        y -= cnt * a[lst];
        s += cnt;
        y += s * a[i];
        s = 0;
//        cout << y << ' ';
    }
    cout << y;

    return;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
//    filein;fileout;

//    cin >> T;

    while(T--)
    {
        solve();
    }
    return 0;
}
