#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <stack>
#include <queue>
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> t(n+1), x(n+1), y(n+1);
    t[0] = 0, x[0] = 0, y[0] = 0;
    for (int i = 1; i <= n; ++i) cin >> t[i] >> x[i] >> y[i];
    for (int i = 0; i < n; ++i)
    {
        int dt = t[i+1] - t[i];
        int dr = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
        if ((dt & 1) == (dr & 1) && dt >= dr)
        {
            continue;
        }
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
