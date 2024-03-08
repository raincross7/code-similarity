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
    int n, k;
    cin >> n >> k;
    if (k == 1) {
        cout << 0 << endl;
    }
    else if (n > k) {
        cout << n - k << endl;
    }
    else if (n % k == 0) {
        cout << 0 << endl;
    }
    else {
        cout << 1 << endl;
    }
    return 0;
}
