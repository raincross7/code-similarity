/*      ###########################
        #  Author : Pranay Garg   #
        #  College : SGSITS       #
        ###########################
*/
# include   <bits/stdc++.h>
# include   <ext/pb_ds/assoc_container.hpp>
# define    ll                  long long int
# define    ull                 unsigned long long int
# define    ironman             ios_base::sync_with_stdio(false);cin.tie(NULL);
# define    MOD                 1000000007
# define    MODT                998244353
# define    endl                '\n'
# define    ar                  array
# define    INF                 1000000000000000000ll + 239
# define    PI                  3.14159265358979323846
# define    mp                  make_pair
# define    fi                  first
# define    se                  second
# define    vi                  std::vector<ll>
# define    vii(a)              std::vector<a>
# define    pb                  push_back
# define    pi                  pair<ll,ll>
# define    fo(i,a,b)           for(ll i=a;i<b;i++)
# define    all(a)              a.begin(), a.end()
# define    allr(a)             a.rbegin(), a.rend()
# define    alla(a,n)           a,a+n
# define    debug1(x)           cout<<#x<<" "<<x<<endl;
# define    debug2(x,y)         cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<endl;
# define    debug3(x,y,z)       cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<endl;
# define    debug4(x,y,z,w)     cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<" "<<#w <<" "<<w<<endl;
# define    debug5(x,y,z,w,v)   cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<" "<<#w <<" "<<w<<" "<<#v <<" "<<v<<endl;
# define    debug6(x,y,z,w,a,b) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<" "<<#w <<" "<<w<<" "<<#a<<" "<<a<<" "<<#b<<" "<<b<<endl;

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;

template<class T> T max(T a, T b, T c) {
    return max(a, max(b, c));
}
template<class T> T min(T a, T b, T c) {
    return min(a, min(b, c));
}

void fastio()
{
    ironman
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

bool prime[10000005];
void SieveOfEratosthenes(ll n)//O(nloglogn)
{
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
bool isPrime(ll n)//O(sqrt(n))
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
std::vector<ll> generatePrimeFactors(ll n)
{
    std::vector<ll> prime;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            prime.pb(i);
            while (n % i == 0)
                n = n / i;
        }
    }
    if (n != 1)
        prime.pb(n);
    return prime;
}
std::vector<ll> generateFactors(ll n)
{
    std::vector<ll> fact;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            fact.pb(i);
            if (n / i != i)
                fact.pb(n / i);
            //24 - 1,2,3,4,6,8,12
        }
    }
//    fact.pb(1);
    if (n != 1)
        fact.pb(n);
    sort(fact.begin(), fact.end());
    return fact;
}

ll extendedGCD(ll a, ll b, ll &x, ll &y)
{
    //produces correct results for negative integers as well
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }
    ll x1, y1, d;
    d = extendedGCD(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}
ll gcd(ll a, ll b) //O(log min(a,b))
{
    /*
    recursive implementation below
    if(!b) return a;
    return gcd(b,a%b);
    */

    //non-recursive implementation below
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll multiply(ll a, ll b, ll m);
ll singlemod(ll a, ll m);
ll modpow(ll x, ll n, ll m) //O(logn)// used for calculating (x^n)%m
{
    if (n == 0)
        return 1;
    ll res = 1;
    while (n)
    {
        if (n % 2)
            res = multiply(res, x, m);
        x = multiply(x, x, m);
        n = n >> 1;
    }
    return singlemod(res, m);
}
ll fastpow(ll x, ll n)
{
    if (n == 0)
        return 1;
    ll res = 1;
    while (n)
    {
        if (n % 2)
            res = res * x;
        x = x * x;
        n = n >> 1;
    }
    return res;
}
ll modinverse(ll x, ll m) //O(logn)
{
    return modpow(x, m - 2, m);
}
ll add(ll a, ll b, ll m)
{
    return (((a % m) + (b % m)) % m);
}
ll substract(ll a, ll b, ll m)
{
//    if (a < b)
//        swap(a, b);
    return (((a % m) - (b % m) + m) % m);
}
ll multiply(ll a, ll b, ll m)
{
    // if (a > b) swap(a, b);
    // ll ans = 0;
    // while (a)
    // {
    //     if (a % 2)
    //         ans = add(ans, b, m);
    //     b = add(b, b, m);
    //     a = a >> 1;
    // }
    // return (ans % m);
    return (((a % m) * (b % m)) % m);
}
ll divide(ll a, ll b, ll m)
{
    ll temp = modinverse(b, m);
    return multiply(a, temp, m);
}
ll singlemod(ll a, ll m)
{
    return (((a % m) + m) % m);
}
ll eulerstotientfunction(ll n)//O(sqrt(n))
{
    ll ans = n;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n = n / i;
            ans -= ans / i;
        }
    }
    if (n > 1)
        ans -= ans / n;
    return ans;
}

