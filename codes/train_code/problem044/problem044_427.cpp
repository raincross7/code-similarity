// #pragma GCC target("avx2")
#pragma GCC optimize("O3", "unroll-loops")

// #include <bits/extc++.h>
// using namespace __gnu_pbds;

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
// template <typename T>
// using pbds_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
using pii = pair<int, int>;
template<typename T>
using prior = priority_queue<T, vector<T>, greater<T>>;
template<typename T>
using Prior = priority_queue<T>;

#define X first
#define Y second
#define ALL(x) (x).begin(), (x).end()
#define eb emplace_back
#define pb push_back

#define fastIO() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define RANDOM() random_device __rd; \
                 mt19937 __gen = mt19937(__rd()); \
                 uniform_int_distribution<int> __dis(1, 1E8); \
                 auto rnd = bind(__dis, __gen)

const int INF = 1E18;
const int mod = 1E9 + 7;
const int maxn = 100 + 5;

int ans = 0;
int v[maxn];

void recur(int L, int R) {
    if (L == R) return;
    int *minElem = min_element(v + L, v + R), minVal = *minElem;
    ans += minVal;
    for (int i = L; i < R; ++i) v[i] -= minVal;
    recur(L, minElem - v), recur(minElem + 1 - v, R);
}

int32_t main() {
    fastIO();
    
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> v[i];
    
    recur(0, n);
    
    cout << ans << "\n";
    
    return 0;
}