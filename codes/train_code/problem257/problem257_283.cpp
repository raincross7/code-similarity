#include <bits/stdc++.h>

#define TYPE(c)   remove_reference_t<decltype(c)>
#define REP(i, n) for(TYPE(n) i = 0; i < n; i++)
#define FOR(v, c) for(TYPE(c.begin()) v = c.begin(); v != c.end(); v++)
#define ALL(c)    c.begin(), c.end()
#define SORT(c)   sort(ALL(c))
#define RSORT(c)  sort(ALL(c), greater<TYPE(c)::value_type>())
#define UNIQUE(c) c.erase(unique(ALL(c)), c.end())

using namespace std;
using ll = long long;

constexpr int MOD  = (int)1e9 + 7;
constexpr int INF  = (int)1e9 + 1;
constexpr ll  LINF = (ll)1e18 + 1;
template<typename T> constexpr bool chmax(T& a, const T& b)
{ if(a < b) { a = b; return true; } else { return false; } }
template<typename T> constexpr bool chmin(T& a, const T& b)
{ if(b < a) { a = b; return true; } else { return false; } }
template<typename S, typename T> ostream& operator<<(ostream &os, const pair<S, T>& p)
{ return os << "(" << p.first << "," << p.second << ")"; }
ostream& operator<<(ostream &os, const string& s)
{ FOR(v, s) os << *v; return os; }
template<typename T> auto operator<<(ostream& os, const T& t)
    -> typename conditional<true, ostream&, decltype(*t.begin())>::type
{ os << "["; FOR(v, t) { if(v != t.begin()) os << ","; os << *v; } os << "]"; return os; }

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int H, W, K;
    std::cin >> H >> W >> K;
    std::vector<string> C(H);
    REP(i, H) {
        std::cin >> C[i];
    }

    int ans = 0;
    for(int wi = 0; wi < (1 << W); wi++) {
        for(int hi = 0; hi < (1 << H); hi++) {
            int cnt = 0;
            REP(i, W) {
                if(wi & (1 << i)) {
                    REP(j, H) {
                        if(hi & (1 << j)) {
                            if(C[j][i] == '#') cnt++;
                        }
                    }
                }
            }
            if(cnt == K) ans++;
        }
    }
    std::cout << ans << std::endl;

    return 0;
}
