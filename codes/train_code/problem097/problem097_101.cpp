#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
int INF = 1e9+7;
int mod = 1e9+7;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
signed main() {
    int H,W;
    cin >> H >> W;
    if(H == 1 || W == 1) {
        cout << 1 << endl;
        return 0;
    }
    cout << (H*W+1)/2 << endl;
}
