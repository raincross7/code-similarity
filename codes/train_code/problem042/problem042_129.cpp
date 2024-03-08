#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <math.h>
#include <cstdlib>
#include <iomanip>
#define rep(i,x) for(ll i=0;i<x;i++)
#define all(a) (a).begin(),(a).end()
using namespace std;
using ld = long double;
using ll = long long;
const ll INF = 10010010010;
typedef pair<ll, ll> P;
using graph = vector<vector<ll>>;
const ll mod = 1000000007;
ll gcd(ll a, ll b) {//a>b
    if (a < b)swap(a, b);
    if (a % b == 0) return b;
    else return gcd(b, a % b);
}/*フィボナッチテンプレ
ll memo[50];
ll fibo(ll n) {
    if (memo[n] != 0)return memo[n];
    if (n <= 1)return memo[n] = n;
    else return memo[n] = fibo(n - 1) + fibo(n - 2);
}
*/
bool isp(ll n) {
    bool res = true;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            res = false;
            break;
        }
    }
    return res;
}

int main() {
    ll N, M;
    cin >> N >> M;
    graph G(N);
    ll a, b;
    rep(i, M) {
        cin >> a >> b;
        G[a - 1].push_back(b - 1);
        G[b - 1].push_back(a - 1);
    }
    vector<ll> num(N);
    rep(i, N)num[i] = i;
    ll ans = 0;
    do {
        bool ok = true;
        rep(i, N - 1) {
            bool res = false;
            for (auto x : G[num[i]]) {
                if (x == num[i + 1])res = true;
            }
            if (res == false)ok = false;
        }
        if (ok)ans++;
    } while (next_permutation(num.begin() + 1, num.end()));
    cout << ans << endl;
}