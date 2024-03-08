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


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    s64 n, m;
    cin >> n >> m;

    vs64 s(n + 1);
    s[0] = 0;
    s64 a;
    rep (i, n)
    {
        cin >> a;
        s[i + 1] = s[i] + a;
    }

    map<s64, s64> cnt;
    rep (i, n + 1)
    {
        ++cnt[s[i] % m];
    }

    s64 ans = 0;
    for (auto a : cnt)
    {
        ans += a.second * (a.second - 1) / 2;
    }

    cout << ans << "\n";
    return 0;
}

