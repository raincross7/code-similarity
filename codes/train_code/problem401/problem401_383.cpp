#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N, L;
    cin >> N >> L;
    string S[N];
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    sort(S, S+N);
    
    for (int i = 0; i < N; i++) {
        cout << S[i];
    }
    cout << endl;
}
