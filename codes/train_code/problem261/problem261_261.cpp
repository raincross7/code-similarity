#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define dump(x) cout << x << endl
typedef int64_t Int;

using namespace std;
using Graph = vector<vector<Int>>;

const double pi = M_PI;
const Int MOD = 1000000007;

int main() {
    int n;
    cin >> n;
    if (n / 100 == n / 10 % 10 && n / 10 % 10 == n % 10) {
        cout << n << endl;
    } else {
        int m = n / 111 + 1;
        cout << m * 100 + m * 10 + m << endl;
    }

    return 0;
}
