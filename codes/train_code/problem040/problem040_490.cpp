#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
using P = pair<int, int>;

int main() {

    int N;
    cin >> N;

    vector<int> d(N);
    rep(i, N) cin >> d[i];
    sort(d.begin(), d.end());

    if (N % 2 == 0) cout << d[N/2] - d[N/2-1] << endl;
    else cout << 0 << endl;

    return 0;
}