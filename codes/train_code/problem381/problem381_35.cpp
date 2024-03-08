#include <bits/stdc++.h>
using namespace std;

typedef long lint;
typedef long long llint;
typedef pair<int, int> pint;
typedef pair<long long, long long> pllint;

// static const int MAX = 1e6;
// static const int NIL = -1;
// static const llint INF = 1<<21;
// static const llint MOD = 1e9 + 7;

bool compPair(const pint& arg1, const pint& arg2) { return arg1.first > arg2.first; }
template<class T> void chmax(T& a, T b) { if (a < b) { a = b; } }
template<class T> void chmin(T& a, T b) { if (a > b) { a = b; } }

int gcd(int a, int b) {
    if (a<b) swap(a, b);

    if (a%b==0) return (b);
    else return(gcd(b, a%b));
}

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;

    int g = gcd(a, b);
    if(c%g==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}