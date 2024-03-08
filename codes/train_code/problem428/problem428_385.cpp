#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double PI = (acos(-1));
const long long MOD = 1000000007;
long long modpow(long long a, long long n, long long m)
{
    long long ans = 1;
    while (n)
    {
        if (n & 1)
        {
            ans = (ans * a) % m;
        }
        a = (a * a) % m;
        n >>= 1;
    }
    return ans;
}
long long combi(long long n, long long a)
{
    long long ans = 1, ans1 = 1;
    for (long long i = n - a + 1; i <= n; i++)
    {
        ans *= i % MOD;
        ans %= MOD;
    }

    for (long long i = 2; i <= a; i++)
        ans1 = (ans1 * i) % MOD;
    ans1 = modpow(ans1, MOD - 2, MOD);
    return ((ans % MOD) * ans1) % MOD;
}

template <typename T>
bool next_combination(const T first, const T last, int k)
{
    const T subset = first + k;
    // empty container | k = 0 | k == n
    if (first == last || first == subset || last == subset)
    {
        return false;
    }
    T src = subset;
    while (first != src)
    {
        src--;
        if (*src < *(last - 1))
        {
            T dest = subset;
            while (*src >= *dest)
            {
                dest++;
            }
            iter_swap(src, dest);
            rotate(src + 1, dest + 1, last);
            rotate(subset, subset + (last - dest) - 1, last);
            return true;
        }
    }
    // restore
    rotate(first, subset, last);
    return false;
}

void dfs(vector<ll> s, ll mx, ll N, vector<vector<ll>> &arr)
{
    if (s.size() == (size_t)N)
    {
        //cout << s.c_str() << endl;
        arr.push_back(s);
    }
    else
    {
        for (ll c = s.size() > 0 ? 0 : 0; c <= mx; c++)
        {
            s.push_back(c);
            dfs(s, mx, N, arr);
            s.pop_back();
        }
    }

    return;
}

int bfs(int sx, int sy, int gx, int gy, int h, int w, vector<vector<char>> tmp)
{
    int ans[101][101] = {0};
    char c[101][101] = {0};
    queue<pair<int, int>> s;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            c[i][j] = tmp[i][j];
        }
    }

    s.push(make_pair(sx, sy));

    while (s.size() > 0)
    {

        pair<int, int> tmp = s.front();
        s.pop();
        c[tmp.first][tmp.second] = '#';
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                if (tmp.first + i < 1 || tmp.first + i > h)
                {
                    continue;
                }
                if (tmp.second + j < 1 || tmp.second + j > w)
                {
                    continue;
                }
                if (i != 0 && j != 0)
                {
                    continue;
                }
                if (i == 0 && j == 0)
                {
                    continue;
                }
                if (c[tmp.first + i][tmp.second + j] == '#')
                {
                    continue;
                }
                c[tmp.first + i][tmp.second + j] = '#';
                if (ans[tmp.first + i][tmp.second + j] == 0)
                {
                    ans[tmp.first + i][tmp.second + j] = ans[tmp.first][tmp.second] + 1;
                }
                else
                {
                    ans[tmp.first + i][tmp.second + j] = min(ans[tmp.first + i][tmp.second + j], ans[tmp.first][tmp.second] + 1);
                }
                s.push(make_pair(tmp.first + i, tmp.second + j));
            }
        }
    }

    return ans[gy][gx];
}

ll modfactorial(ll a)
{
    if (a == 1)
        return 1;

    return (a % MOD) * (modfactorial(a - 1) % MOD);
}

ll gcd(ll a, ll b)
{
    if (a % b == 0)
    {
        return (b);
    }
    else
    {
        return (gcd(b, a % b));
    }
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

map<ll, ll> prime_factor(ll n)
{
    map<ll, ll> ret;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            ret[i]++;
            n /= i;
        }
    }
    if (n != 1)
        ret[n] = 1;
    return ret;
}

int main()
{
    string s;
    cin >> s;

    vector<ll> v(26);

    for (ll i = 0; i < 26; i++){
        v[i] = 1;
    }


    if (s.size() == 26)
    {
        if (s == "zyxwvutsrqponmlkjihgfedcba"){
            cout << -1 << endl;
        }
        else{
            ll i = s.size() - 1;

            while (i > 0){
                if(s[i-1] - s[i] < 0){
                    break;
                }
                i--;
            }

            for (ll j = 0; j < i; j++)
            {
                v[s[j] - 'a'] = 0;
            }

            i--;
            if (i == 0)
            {
                s[0]++;
                s = s.substr(0, 1);
            }
            else
            {
                do{
                    s[i]++;
                } while (v[s[i] - 'a'] == 0);
                s = s.substr(0, i + 1);
            }

            cout << s << endl;
        }
    }
    else
    {
        for (ll i = 0; i < s.size(); i++)
        {
            v[s[i] - 'a'] = 0;
        }

        ll i = 0;
        while(v[i] == 0){
            i++;
        }

        string ans = s + (char)('a' + i);
        cout << ans << endl;
    }

    return 0;
}
//cout << std::fixed << std::setprecision(15)
