#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    sort(A, A + N);
    for (int i = 1; i < N; i++) {
        if (A[i - 1] == A[i]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}