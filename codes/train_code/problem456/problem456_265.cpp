#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    vector<int> ans(n);
    for (size_t i = 0; i < n; i++) {
        int a;
        cin >> a;
        ans[a-1] = i+1;
    }

    for (size_t i = 0; i < n; i++) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}
