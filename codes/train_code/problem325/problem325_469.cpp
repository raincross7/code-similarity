#include <bits/stdc++.h>
#define FASTIO
using namespace std;

using ll = long long;
using Vi = vector<int>;
using Vl = vector<ll>;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

constexpr int I_INF = numeric_limits<int>::max();
constexpr ll L_INF = numeric_limits<ll>::max();

class Prints {
private:
    class __Prints {
    public:
        __Prints(const char* sep, const char* term) : sep(sep), term(term) {}
        template <class... Args>
        void operator()(Args&&... args) const { print(std::forward<Args>(args)...); }

    private:
        const char *sep, *term;
        void print() const { std::cout << term; }
        void print_rest() const { std::cout << term; }
        template <class T, class... Tail>
        void print(T&& head, Tail&&... tail) const { std::cout << head, print_rest(std::forward<Tail>(tail)...); }
        template <class T, class... Tail>
        void print_rest(T&& head, Tail&&... tail) const { std::cout << sep << head, print_rest(std::forward<Tail>(tail)...); }
    };

public:
    Prints() {}
    __Prints operator()(const char* sep = " ", const char* term = "\n") const { return __Prints(sep, term); }
    template <class T>
    void print_vec(const std::vector<T>& vec, const char* sep = " ", const char* term = "\n") const {
        const size_t sz = vec.size();
        for (size_t i = 0; i < sz; i++) std::cout << vec[i] << (i == sz - 1 ? term : sep);
    }
};

Prints prints;

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

void solve() {
    ll N, L;
    cin >> N >> L;
    Vl A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }
    ll idx = -1;
    for (ll i = 1; i < N; i++) {
        if (A[i - 1] + A[i] >= L) {
            idx = i;
            break;
        }
    }
    if (idx == -1) {
        prints()("Impossible");
        return;
    }

    prints()("Possible");
    for (ll i = 1; i < idx; i++) {
        prints()(i);
    }
    for (ll i = N - 1; i >= idx; i--) {
        prints()(i);
    }
}

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

int main() {
#ifdef FASTIO
    cin.tie(0), cout.tie(0);
    ios::sync_with_stdio(false);
#endif
#ifdef FILEINPUT
    ifstream ifs("./in_out/input.txt");
    cin.rdbuf(ifs.rdbuf());
#endif
#ifdef FILEOUTPUT
    ofstream ofs("./in_out/output.txt");
    cout.rdbuf(ofs.rdbuf());
#endif
    cout << setprecision(18) << fixed;
    solve();
    cout << flush;
    return 0;
}