ll ncr(ll n, ll k, ll m)
{
    if (k > n) return 0;
    if (m == 0)
    {
        ll res = 1;
        k = min(k, n - k);
        for (ll i = 1; i <= k; i++)
        {
            res *= (n - i + 1);
            res /= i;
        }
        return res;
    }
    else
    {
        ll res = 1;
        k = min(k, n - k);
        for (ll i = 1; i <= k; i++)
        {
            res = multiply(res, n - i + 1, m);
            res = divide(res, i, m);
        }
        return singlemod(res, m);
    }
}
ll kadaneAlgo(const std::vector<ll> &arr)
{
    ll size = arr.size();
    ll currmax = arr[0], maxsofar = arr[0];
    for (ll i = 1; i < size; i++)
    {
        //debug2(currmax,maxsofar);
        currmax = max(arr[i], currmax + arr[i]);
        maxsofar = max(maxsofar, currmax);
    }
    return maxsofar;
}
ll getDigitSum(ll n)
{
    ll co = 0;
    while (n > 0)
    {
        co += n % 10;
        n = n / 10;
    }
    return co;
}

template<class T>
void printVector(const std::vector<T> arr)
{
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}
template<class T>
void printArray(T arr[], ll n)
{
    for (ll i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
//const int p1 = 13331,m1 = 1e9+9,p2 = 7919, m2 = 1e9+9;
//const int p1 = 97266353,m1 = 972663749,p2 = 97336357, m2 = 1000000007;
//const int p1 = 31 ,m1 = 1e9+7;

//grid cells
//D U R L
//ll dx[] = {1, -1, 0, 0};
//ll dy[] = {0, 0, 1, -1};
// bool isSafe(ll x, ll y, ll n, ll m)
// {
//     return (x >= 0 && x < n && y >= 0 && y < m);
// }


//---------------TEMPLATE ABOVE--------------//
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vi row(n, 0);
    vi col(m, 0);
    set<pi> st;
    for (ll i = 0; i < k; i++)
    {
        ll x, y;
        cin >> x >> y;
        x--; y--;
        st.insert({x, y});
        row[x]++;
        col[y]++;
    }

    ll ans = 0;
    ll x = max_element(all(row)) - row.begin();
    ll y = max_element(all(col)) - col.begin();
    vi a, b;
    for (ll i = 0; i < n; i++)
    {
        if (row[i] == row[x])
            a.pb(i);
    }
    for (ll i = 0; i < m; i++)
    {
        if (col[i] == col[y])
            b.pb(i);
    }

    ll cnt = a.size() * b.size();
    ll temp = 0;
    for (auto i : st)
    {
        if (row[i.fi] == row[x] && col[i.se] == col[y])
            temp++;
    }
    if (temp >= cnt)
        cout << row[x] + col[y] - 1 << endl;
    else
        cout << row[x] + col[y] << endl;
}
int main()
{
    //fastio();
    ll t = 1;
//    cin >> t;
    ll cases = t;
    while (t--)
    {
        // cout << "Case #" << cases-t << ": ";
        solve();
    }
}

