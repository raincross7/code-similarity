#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <unordered_map>

using namespace std;
using ll = long long;

void _cin(){} template <class Head, class... Tail> void _cin(Head&& head, Tail&&... tail){ cin >> head; _cin(forward<Tail>(tail)...); }
void _cout(){ cout << "\n"; } template <class Head, class... Tail> void _cout(Head&& head, Tail&&... tail){ cout << head; _cout(forward<Tail>(tail)...); }
int gcd(int a, int b){ return (b == 0) ? a : gcd(b, a % b); }
template<typename S, typename T> ostream& operator<<(ostream &os, const pair<S, T> &p){ cout << "[" << p.first << ", " << p.second << "]"; return os; }

#define Sq(x) (x)*(x)
#define For(i, n) for(int i = 0; i < (n); i ++)
#define For1(i, n) for(int i = 1; i <= (n); i ++)
#define Rep(n) For(_, n)
#define Range(c) c.begin(), c.end()
#define RevRange(c) c.rbegin(), c.rend()
#define Contains(c, x) (find(Range(c), x) != c.end())
#define Search(rb, re, x) distance(rb, find(rb, re, x))
#define Sort(a) sort(Range(a))
#define DeSort(a) sort(RevRange(a))
#define Reverse(c) reverse(Range(c))
#define Unique(a) a.erase(unique(Range(a)), a.end())
#define Cusum(T, xs, sxs) vector<T> sxs(xs.size()+1); For(i, (int)xs.size()) sxs[i+1] = sxs[i] + xs[i]
#define Cin(T, ...) T __VA_ARGS__; _cin(__VA_ARGS__)
#define Cins(T, n, xs) vector<T> xs(n); For(i, n) cin >> xs[i]
#define Cins2(T, n, xs, ys) vector<T> xs(n), ys(n); For(i, n) cin >> xs[i] >> ys[i]
#define Cins3(T, n, xs, ys, zs) vector<T> xs(n), ys(n), zs(n); For(i, n) cin >> xs[i] >> ys[i] >> zs[i]
#define Cinss(T, n, m, xs) Vec2(T, n, m, xs); For(i, n) For(j, m) cin >> xs[i][j]
#define Cinm(T, n, map) unordered_map<T, int> map; Rep(n){ Cin(T, x); map[x] ++; }
#define Cout(...) _cout(__VA_ARGS__)
#define Couts(xs) { for(const auto &e : xs) cout << e << " "; cout << "\n"; }
#define Coutyn(cond) Cout((cond) ? "yes" : "no")
#define CoutYn(cond) Cout((cond) ? "Yes" : "No")
#define CoutYN(cond) Cout((cond) ? "YES" : "NO")
#define vc vector
#define Mini(a, x) a = min(a, x)
#define Maxi(a, x) a = max(a, x)

// constexpr int MOD = 1e9+7;

int main(void){
    Cin(int, n);
    Cins(int, n, a);
    
    ll sum = 0;
    For(i, n) sum += a[i];
    ll m = (ll)n*(n+1)/2;
    if(sum % m != 0){
        Cout("NO");
        return 0;
    }
    ll k = sum / m;
    ll c = 0;
    For(i, n){
        ll s = k - (a[(i+1)%n]-a[i]);
        if(s < 0 || s % n != 0){
            Cout("NO");
            return 0;
        }
        c += s / n;
    }
    CoutYN(c == k);
}


