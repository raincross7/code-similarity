#include <bits/stdc++.h>
using namespace std;

int main() {
    long long foo; cin >> foo;

    int temp = foo / 100;
    int mod = foo % 100;

    string ans = "0";
    if(mod <= temp * 5) {
        ans = "1";
    }

    cout << ans << endl;

    return 0;
}