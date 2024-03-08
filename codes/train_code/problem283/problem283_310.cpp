#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(NULL);
    int    n;
    string s;
    cin >> s;
    n = s.size() + 1;

    vector<ll> a(n, 0);

    for (int i = 0; i < n - 1; ++i)
        if (s[i] == '<')
            a[i + 1] = max(a[i + 1], a[i] + 1);

    for (int i = n - 2; i >= 0; --i)
        if (s[i] == '>')
            a[i] = max(a[i], a[i + 1] + 1);

    cout << accumulate(a.begin(), a.end(), (ll)0) << endl;

    return 0;
}
