#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int f(int n)
{
    return ((n % 2 == 0) ? n / 2 : 3 * n + 1);
}

int main()
{
    int n, m;
    cin >> n >> m;

    cout << n+m/2 << '\n';
    return 0;
}
