#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<long long> L(N+1);
    L[0] = 2;
    L[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        L[i] = L[i-1] + L[i-2];
    }
    
    cout << L[N] << endl;
}

int main() {
    solve();
    return 0;
}