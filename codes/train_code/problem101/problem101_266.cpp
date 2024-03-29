#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <utility>
#include <iostream>
#include <functional>
#include <bitset>
#include <algorithm>
#include <vector>
#include <forward_list>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <tuple>
#include <numeric>
#define rep(i, s, g) for ((i) = (s); (i) < (g); ++(i))
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll MOD = 1e9 + 7;
const ll INF = (1ll << 60);

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (auto &&i : a)
    {
        cin >> i;
    }

    ll money = 1000;
    ll stock = 0;

    for (int i = 0; i < n; i++)
    {
        if (stock)
        {
            money += a[i] * stock;
            stock = 0;
        }

        if (i == n - 1)
        {
            break;
        }

        if (a[i] < a[i + 1])
        {
            stock += money / a[i];
            money %= a[i];
        }
    }

    cout << money << endl;
}
