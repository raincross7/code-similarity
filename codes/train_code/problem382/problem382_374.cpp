#include <atcoder/dsu>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;

    cin >> n >> q;

    atcoder::dsu t(n);

    while (q--) {
        int op, u, v;
        cin >> op >> u >> v;
        if (op == 0) {
            t.merge(u, v);
        } else {
            cout << (int)t.same(u, v) << "\n";
        }
    }

    return 0;
}