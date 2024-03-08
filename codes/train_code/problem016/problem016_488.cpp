#include <bits/stdc++.h>
using namespace std;
struct Fast {
    Fast() {
        cin.tie(0);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(20);
    }
} fast;
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
long long mod = 1000000007;
#define REP(i, n) for (long long i = 0; i < (n); i++)
#define rep(i, a, n) for (long long i = a; i < (n); i++)
long long modpow(long long m, long long n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        long long t = modpow(m, n / 2);
        return (t * t) % mod;
    } else {
        return (modpow(m, n - 1) * m) % mod;
    }
}
bool bitcheck(ll x, ll y) { return (x >> y) & 1; }

template <typename A, size_t N, typename T> void Fill(A (&array)[N], const T& val) {
    std::fill((T*)array, (T*)(array + N), val);
}
// long long mod = 998244353;
long long power(long long m, long long n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        long long t = modpow(m, n / 2);
        return t * t;
    } else {
        return modpow(m, n - 1) * m;
    }
}

long long moddiv(long long a, long long b) { return (a * modpow(b, mod - 2)) % mod; }

const ll INF = 1LL << 60;

void print_binary(long long a) {
    for (int i = 31; i >= 0; i--) {
        cout << (a >> i & 1);
    }
    cout << endl;
}

ll nCkmod(ll n, ll k) {
    ll denomi = 1;
    for (int i = n; i > n - k; i--) {
        denomi *= i;
        denomi %= mod;
    }
    ll numera = 1;
    REP(i, k) {
        numera *= (i + 1);
        numera %= mod;
    }
    return moddiv(denomi, numera);
}
map<ll, ll> cnt;
void primeFactors(long long n) {
    while (n % 2 == 0) {
        cnt[2]++;
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            cnt[i]++;
            n = n / i;
        }
    }
    if (n > 2) {
        cnt[n]++;
    }
}
int main() {
    ll n;  ////
    cin >> n;
    vector<ll> as(n);
    REP(i, n) { cin >> as[i]; }
    ll ans = 0;
    REP(i, 61) {
        vector<ll> rui1(n + 1);
        vector<ll> rui0(n + 1);
        REP(j, n) {
            if (bitcheck(as[j], i)) {
                rui0[j + 1] += rui0[j] + (1LL << i);
                rui1[j + 1] += rui1[j];
            } else {
                rui0[j + 1] += rui0[j];
                rui1[j + 1] += rui1[j] + (1LL << i);
            }
            rui0[j + 1] %= mod;
            rui1[j + 1] %= mod;
        }
        REP(j, n) {
            if (bitcheck(as[j], i)) {
                ans += rui1[n] - rui1[j + 1] + mod;
            } else {
                ans += rui0[n] - rui0[j + 1] + mod;
            }
            ans %= mod;
        }
    }
    cout << ans << endl;
}