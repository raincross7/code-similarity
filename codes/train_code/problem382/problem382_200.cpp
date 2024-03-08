#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, s, e) for (int i = (int)(s); i < (int)(e); i++)
#define _rep(i, n) for (int i = (int)(n - 1); i >= 0; i--)
#define _REP(i, e, s) for (int i = (int)(e - 1); i >= (int)(s); i--)

#define yes cout << "yes" << endl;
#define Yes cout << "Yes" << endl;
#define YES cout << "YES" << endl;

#define no cout << "no" << endl;
#define No cout << "No" << endl;
#define NO cout << "NO" << endl;

#define AC cout << "AC" << endl;
#define WA cout << "WA" << endl;

#define out(s) cout << s << endl;

#define ll long long
#define ull unsigned long long

const unsigned int BIT_FLAG_0 = (1 << 0);  // 0000 0000 0000 0001
const unsigned int BIT_FLAG_1 = (1 << 1);  // 0000 0000 0000 0010
const unsigned int BIT_FLAG_2 = (1 << 2);  // 0000 0000 0000 0100
const unsigned int BIT_FLAG_3 = (1 << 3);  // 0000 0000 0000 1000
const unsigned int BIT_FLAG_4 = (1 << 4);  // 0000 0000 0001 0000
const unsigned int BIT_FLAG_5 = (1 << 5);  // 0000 0000 0010 0000
const unsigned int BIT_FLAG_6 = (1 << 6);  // 0000 0000 0100 0000
const unsigned int BIT_FLAG_7 = (1 << 7);  // 0000 0000 1000 0000

const double PI = 3.14159265358979323846;

const int dy[4] = {0, 1, 0, -1};
const int dx[4] = {1, 0, -1, 0};

#define H_MAX 500
#define W_MAX 500
#define INF 1e9 + 7

struct UnionFind {
    vector<int> par;

    UnionFind(int N) : par(N) {
        for (int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        par[rx] = ry;
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main() {
    int N, Q;
    cin >> N >> Q;

    UnionFind tree(N);

    rep(i, Q) {
        int t, u, v;
        cin >> t >> u >> v;
        if (t == 0) {
            tree.unite(u, v);
        } else {
            if (tree.same(u, v)) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
}
