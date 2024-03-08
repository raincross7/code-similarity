#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <bitset>
#include <cmath>

static const int MOD = 1000000007;
using ll = long long;
using u32 = unsigned;
using u64 = unsigned long long;
using namespace std;

template<class T> constexpr T INF = ::numeric_limits<T>::max()/32*15+208;

int main() {
    string s;
    cin >> s;
    int a = 0, ans = 0;
    for (auto &&i : s) {
        if(i == 'R') a++;
        else a = 0;
        ans = max(ans, a);
    }
    cout << ans << "\n";
    return 0;
}