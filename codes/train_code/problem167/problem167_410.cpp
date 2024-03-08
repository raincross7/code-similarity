#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = int(a); i < int(b); ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
#define all(x) (x).begin(), (x).end()
template <typename T> bool chmax(T &a, const T &b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <typename T> bool chmin(T &a, const T &b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}
const long long INFLL = 1LL << 60;
const long long MOD = 1e9 + 7;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<char>> A(N, vector<char>(N, 0));
    vector<vector<char>> B(M, vector<char>(M, 0));
    rep(i, N) rep(j, N) cin >> A[i][j];
    rep(i, M) rep(j, M) cin >> B[i][j];

    bool inc = 0;
    rep(i, N - M + 1) {
        rep(j, N - M + 1) {
            if(inc) break;
            bool tmp = 0;
            rep(k, M) {
                rep(l, M) {
                    if(A[i + k][j + l] != B[k][l]) {
                        tmp = 1;
                        break;
                    }
                }
            }
            if(!tmp) inc = 1;
        }
    }
    cout << (inc ? "Yes" : "No") << endl;
}