#include <bits/stdc++.h>
using namespace std;
int N, A;
int main() {
    cin >> N >> A;
    cout << (N % 500 <= A ? "Yes" : "No") << endl;
    return 0;
}