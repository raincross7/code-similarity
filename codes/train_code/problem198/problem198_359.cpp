#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int main() {
    string o, e;
    cin >> o >> e;

    rep(i, o.size()) {
        cout << o[i];
        if (i < e.size()) cout << e[i];
    }
    cout << endl;

    return 0;
}
