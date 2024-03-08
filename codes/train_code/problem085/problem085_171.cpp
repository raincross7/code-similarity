#include <bits/stdc++.h>
using namespace std;

#define rp(i, k, n) for (int i = k; i < n; i++)
typedef long long ll;
typedef double ld;

template<class T>inline bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>inline bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const ll INF = 1ll << 60;
const ll MOD = 1e9 + 7ll;
const double PI=3.14159265358979323846;

int n;
vector<int> prime(110);  // prime[i]...n!を素因数分解したときにiで何回割れるか
vector< pair<ll, ll> > prime_factorize(ll n) {  // 素因数分解アルゴリズム
    vector< pair<ll, ll> > res;
    for(ll a = 2; a*a <= n; ++a) {
        if(n % a != 0) continue;
        ll ex = 0;
        while(n % a == 0) {
            ++ex;
            n /= a;
        }
        res.push_back({a, ex});
    }
    if(n != 1) res.push_back({n, 1});
    return res;
}

int main() {
    cin >> n;
    rp(i, 2, n+1) {
        vector<pair<ll, ll>> pf = prime_factorize(i);
        for(auto x: pf) {
            prime.at(x.first) += x.second;
        }
    }
    vector<int> a(5);  // a[0]...n!を2回割れる素数の数 a[1]:4 a[2]:14 a[3]:24 a[4]:74
    vector<int> b = {2, 4, 14, 24, 74};
    rp(i, 2, 105) {
        rp(j, 0, 5) {
            if(prime[i] >= b[j]) a[j] ++;
        }
    }
    // rp(i, 0, 5) {
    //     cout << "a[" << i << "] = " << a[i] << endl;
    // }
    int res = 0;
    res += a[4] + a[3] * (a[0] - 1) + a[2] * (a[1] - 1) + a[1] * (a[1] - 1) * (a[0] - 2) / 2;
    cout << res << endl;
    return 0;
}
