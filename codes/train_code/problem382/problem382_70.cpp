#line 1 "test/atcoder/practive2-a.cpp"
// @title AtCoder Libraryのサンプル
// @see https://atcoder.jp/contests/practice2/tasks/practice2_a

#include <iostream>
#include <atcoder/dsu>

using namespace std;
using namespace atcoder;

int main() {
    int n, q; cin >> n >> q;
    dsu d(n);
    for (int i = 0; i < q; ++i) {
        int t, u, v; cin >> t >> u >> v;
        if (t == 0) { 
            d.merge(u, v);
        }
        else {
            cout << d.same(u, v) << endl;
        }
    }
}
