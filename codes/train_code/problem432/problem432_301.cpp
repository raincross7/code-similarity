#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
int INF = 1000000009;
int main()
{
    int x, t;
    cin >> x >> t;
    cout << max(0, x - t) << endl;
}