#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
int INF = 1e9+7;
int mod = 1e9+7;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
signed main() {
    string S;
    int K;
    cin >> S >> K;
    for(int i = 0; i < K; i++) {
        if(S[i] != '1') {
            cout << S[i] << endl;
            return 0;
        }
    }
    cout << 1 << endl;
}
