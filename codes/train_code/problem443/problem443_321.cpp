#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (n); ++i)
double const PI = 3.1415926535897932384626433;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    set<int> a;
    rep(i, n) {
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }
    if (a.size() == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}