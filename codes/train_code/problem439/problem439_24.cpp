#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> A;
        vec.at(i) = A;
    }
    sort(vec.begin(), vec.end());
    cout << vec.at(N - 1) - vec.at(0) << endl;
}
