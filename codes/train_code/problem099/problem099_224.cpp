#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
#define REP(i, n)  for(int i = 0; i < n; ++i)
#define FOR(i, t, n)  for(ll i = t; i <= (ll)n; ++i)
struct edge {
    int from, to;
    ll cost;
};


class Eratosthenes {
public:
    vector<bool> prime;

    Eratosthenes(int size) {
        prime.resize(size + 1, 1);
        prime[0] = 0;
        prime[1] = 0;
        FOR(i, 2, size) {
            if (prime[i]) {
                for (int j = 2 * i; j <= size; j += i) {
                    prime[j] = 0;
                }
            }
        }
    }

};


class Combination {
    vector<ll> fac; //n!(mod M)
    vector<ll> ifac; //k!^{M-2} (mod M)
public:
    Combination(ll size) {
        fac.resize(size);
        ifac.resize(size);
        fac[0] = 1;
        ifac[0] = 1;
        for (ll i = 0; i < size; i++) {
            fac[i + 1] = fac[i] * (i + 1) % MOD;
            ifac[i + 1] = ifac[i] * mpow(i + 1, MOD - 2) % MOD;
        }
    }

    ll mpow(ll x, ll n) {
        ll ans = 1;
        while (n != 0) {
            if (n & 1) ans = ans * x % MOD;
            x = x * x % MOD;
            n = n >> 1;
        }
        return ans;
    }

    ll comb(ll a, ll b) {
        if (a == 0 && b == 0)return 1;
        if (a < b || a < 0)return 0;
        ll tmp = ifac[a - b] * ifac[b] % MOD;
        return tmp * fac[a] % MOD;
    }
};


ll GCD(ll a, ll b) {
    if (b == 0)return a;
    return GCD(b, a % b);
}

ll N, x;


int main() {
    cin >> N;
    vector<int> A(N), B(N), p(N);
    REP(i, N)cin >> p[i];
    int c = 28376;

    REP(i, N) {
        A[i] = c * (i + 1);
        B[i] = c * (N - i);
    }

    REP(i, N)A[p[i] - 1] += i;

    REP(i, N)cout << A[i] << " ";
    cout << endl;
    REP(i, N)cout << B[i] << " ";
    cout << endl;
    
    return 0;
}
