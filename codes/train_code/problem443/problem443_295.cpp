#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());

    for(int i = 0; i < n - 1; ++i)
    {
        if(a[i] == a[i + 1])
        {
            cout << "NO" << "\n";
            return 0;
        }
    }

    cout << "YES" << "\n";
    return 0;
}