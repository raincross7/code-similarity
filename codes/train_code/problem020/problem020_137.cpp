#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        string S = to_string(i);
        if ((int)S.size() % 2 != 0) cnt++;
    }
    cout << cnt << endl;
}