#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {

    int N;
    cin >> N;
    int A[101];
    int Max = 0, Min = 10000000000;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        Max = max(Max, A[i]);
        Min = min(Min,A[i]);
    }
    cout << Max - Min << endl;
    return 0;
}