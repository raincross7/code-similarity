#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define ALL(vec) vec.begin(), vec.end()
#define rALL(vec) vec.rbegin(), vec.rend()
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    rep(i, 12) {
        cout << s[i];
        if (i == 3) cout << " ";
    }
    cout << endl;
    return 0;
}