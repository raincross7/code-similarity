#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int ans = A[0];
    for (int i = 0; i < N; i++) ans = __gcd(ans, A[i]);

    cout << ans << endl;
}