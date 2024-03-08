#include <iostream>
#include <iomanip>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <cstdio>
#include <utility>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef uint64_t u64;
typedef int64_t s64;
typedef uint32_t u32;
typedef int32_t s32;
typedef vector<s32> vs32;
typedef vector<u32> vu32;
typedef vector<s64> vs64;
typedef vector<u64> vu64;

const double PI=3.14159265358979323846;

#define MAX(x, y) ((x) < (y) ? (y) : (x))
#define MIN(x, y) ((x) > (y) ? (y) : (x))

#define rep(i, N) for(int i = 0; i < N; ++i)

#define CEIL(x, y) (((x) + (y) - 1) / (y))
#define MOD 1000000007ULL

using P = pair<s64, s64>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    s64 n, d, a;
    cin >> n >> d >> a;
    vector< P > xh(n);
    rep (i, n)
    {
        cin >> xh[i].first >> xh[i].second;
    }
    sort(xh.begin(), xh.end());

    s64 ans = 0;
    s64 sum = 0;
    queue<P> q;
    rep (i, n)
    {
        int x = xh[i].first;
        int h = xh[i].second;
        while (!q.empty() && q.front().first < x)
        {
            sum -= q.front().second;
            q.pop();
        }
        h -= sum;
        if (h > 0)
        {
            ans += CEIL(h, a);
            s64 damage = CEIL(h, a) * a;
            sum += damage;
            q.push(P{x + 2 * d, damage});
        }
    }

    cout << ans << "\n";
    return 0;
}

