#include <iostream>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <bitset>
#include <queue>
#include <stack>
#include <deque>
#include <complex>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <unordered_map>
#include <unordered_set>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

using std::map;
using std::set;
using std::bitset;
using std::vector;
using std::string;
using std::multimap;
using std::multiset;
using std::deque;
using std::queue;
using std::stack;
using std::pair;
using std::iterator;

using std::sort;
using std::stable_sort;
using std::reverse;
using std::max_element;
using std::min_element;
using std::unique;
using std::ios_base;
using std::swap;
using std::fill;

using std::setprecision;
using std::fixed;

using std::min;
using std::max;

//#define int long long

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<long long> vl;
//typedef string S;

namespace MySpace{

};

#define F(i, n) for (int (i) = 0; (i) != (n); (i)++)
#define fi first
#define se second
#define re return
#define all(x) (x).begin(), (x).end()

inline int nextInt()
{
    int x = 0;
    char c = getchar();
    int mi = (c == '-');
    if (c == '-') c = getchar();
    while ('0' <= c && c <= '9')
    {
        x = 10 * x + c - '0';
        c = getchar();
    }
    if (mi) return x * -1;
    return x;
}

int n, m;
vector<int> graph[550000];
int color[550000];
int BITPARTITE = 1;
vector<int> bp, p;
int SZ = 0;

int dfs(int v, int fl)
{
    color[v] = fl;
    SZ++;
    for (auto u : graph[v])
    {
        if (color[u] == 0) dfs(u, 3 - fl);
        if (color[u] == fl) BITPARTITE = 0;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v, u;
        cin >> v >> u;
        v--, u--;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    ll ans = 0;
    ll cnt = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (graph[i].size() == 0)
        {
            ans += 2 * cnt + 1;
            cnt--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (color[i] == 0 && graph[i].size() != 0)
        {
            BITPARTITE = 1;
            SZ = 0;
            dfs(i, 1);
            if (BITPARTITE) bp.push_back(SZ);
            else p.push_back(SZ);
        }
    }
    cout << ans + 2LL * bp.size() * bp.size() + p.size() * p.size() + 2LL * bp.size() * p.size();
}
