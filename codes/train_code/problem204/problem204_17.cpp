#include <bits/stdc++.h>
using namespace std;

typedef long lint;
typedef long long llint;
typedef pair<int, int> pint;
typedef pair<long long, long long> pllint;

// static const int MAX = 1e6;
// static const int NIL = -1;
// static const ll INF = 1<<21;
// static const ll MOD = 1e9 + 7;

bool compPair(const pint& arg1, const pint& arg2) { return arg1.first > arg2.first; }
template<class T> void chmax(T& a, T b) { if (a < b) { a = b; } }
template<class T> void chmin(T& a, T b) { if (a > b) { a = b; } }

int main(void) {
    int n;
    cin >> n;

    int d, x;
    cin >> d >> x;

    vector<int> a(n);
    for(int in=0;in<n;in++) {
        cin >> a.at(in);
    }

    int ans = 0;
    for(int in=0;in<n;in++) {
        for(int jn=0;jn<d;jn++) {
            // cout << 1+jn*a.at(in) << " ";
            if(1+jn*a.at(in)<=d) ans++;
            else break;
            // cout << endl;
        }
    }

    ans += x;
    cout << ans << endl;
    return 0;
}
