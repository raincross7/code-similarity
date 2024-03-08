#define _USE_MATH_DEFINES
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <clocale>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define FOR(i, s, n) for(int i = (s), i##_len=(n); i < i##_len; ++i)
#define FORS(i, s, n) for(int i = (s), i##_len=(n); i <= i##_len; ++i)
#define VFOR(i, s, n) for(int i = (s); i < (n); ++i)
#define VFORS(i, s, n) for(int i = (s); i <= (n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define REPS(i, n) FORS(i, 0, n)
#define VREP(i, n) VFOR(i, 0, n)
#define VREPS(i, n) VFORS(i, 0, n)
#define RFOR(i, s, n) for(int i = (s), i##_len=(n); i >= i##_len; --i)
#define RFORS(i, s, n) for(int i = (s), i##_len=(n); i > i##_len; --i)
#define RREP(i, n) RFOR(i, n, 0)
#define RREPS(i, n) RFORS(i, n, 0)
#define ALL(v) (v).begin(), (v).end()
#define SORT(v) sort(ALL(v))
#define RSORT(v) sort(ALL(v), greater<decltype(v[0])>())
#define SZ(x) ((int)(x).size())
#define REV(x) reverse(ALL(x))
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define MT make_tuple
#define BIT(n) (1LL<<(n))
#define UNIQUE(v) v.erase(unique(ALL(v)), v.end())

using ld = long double;
using ll = long long;
using ui = unsigned int;
using ull = unsigned long long;
using Pi_i = pair<int, int>;
using Pll_ll = pair<ll, ll>;
using VB = vector<bool>;
using VC = vector<char>;
using VD = vector<double>;
using VI = vector<int>;
using VLL = vector<ll>;
using VS = vector<string>;
using VSH = vector<short>;
using VULL = vector<ull>;

const int MOD = 1000000007;
const int INF = 1000000000;
const int NIL = -1;
const double EPS = 1E-10;

template<class T, class S>
bool chmax(T &a, const S &b){
    if(a < b){
        a = b; return true;
    }
    return false;
}
template<class T, class S>
bool chmin(T &a, const S &b){
    if(b < a){
        a = b; return true;
    }
    return false;
}


int main(){
    int X, Y, Z, K; cin >> X >> Y >> Z >> K;
    VLL A(X), B(Y), C(Z);
    REP(i, X) cin >> A[i];
    REP(i, Y) cin >> B[i];
    REP(i, Z) cin >> C[i];
    RSORT(A); RSORT(B); RSORT(C);
    using fourtype = pair<ll, pair<int, Pi_i>>;
    priority_queue<fourtype> que;
    vector<vector<VB>> pushed(X, vector<VB>(Y, VB(Z, false)));
    que.push({A[0]+B[0]+C[0], {0, {0, 0}}});
    pushed[0][0][0] = true;
    REP(a, K){
        fourtype e(que.top());
        que.pop();
        cout << e.first << "\n";
        int i(e.second.first), j(e.second.second.first), k(e.second.second.second);
        if((i+1<X) && !pushed[i+1][j][k]){
            que.push({A[i+1]+B[j]+C[k], {i+1, {j, k}}});
            pushed[i+1][j][k] = true;
        }
        if((j+1<Y) && !pushed[i][j+1][k]){
            que.push({A[i]+B[j+1]+C[k], {i, {j+1, k}}});
            pushed[i][j+1][k] = true;
        }
        if((k+1<Z) && !pushed[i][j][k+1]){
            que.push({A[i]+B[j]+C[k+1], {i, {j, k+1}}});
            pushed[i][j][k+1] = true;
        }
    }
    return 0;
}
