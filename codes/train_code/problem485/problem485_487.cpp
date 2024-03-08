// 基本テンプレート
 
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
using namespace std;
 
#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)
#define debug(...) fprintf(stderr, __VA_ARGS__)
#define int long long int
 
template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}
 
typedef pair<int, int> pii;
typedef long long ll;
 
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
const ll INF = 1001001001001001LL;
const ll MOD = 1000000007LL;

int memo[2010][2010];

int solve(int x, int y) {
    int &val = memo[x][y];
    if(~val) return val;

    bool flag = false;
    for(int i=1; 2*i<=x; i++) {
        int nx = x - 2*i, ny = y + i;
        flag |= (!solve(nx, ny));
    }

    for(int i=1; 2*i<=y; i++) {
        int ny = y - 2*i, nx = x + i;
        flag |= (!solve(nx, ny));
    }
    return val = flag;
}
 
signed main() {
    /*
    for(int X=0; X<=20; X++) {
        for(int Y=0; Y<=20; Y++) {
            memset(memo, -1, sizeof(memo));
            int ans = solve(X, Y);

            printf("%lld ", ans);
        }
        cout << endl;
    }
    */

    int X, Y; scanf("%lld%lld", &X, &Y);
    cout << (abs(X - Y) <= 1 ? "Brown" : "Alice") << endl;
    return 0;
}