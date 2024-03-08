#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define SORT(v) sort((v).begin(), (v).end())
#define RSORT(v) sort((v).rbegin(), (v).rend())
const ll MOD = 1000000007;
const int nmax = 8;
bool graph[nmax][nmax];
const int INF = 1e9;
vector<vector<ll>> dist = vector<vector<ll>>(nmax, vector<ll>(nmax, INF));
void warshall_floyd(ll n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            for (size_t k = 0; k < n; k++)
            {
                dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
            }
        }
    }
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    ll g = gcd(a, b);
    return a / g * b;
}

ll mulMod(ll a, ll b)
{
    return (((a % MOD) * (b % MOD)) % MOD);
}

ll powMod(ll a, ll p)
{
    if (p == 0)
    {
        return 1;
    }
    else if (p % 2 == 0)
    {
        ll half = powMod(a, p / 2);
        return mulMod(half, half);
    }
    else
    {
        return mulMod(powMod(a, p - 1), a);
    }
}

void solve(long long N)
{
    queue<int> a;
    int sum = 0;
    if (N != 1)
    {

        for (int i = 1; i <= N; i++)
        {
            sum += i;
            a.push(i);
            if (sum - i < N && N <= sum)
            {
                break;
            }
        }

        while (!a.empty())
        {
            int pop = a.front();
            a.pop();
            if (pop != (sum - N))
            {
                cout << pop << endl;
            }
        }
    }else{
        cout << 1 << endl;
    }
}

int main()
{
    long long N;
    scanf("%lld", &N);
    solve(N);
    return 0;
}
