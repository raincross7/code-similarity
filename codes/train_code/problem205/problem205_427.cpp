#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <climits>
#include <cstring>

#define rep(i, m, n) for(int i=int(m);i<int(n);i++)
#define all(c) begin(c),end(c)

template<typename T1, typename T2>
inline void chmin(T1 &a, T2 b) { if (a > b) a = b; }

template<typename T1, typename T2>
inline void chmax(T1 &a, T2 b) { if (a < b) a = b; }

typedef long long int ll;
using ll = long long int;
using ull = long long unsigned int;
using Int = long long int;
using namespace std;
#define INF (1 << 30) - 1
#define INFl (ll)5e15
#define DEBUG 0
#define dump(x)  cerr << #x << " = " << (x) << endl
#define MOD 1000000007


//edit
class Solve {
public:
    Int H, W, d;

    void solve() {
        cin >> H >> W >> d;
        vector<vector<char>> col(H + W, vector<char>(H + W));
        for (int i = 0; i < H + W; ++i) {
            for (int j = 0; j < H + W; ++j) {
                string cnv[2] = {"RG", "BY"};

                Int r = (i / d) % 2;
                Int c = (j / d) % 2;
                col[i][j] = cnv[r][c];
            }
        }

        vector<vector<char>> ans(H, vector<char>(W));
        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < W; ++j) {
                ans[i][j] = col[i + j][i - j + W];
                cout << ans[i][j];
            }
            cout << endl;
        }


    }
};


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);

    Solve().solve();


    return 0;
}
