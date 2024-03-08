#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
typedef long long ll;
typedef long double ld;
const long long INF = 1e18;
# define len(x) ((int)(x).size())
# define rep(i, n) for(int i=0, i##_len=(n); i<i##_len; ++i)
# define reps(i, n) for(int i=1, i##_len=(n); i<=i##_len; ++i)
# define rrep(i, n) for(int i=((int)(n)-1); i>=0; --i)
# define rreps(i, n) for(int i=((int)(n)); i>0; --i)
# define foreps(i, m, n) for(int i = m;i < n;i++)
# define ALL(x) (x).begin(), (x).end()
# define rall(x) (x).rbegin(), (x).rend()
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    int H, W; cin >> H >> W;
    vector<vector<char>> pic(H, vector<char>(W));
    rep(i, H) {
        rep(j, W) cin >> pic.at(i).at(j);
    }

    rep(i, H) {
        vector<char> pic2(W);
        rep(j, W) {
            pic2.at(j) = pic.at(i).at(j);
            cout << pic.at(i).at(j);
        }
        cout << endl;
        rep(k, W) cout << pic2.at(k);
        cout << endl;
    }
}