#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;
    cout << (a > x || a + b < x ? "NO" : "YES") << endl;
}
