#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vl>;
const ll INF = 1LL << 60;
const ll MOD = 1000000007;
template <class T>
bool chmax(T &a, const T &b) {
    return (a < b) ? (a = b, 1) : 0;
}
template <class T>
bool chmin(T &a, const T &b) {
    return (b < a) ? (a = b, 1) : 0;
}
template <class C>
void print(const C &c, std::ostream &os = std::cout) {
    std::copy(std::begin(c), std::end(c), std::ostream_iterator<typename C::value_type>(os, " "));
    os << std::endl;
}

int main() {
    int n, k;
    cin >> n >> k;
    vl a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vl b = a;
    for (int i = 0; i < n; ++i) {
        b[i] = max(b[i], 0LL);
    }
    for (int i = 1; i < n; ++i) {
        b[i] += b[i - 1];
        a[i] += a[i - 1];
    }
    ll ret = 0;
    for (int i = 0; i < n - k + 1; ++i) {
        ll temp = a[i + k - 1];
        temp += b[n - 1] - b[i + k - 1];
        if (i != 0) {
            temp -= a[i - 1];
            temp += b[i - 1];
        }
        chmax(ret, temp);
        temp = b[n - 1] - b[i + k - 1];
        if (i != 0) {
            temp += b[i - 1];
        }
        chmax(ret, temp);
    }
    cout << ret << "\n";
    return 0;
}