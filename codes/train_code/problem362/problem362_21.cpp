#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max({a, b, c}) - min({a, b, c});
}
