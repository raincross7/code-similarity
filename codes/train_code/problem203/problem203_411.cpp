#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using P   = pair<i64, i64>;

#define overload3(_1, _2, _3, name, ...) name
#define rep1(i, n) for(i64 i = 0LL; i < (n); ++i)
#define rep2(i, a, b) for(i64 i = (a); i < (b); ++i)
#define rep(...) overload3(__VA_ARGS__, rep2, rep1)(__VA_ARGS__)
#define all(v) v.begin(), v.end()

const string YES = "Yes";
const string NO  = "No";

void solve(long long D, long long T, long long S) {
    if(T * S >= D)
        cout << YES << endl;
    else
        cout << NO << endl;
}

struct IoSetup {
    IoSetup() {
        // cin.tie(nullptr);
        // ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
        cerr << fixed << setprecision(10);
    }
} iosetup;

int main() {
    long long D;
    scanf("%lld", &D);
    long long T;
    scanf("%lld", &T);
    long long S;
    scanf("%lld", &S);
    solve(D, T, S);
    return 0;
}
