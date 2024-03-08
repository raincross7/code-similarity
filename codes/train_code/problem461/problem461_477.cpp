#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cstdio>
#include <memory.h>
#include <cmath>
#include <array>

using namespace std;

void re(int& x);

template<class T> void re(std::vector<T>& a);

void pr(int x);

void pr(const char *x);

void ps();
template<class T, class... Ts> void ps(const T& t, const Ts&... ts);

#ifdef FFDBG

#else
#define dbg(x...) dsfdsfsdfasd
#endif

typedef vector<int> vi;

#define all(v) (v).begin(), (v).end()

#define rep(i, a, b) for(int i = a; i < (b); ++i)

int n;

void solve()
{
    re(n);
    vi a(n); re(a);

    sort(all(a));
    int bst = 0;
    rep(i,0,n-1) {
        if ( abs(a[i]*2 - a[n-1]) < abs(a[bst]*2 - a[n-1])) bst = i;
    }

    ps(a[n-1], a[bst]);
}

int main() {

    solve();
}

void re(int& x) { scanf("%d", &x); }

template<class T> void re(std::vector<T>& a) { for (int i = 0; i < a.size(); i++) re(a[i]); }

void pr(int x) { printf("%d", x); }

void pr(const char *x) { printf("%s", x); }

void ps() { pr("\n"); }
template<class T, class... Ts> void ps(const T& t, const Ts&... ts) { 
    pr(t); if (sizeof...(ts)) pr(" "); ps(ts...); 
}

