#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); (i)++)
#define frep(i,m,n) for(int (i)=(m); (i)<(int)(n); (i)++)
#define rrep(i,n) for(int (i)=(n)-1; (i)>-1; (i)--)
#define frrep(i,m,n) for(int (i)=(n)-1; (i)>(int)(m)-1; (i)--)
#define all(x) (x).begin(), (x).end()
#define sqr(x) (x)*(x)
#define CEIL(a,b) ((a)+(b)-1) /(b)

typedef long long ll;
const int INF = 1001001001;
const int MOD = 1000000007;
const int MAX_N = 101010;

// A:array of pair, N:size of array
void sort_second(vector<pair<ll, ll>> &A, int N);
// a^n
ll a_n(ll a, ll n);
// make vector of (n!)%MOD, (n!)^(-1)%MOD to calculate nCk
void factorial_map(vector<ll> &n, vector<ll> &ninv);
// a^(-1) % MOD 
ll inv(ll a);
// map of prime factorization
void prime_map(map<int, int> &a, int n);
//list of prime (is_prime.size() = n + 1, primes.size() = 0)
void prime_list(int n, vector<int> &primes, vector<bool> &is_prime);
// get gcd from prime map
ll gcd_map(map<int, int> a, map<int, int> b);
// get lcm from prime map
ll lcm_map(map<int, int> a, map<int, int> b);
// get gcd
ll my_gcd(ll a, ll b);
// calculate nCk
ll nCk(ll n, ll k);
// get abs
ll my_abs(ll a);

class Unionfind {
    public:
        vector<ll> par, siz, rank;
        Unionfind();
        ll root(ll x);
        void merge(ll x, ll y);
        bool issame(ll x, ll y);
        ll size(ll x);
};

int main() {
    ll n, k, ret = 0;
    cin >> n >> k;
    vector<ll> sum(n+1); // 累積和
    sum[0] = 0;
    rep(i, n) {
        int a;
        cin >> a;
        sum[i+1] = sum[i] + a;
    }
    map<ll, ll> num; // (sum[i]-i)%kの個数管理用

    for(int j = 1; j <= n; j++) {
        if(j == 1 && k > 1) {
            num[0] = 1;
        }
        if(j > 1) {
            if(num.count((sum[j-1]-(j-1))%k)) num[(sum[j-1]-(j-1))%k]++;
            else num[(sum[j-1]-(j-1))%k] = 1;
            if(j-k >= 0) num[(sum[j-k]-(j-k))%k]--;
        }

        if(num.count((sum[j]-j)%k)) ret += num[(sum[j]-j)%k];
    }
    cout << ret << endl;

    return 0;
}

void sort_second(vector<pair<ll, ll>> &A, int N) {
    rep(i, N) swap(A.at(i).first, A.at(i).second);
    sort(all(A));
    rep(i, N) swap(A.at(i).first, A.at(i).second);
}
ll a_n(ll a, ll n) { 
    if(n == 0) return 1;
    
    ll ret = a, count = 1;
    while(count * 2 < n) {
        ret *= ret;
        ret %= MOD;
        count *= 2;
    }
    if(count == n) return ret;
    else return (ret * a_n(a, n-count))%MOD ;
}

/* calculate a^n with no recursive process (%MOD)
ll a_n(ll a, ll n) { 
    ll ret = a, count = 1;
    int num = 1;
    vector<ll> memory(100);
    memory.at(0) = a;

    while(count * 2 < n) {
        ret *= ret;
        ret %= MOD;
        count *= 2;
        memory.at(num) = ret;
        num++;
    }
    if(count == n) return ret;
    else {
        bitset<100> bit = bitset<100>(n-count);
        rep(i, 100) {
            if(bit.test(i)) ret = (ret * memory.at(i)) % MOD;
        }
        return ret;
    }    
}
*/

void factorial_map(vector<ll> &n, vector<ll> &ninv) {
    n[0] = 1;
    for(int i = 1; i < n.size(); i++) n[i] = (n[i-1] * i) % MOD;
    ninv[n.size()-1] = inv(n[n.size()-1]);
    for(int i = n.size() - 2; i > -1; i--) ninv[i] = (ninv[i+1] * (i+1)) % MOD;
}

ll inv(ll a) {
    return a_n(a, MOD-2);
}

void prime_map(map<int, int> &a, int n) {
    while((n%2) == 0) {
        n /= 2;
        if(a.count(2)) a.at(2)++;
        else a[2] = 1;
    }
    for(int i = 3; i*i <= n; i+=2) {
        while((n%i) == 0) {
            n /= i;
            if(a.count(i)) a.at(i)++;
            else a[i] = 1;
        }
    }
    if(n != 1) a[n] = 1;
}

ll gcd_map(map<int, int> a, map<int, int> b) {
    ll ret = 1;
    for(auto p : a) {
        auto key = p.first;
        auto value = p.second;
        if(b.count(key)) {
            if(value > b.at(key)) ret *= a_n(key, b.at(key));
            else ret *= a_n(key, value);
        }
    }
    return ret;
}

ll lcm_map(map<int, int> a, map<int, int> b) {
    ll ret = 1;
    for(auto p: a) {
        auto key = p.first;
        auto value = p.second;
        if(b.count(key)) {
            if(value > b.at(key)) ret *= a_n(key, value);
            else ret *= a_n(key, b.at(key));
        }
        else {
            ret *= a_n(key, value);
        }
    }
    for(auto p: b) {
        auto key = p.first;
        auto value = p.second;
        if(a.count(key)) {
            continue;
        }
        else {
            ret *= a_n(key, value);
        }
    }
    return ret;
}

ll my_gcd(ll a, ll b) {
    if(b == 0) return a;
    return my_gcd(b, a%b);
}

ll nCk(ll n, ll k) {
    ll kfac = 1, ret = 1;
    for(int i = 1; i <= k; i++) {
        kfac = (kfac * i) % MOD;
    }
    for(int i = n; i >= n-k+1; i--) {
        ret = (ret * i) % MOD;
    }
    ret = (ret * inv(kfac)) % MOD;
    return ret;
}

void prime_list(int n, vector<int> &primes, vector<bool> &is_prime) {
    int p = 0;
    rep(i, n + 1) is_prime[i] = true;
    is_prime[0] = false;
    is_prime[1] = false;
    for(int i = 2; i <= n; i++) {
        if(is_prime[i]) {
            primes.push_back(i);
            for(int j = 2*i; j <= n; j += i) is_prime[j] = false;
        }
    }
}

ll my_abs(ll a) {
    if(a >= 0) return a;
    else return -1 *a;
}

Unionfind::Unionfind() {
    par.resize(MAX_N);
    siz.resize(MAX_N);
    rank.resize(MAX_N);
    rep(i, MAX_N) {
        par[i] = i;
        siz[i] = 1;
        rank[i] = 0;
    }
}
ll Unionfind::root(ll x) {
    if(par[x] == x) return x;
    else {
        return par[x] = root(par[x]);
    }
}
void Unionfind::merge(ll x, ll y) {
    x = root(x);
    y = root(y);
    if(x == y) return;
    if(rank[x] < rank[y]) {
        par[x] = y;
        siz[y] += siz[x];
    }
    else {
        par[y] = x;
        siz[x] += siz[y];
        if(rank[x] == rank[y]) rank[x]++;
    }
}
bool Unionfind::issame(ll x, ll y) {
    return root(x) == root(y);
}
ll Unionfind::size(ll x) {
    return siz[root(x)];
}