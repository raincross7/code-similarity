/*
 * Author:  heyuhhh
 * Created Time:  2020/5/6 11:30:33
 */
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <iomanip>
#include <assert.h>
#define MP make_pair
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define INF 0x3f3f3f3f
#define Local
#ifdef Local
  #define dbg(args...) do { cout << #args << " -> "; err(args); } while (0)
  void err() { std::cout << std::endl; }
  template<typename T, typename...Args>
  void err(T a, Args...args) { std::cout << a << ' '; err(args...); }
  template <template<typename...> class T, typename t, typename... A> 
  void err(const T <t> &arg, const A&... args) {
  for (auto &v : arg) std::cout << v << ' '; err(args...); }
#else
  #define dbg(...)
#endif
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
//head
const int N = 2e5 + 5;

int n, m;

void run() {
    cin >> n >> m;
    if (n & 1) {
        int st = 1, ed = n;
        for (int i = 1; i <= m; i++) {
            cout << st << ' ' << ed << '\n';
            ++st, --ed;   
        }
    } else {
        int st = 1, ed = n, first = 1;
        for (int i = 1; i <= m; i++) {
            if (first && ed - st - 1 <= (n - 2) / 2) {
                --ed; first = 0;
            }
            cout << st << ' ' << ed << '\n';
            ++st, --ed;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cout << fixed << setprecision(20);
    run();
    return 0;
}