#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long int lli;
typedef long long int ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<pll> vop;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define REP(i,a,b) for( long long i=a;i<b;i++)
#define REPR(i,a,b) for(int i=a;i>=b;i--)
#define adb(a) for(auto ii:a) cout << ii << " "; cout << endl
#define adp(a) for(auto ii:a) cout << ii.F << " " << ii.S << endl;
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(x) (x).begin(),(x).end()
#define endl "\n"
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define PI 3.14159265358979323846
const ll MAXN = 100007;
const ll p = 1000000007;
#define MAX 10000003
#define INF INTMAX_MAX

struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1> {}(p.first);
        auto hash2 = hash<T2> {}(p.second);
        return hash1 ^ hash2;
    }
};

struct LessSecond
{
    template<typename T, typename U>
    bool operator()(const std::pair<T, U> &x, const std::pair<T, U> &y) const
    {
        return x.second < y.second;
    }
};


ll power(ll a, ll b, ll m) { ll ans = 1; a = a % m; while (b) { if (b & 1) ans = (ans * a) % m; b /= 2; a = (a * a) % m; } return ans; }

ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }

ll modInverse(ll a, ll m) { ll g = __gcd(a, m); return power(a, m - 2, m); }

bool cmp(const pll &a, const pll &b)
{
    if (a.F != b.F) {
        return a.F > b.F;
    }
    else
        return a.S < b.S;
}

int main()
{

    fastIO;
    int test = 1, b = 1;
    //cin >> test;
    while (test--)
    {
        int a, b, c, k;
        cin >> a >> b >> c >> k;
        int x = 0;
        while (b <= a) {
            b *= 2;
            x++;
        }
        while (c <= b) {
            c *= 2;
            x++;
        }
        if (x <= k) cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}