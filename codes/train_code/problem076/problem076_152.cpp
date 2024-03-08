#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < (n); i++)
#define RREP(i, s, n) for (int i = s; i < (n); i++)
#define ALL(a) a.begin(), a.end()
#define RALL(a) a.rbegin(), a.rend()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;
using ll = long long;
typedef pair<int, int> pint;
typedef pair<ll, ll> pll;
const ll MOD = 1000000007;
const ll INF = MOD * MOD;
const int inf = (1<<29);

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> H(n);
    REP(i, n) cin >> H[i];

    vector<vector<int>> pass(n);
    vector<int> A(m), B(m);
    REP(i, m) {
        cin >> A[i] >> B[i];
        pass[A[i]-1].push_back(B[i]-1);
        pass[B[i]-1].push_back(A[i]-1);
    }

    REP(i, n) {
        REP(j, pass[i].size()) {
            cerr << pass[i][j] << " ";
        }
        cerr << endl;
    }

    int res = 0;

    for(int i = 0; i < n; i++) {
        bool can = 1;

        for(int j = 0; j < pass[i].size(); j++) {
            if (H[i] <= H[pass[i][j]]) can = 0;
        }

        if (can) res++;
    }


    cout << res << endl;
    return 0;
}