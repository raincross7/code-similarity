#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<cmath>
#include<iomanip>
#include<set>
#include<numeric>
#include<sstream>
#include<random>
#include<cassert>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
using pii = pair<int, int>;
const int inf = 1e9 + 7;
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
int dx[] = {1, -1, 0, 0, -1, 1, 1, -1};
#define ceil(a, b) a / b + !!(a % b)

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s = "qwertasdfgzxcvb";
    string t = "yuiophjklnm";
    string u;
    while (cin >> u && u != "#") {
        int flg = -1;
        
        int bflg = -1;
        int c = 0;
        rep(i, u.size()) {
            rep(j, s.size()) if (u[i] == s[j]) flg = 0;
            rep(j, t.size()) if (u[i] == t[j]) flg = 1;
            if (flg != bflg) c++;
            bflg = flg;
        }
        cout << c - 1 << endl;
    }
}



