#include "bits/stdc++.h"

#define _overload(_1, _2, _3, _4, name, ...) name
#define _rep1(Itr, N) _rep3(Itr, 0, N, 1)
#define _rep2(Itr, a, b) _rep3(Itr, a, b, 1)
#define _rep3(Itr, a, b, step) for (i64 (Itr) = a; (Itr) < b; (Itr) += step)
#define repeat(...) _overload(__VA_ARGS__, _rep3, _rep2, _rep1)(__VA_ARGS)

using namespace std;
using llong = long long;

string s;
string ans;

int main() {
    cin >> s;

    for (auto ch:s) {
        if (ch == 'B' && !ans.empty()) ans.pop_back();
        else if (ch != 'B') ans.push_back(ch);
    }

    cout << ans << endl;

    return 0;
};
