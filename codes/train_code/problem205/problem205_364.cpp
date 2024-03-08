#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <iomanip>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstring>
#include <climits>

using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())

typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> V;
typedef map<int, int> M;

constexpr ll INF = 1e18;
constexpr ll MOD = 1e9 + 7;
constexpr double PI = 3.14159265358979323846;
constexpr int di[] = {0, 0, 1, -1};
constexpr int dj[] = {1, -1, 0, 0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int h, w, d;
    cin >> h >> w >> d;

    if (d % 2)
    {
        REP(i, h)
        {
            REP(j, w)
            cout << ((i + j) % 2 ? "R" : "B");
            cout << endl;
        }
        return 0;
    }

    REP(i, h)
    {
        REP(j, w)
        {
            int x = (i + j + h + w) / d;
            int y = (i - j + h + w) / d;

            if (x % 2)
                cout << (y % 2 ? "R" : "B");
            else
                cout << (y % 2 ? "Y" : "G");
        }
        cout << endl;
    }

    return 0;
}