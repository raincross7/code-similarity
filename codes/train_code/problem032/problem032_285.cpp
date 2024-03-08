#include "bits/stdc++.h"
using namespace std;
using ll     = long long;
using pii    = pair<int, int>;
using pll    = pair<ll, ll>;
using vi     = vector<int>;
using vl     = vector<ll>;
using vvi    = vector<vi>;
using vvl    = vector<vl>;
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
    vl a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }
    bitset<30> kk = k;
    vector<bitset<30>> aa(n);
    for (int i = 0; i < n; ++i) {
        aa[i] = a[i];
    }
    ll ret = 0;
    for (int i = 0; i < n; ++i) {
        if ((aa[i] | kk) == kk)
            ret += b[i];
    }
    for (int i = 0; i <= 30; ++i) {
        if (kk[i] == 0)
            continue;
        ll temp       = 0;
        bitset<30> kt = kk;
        kt[i]         = 0;
        for (int j = i - 1; j >= 0; --j) {
            kt[j] = 1;
        }
        for (int j = 0; j < n; ++j) {
            if ((aa[j] | kt) == kt)
                temp += b[j];
        }
        chmax(ret, temp);
    }
    cout << ret << "\n";
    return 0;
}