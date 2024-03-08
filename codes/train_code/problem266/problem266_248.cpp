#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <regex>
#include <unordered_map>
#include <vector>

const int mod = 1e9 + 7;
const int kmax = 510000;
const int last_days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

long long fact[kmax], fact_inv[kmax], inv[kmax];

void init_comb()
{
    fact[0] = fact[1] = 1;
    fact_inv[0] = fact_inv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < kmax; i++) {
        fact[i] = fact[i - 1] * i % mod;
        inv[i] = mod - inv[mod % i] * (mod / i) % mod;
        fact_inv[i] = fact_inv[i - 1] * inv[i] % mod;
    }
}

long long comb(int n, int r)
{
    if (n < r) {
        return 0;
    }

    if (n < 0 || r < 0) {
        return 0;
    }

    return fact[n] * (fact_inv[r] * fact_inv[n - r] % mod) % mod;
}

template <typename T, T N>
class UnionFind {
    T parent_[N];
    T rank_[N];
    T size_[N];

public:
    UnionFind();
    T Root(T idx);
    bool IsSame(T x, T y);
    void Unite(T x, T y);
    T GetSize(T idx);
};

template <typename T, T N>
UnionFind<T, N>::UnionFind()
{
    for (T i = 0; i < N; i++) {
        parent_[i] = i;
        rank_[i] = 0;
        size_[i] = 1;
    }
}

template <typename T, T N>
T UnionFind<T, N>::Root(T idx)
{
    return parent_[idx] == idx ? idx : parent_[idx] = Root(parent_[idx]);
}

template <typename T, T N>
bool UnionFind<T, N>::IsSame(T x, T y)
{
    return Root(x) == Root(y);
}

template <typename T, T N>
void UnionFind<T, N>::Unite(T x, T y)
{
    x = Root(x);
    y = Root(y);
    if (x == y) {
        return;
    }

    if (rank_[x] < rank_[y]) {
        parent_[x] = y;
        size_[y] += size_[x];
    } else {
        parent_[y] = x;
        size_[x] += size_[y];
        if (rank_[x] == rank_[y]) {
            rank_[x]++;
        }
    }
}

template <typename T, T N>
T UnionFind<T, N>::GetSize(T idx)
{
    return size_[Root(idx)];
}

long long pow_mod(long long n, long long p, long long m)
{
    if (p == 0) {
        return 1;
    }

    if (p % 2 == 0) {
        long long t = pow_mod(n, p / 2, m);
        return t * t;
    }
    return n * pow_mod(n, p - 1, m);
}

long long nCr_mod(long long n, long long r)
{
    long long x = 1;
    for (long long i = n - r + 1; i <= n; i++) {
        x *= i;
    }

    long long a = 1;
    for (long long i = 1; i <= r; i++) {
        a *= i;
    }

    long long y = pow_mod(a, mod - 2, mod);

    return x * y;
}

long long nCr(long long n, long long r)
{
    long long ans = 1;
    for (long long i = 1; i <= r; i++) {
        ans = ans * (n - i + 1) / i;
    }

    return ans;
}

bool is_prime(long long n)
{
    if (n == 1) {
        return false;
    }

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

bool is_leap(long long y)
{
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

void next_day(long long& y, long long& m, long long& d)
{
    d++;

    if (d > last_days[m - 1] + (m == 2 && is_leap(y) ? 1 : 0)) {
        d = 1;
        m++;
    }

    if (m > 12) {
        y++;
        m = 1;
    }
}

long long fib(long long n)
{
    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        long long t = a;
        a = b;
        b = a + t;
    }

    return a;
}

int main()
{
    long long n, p;
    std::cin >> n >> p;

    std::map<long long, long long> m;
    for (int i = 0; i < n; i++) {
        long long temp;
        std::cin >> temp;

        m[temp % 2]++;
    }

    long long ans = pow_mod(2, m[0], mod);
    long long t = 0;
    for (long long i = p; i <= m[1]; i += 2) {
        t += nCr(m[1], i);
    }
    std::cout << ans * t << std::endl;
}
