#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);

    for(int i=0; i<N; i++) cin >> A[i];
    B = A;
    sort(B.begin(), B.end());
    B.erase(unique(B.begin(), B.end()), B.end());

    if (A.size() == B.size()) cout << "YES" << endl;
    else cout << "NO" << endl;
}