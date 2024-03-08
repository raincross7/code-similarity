#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <map>
#include <queue>

static const int MOD = 1000000007;
using ll = long long;
using u32 = unsigned;
using namespace std;

template<class T>
constexpr T INF = ::numeric_limits<T>::max() / 32 * 15 + 208;

int main() {
    ll x, y;
    cin >> x >> y;
    cout << (llabs(x-y) > 1 ? "Alice\n" : "Brown\n");
    return 0;
}
