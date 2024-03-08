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

int N;

int main() {
    cin >> N;
    vector<int> A(N), B(N);
    REP(i, N) {
        cin >> A[i];
        B[i] = A[i];
    }
    sort(A.begin(), A.end());
    map<ll, bool> m;
    REP(i, N) {
        if ((i + 1) % 2 == 1)m[A[i]] = 1;
        else m[A[i]] = 0;
    }
    int odd = 0, even = 0;
    REP(i, N) {
        if (m[B[i]] && (i + 1) % 2 == 0)even++;
        if (!m[B[i]] && (i + 1) % 2 == 1)odd++;
    }

    cout << even << endl;

    return 0;
}

