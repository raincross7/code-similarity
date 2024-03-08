#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define FOR(i, m, n) for (int i = (m); i < (n); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, (n) + 1)
#define ALL(c) (c).begin(), (c).end()
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}
const int MOD = 1000000007;
const int INF = 1000000001;

int main() {
    int n;
    cin >> n;

    ll a;
    cin >> a;
    ll c = a - 1;
    ll m = 2;
    REP(i, n - 1) {
        cin >> a;
        if (a > m) {
            c += (a - 1) / m;
        } else if (a == m) {
            m++;
        }
    }

    cout << c << endl;
}
