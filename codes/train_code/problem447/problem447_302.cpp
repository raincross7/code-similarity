#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (n); ++i)
double const PI = 3.1415926535897932384626433;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (c - (a - b) <= 0)
        cout << 0 << endl;
    else
        cout << c - (a - b) << endl;

    return 0;
}