#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int64_t> lucas(n + 1);
    lucas[0] = 2;
    lucas[1] = 1;
    for (int i = 2; i <= n; i++) lucas[i] = lucas[i - 1] + lucas[i - 2];
    cout << lucas[n] << "\n";
}
