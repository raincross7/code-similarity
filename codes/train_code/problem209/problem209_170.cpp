//
//
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define gc getchar_unlocked
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define deb3(x) cout < < < < x << endl
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define sz(a) int((a).size())
#define inp(arr, n)                                                                                                                                            \
    for (i = 0; i < n; i++)                                                                                                                                    \
        cin >> arr[i];
#define cum(arr, n, cumm)                                                                                                                                      \
    cumm[0] = 0;                                                                                                                                               \
    for (int i = 0; i < n; i++)                                                                                                                                \
        cumm[i + 1] = cumm[i] + arr[i];

#define fori(a, b, c) for (a = b; a <= c; a++)
#define ford(a, b, c) for (a = b; a >= c; a--)
#define fo(i, n) fori(i, 0, n)
#define rep1(i, n) fori(i, 1, n - 1)
#define disp(arr)                                                                                                                                              \
    for (auto i : arr)                                                                                                                                         \
        cout << i << " ";                                                                                                                                      \
    cout << "\n"
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define present(c, x) (c.find(x) != c.end())
#define cpresent(c, x) (find(all(c), x) != c.end())
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)

#define PI 3.1415926535897932384626
#define small 1e-9
#define big5 1000000005
#define big7 1000000007
#define big 1000000

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int mod = 1000000007;

bool isPrime(ll n) {
    if (n % 2 == 0)
        return false;
    for (ll i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

ll SD(ll n) {
    for (ll i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return i;
    }
    return n;
}

ll lcm(ll a, ll b) {
    return (a * b) / __gcd(a, b);
}
const ll maxx = 200001;
bool visited[maxx];
vl graph[maxx];
void dfs(ll curr, ll& cnt, vl& onlyConnectedNodes) {
    visited[curr] = true;
    cnt++;
    onlyConnectedNodes.pb(curr);
    for (auto it : graph[curr]) {
        if (visited[it] == false) {
            dfs(it, cnt, onlyConnectedNodes);
        }
    }
}

void solve() {
    int n, i = 0, j = 0, k = 0, m;
    cin >> n >> m;
    ll count[n] = {0};
    fo(i, m - 1) {
        cin >> j >> k;
        graph[j].pb(k);
        graph[k].pb(j);
    }
    fo(i, n - 1) visited[i] = false;
    fo(i, n - 1) {
        ll cnt = 0;
        vl onlyConnectedNodes;
        if (!visited[i]) {
            cnt = 0;
            dfs(i, cnt, onlyConnectedNodes);
        }
        for (auto& it : onlyConnectedNodes) {
            count[it] = cnt;
        }
    }
    ll result = 0;
    fo(i, n - 1) {
        if (i == 0)
            result = count[i];
        else
            result = max(result, count[i]);
    }

    cout << result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}