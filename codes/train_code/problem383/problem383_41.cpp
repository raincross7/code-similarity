#include <algorithm>
#include <bitset>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

typedef long long ll;

#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
#define INF 10e12
#define MOD 1000000000 + 7
#define MAX 51000
#define all(x) (x).begin(), (x).end()
#define MX(x) *max_element(all(x))
#define MN(x) *min_element(all(x))

using namespace std;

int main(void)
{
    int n, m;
    map<string, int> a;
    map<string, int> b;
    cin >> n;
    rep(i, n)
    {
        string tmp;
        cin >> tmp;
        a[tmp]++;
    }
    cin >> m;
    rep(i, m)
    {
        string tmp;
        cin >> tmp;
        b[tmp]++;
    }
    int ans = 0;
    for (auto i : a)
        ans = max(ans, i.second - b[i.first]);
    cout << ans << endl;
}