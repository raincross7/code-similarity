#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a;
    cin >> n >> a;
    cout << (n % 500 <= a ? "Yes" : "No");

    return 0;
}
