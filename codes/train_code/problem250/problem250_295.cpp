#include <stdio.h>
#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::terminate;

void solve() {
    int L; cin >> L;
    printf("%lf\n", (L / 3.0) * (L / 3.0) * (L / 3.0));
}

int main() {

#ifdef DEV
    std::ifstream in("Maximum Volume.input");
    cin.rdbuf(in.rdbuf());

    int t; cin >> t;
    for (int x = 1; x <= t; ++x) {
        solve();
    }
#else
    solve();
#endif

    return 0;
}
