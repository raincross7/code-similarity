#include <bits/stdc++.h>
/* Type alias */
using ll = long long;
using ld = long double;

using vec_i = std::vector<int>;
using vec_ll = std::vector<ll>;
using vec_ld = std::vector<ld>;

using set_i = std::set<int>;
using set_ll = std::set<ll>;
using set_ld = std::set<ld>;

using uset_i = std::unordered_set<int>;
using uset_ll = std::unordered_set<ll>;
using uset_ld = std::unordered_set<ld>;

/* IO macros */
#define in(i)            int i; std::cin >> i
#define in2(i, j)        int i, j; std::cin >> i >> j
#define in3(i, j, k)     int i, j, k; std::cin >> i >> j >> k
#define in_(i)           std::cin >> i
#define in2_(i, j)       std::cin >> i >> j
#define in3_(i, j, k)    std::cin >> i >> j >> k
#define in_ll(i)         ll i; std::cin >> i
#define in2_ll(i, j)     ll i, j; std::cin >> i >> j
#define in3_ll(i, j, k)  ll i, j, k; std::cin >> i >> j >> k
#define in_ll_(i)        std::cin >> i
#define in2_ll_(i, j)    std::cin >> i >> j
#define in3_ll_(i, j, k) std::cin >> i >> j >> k
#define in_ld(i)         ld i; std::cin >> i
#define in2_ld(i, j)     ld i, j; std::cin >> i >> j
#define in3_ld(i, j, k)  ld i, j, k; std::cin >> i >> j >> k
#define in_ld_(i)        std::cin >> i
#define in2_ld_(i, j)    std::cin >> i >> j
#define in3_ld_(i, j, k) std::cin >> i >> j >> k
#define in_c(i)          char i; std::cin >> i
#define in2_c(i, j)      char i, j; std::cin >> i >> j
#define in3_c(i, j, k)   char i, j, k; std::cin >> i >> j >> k
#define in_c_(i)         std::cin >> i
#define in2_c_(i, j)     std::cin >> i >> j
#define in3_c_(i, j, k)  std::cin >> i >> j >> k
#define in_str(s)        std::string s; std::cin >> s

#define vec_in(v, n)    auto v=vec_i(n); for(auto &x:v){std::cin>>x;}
#define vec_in_ll(v, n) auto v=vec_ll(n);for(auto &x:v){std::cin>>x;}
#define vec_in_ld(v, n) auto v=vec_ld(n);for(auto &x:v){std::cin>>x;}

#define print(x)   std::cout << x
#define println(x) std::cout << x << "\n"
#define print_fixed(x)   std::cout << std::fixed << x
#define println_fixed(x) std::cout << std::fixed << x << "\n"
#define print_vec(v) for (auto &x:v) { std::cout << x << " ";}
#define println_vec(v) for (auto &x:v) { std::cout << x << " ";} std::cout << "\n";
#define print_long_vec(v) for (auto &x:v) { std::cout << x << "\n";}
#define println_long_vec(v) for (auto &x:v) { std::cout << x << "\n";} std::cout << "\n";

/* Loops */
#define rep(i, n) for (auto i = 0; i < n; ++i)

/* Vector manipulation */
#define vec_sort(v) std::sort(v.begin(), v.end())

using namespace std;
/* Code Starts Here*/
int main () {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    in2(N, M);
    vec_in(H, N);
    vec_i A(N, 0);
    rep(i, M) {
        in2(a, b);
        a--; b--;
        A[a] = max(A[a], H[b]);
        A[b] = max(A[b], H[a]);
    }
    int ans = 0;
    rep(i, N) {
        ans += A[i] < H[i];
    }
    println(ans);
    return 0;
}
