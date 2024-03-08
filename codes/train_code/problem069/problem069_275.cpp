#include <cstdio>
#include <cstring>
#include <cmath>
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
#define rep(i, s, g) for ((i) = (s); (i) < (g); ++(i))
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll MOD = 1e9 + 7;
const ll INF = (1ll << 60);

int main(void)
{
    char b;

    cin >> b;

    if (b == 'A')
    {
        cout << 'T';
    }
    else if (b == 'T')
    {
        cout << 'A';
    }
    else if (b == 'G')
    {
        cout << 'C';
    }
    else
    {
        cout << 'G';
    }
}