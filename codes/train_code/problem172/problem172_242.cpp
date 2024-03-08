#include <iostream>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <deque>
#include <cmath>

using namespace std;
typedef long long ll;
ll mod = 1e9+7;
//ll mod = 998244353;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i, n) cin >> x[i];
    int ans = 1e8;
    for (int i = 1; i <= 100; ++i) {
        int sum = 0;
        rep(j, n) {
            sum += (x[j] - i) * (x[j] - i); 
        }
        ans = min(ans, sum);
    }
    cout << ans << endl;
    return 0;
}
