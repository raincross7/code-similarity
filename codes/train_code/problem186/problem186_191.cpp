#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const long long INF = 1LL << 60;
const ll C = 1000000000+7;

int main() {
    int N, K;
    cin >> N >> K;
    int count = 1;
    N -= K;
    while(N > 0) {
        N -= (K-1);
        count++;
    }
    cout << count << endl;
}