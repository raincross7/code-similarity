#include <iostream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <bitset>

static const int MOD = 1000000007;
using ll = int64_t;
using u32 = uint32_t;
using namespace std;

template<class T> constexpr T INF = ::numeric_limits<T>::max()/32*15+208;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }
    if(a == b){
        puts("0");
    }else {
        ll ans1 = 0, ans2 = INF<int>;
        for (int i = 0; i < n; ++i) {
            if(a[i] > b[i]) ans2 = min(ans2, b[i]);
            ans1 += a[i];
        }
        cout << ans1 -ans2 << "\n";
    }
    return 0;
}
