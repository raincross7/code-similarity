#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<n; i++)
#define pb push_back
#define int long long
typedef pair<int, int> P;
typedef tuple<int, int, int> T;

char b;

signed main() {
    //cin.tie(0); ios::sync_with_stdio(false);
    cin >> b;
    if (b=='A') cout << 'T' << endl;
    else if (b=='T') cout << 'A' << endl;
    else if (b=='C') cout << 'G' << endl;
    else cout << 'C' << endl;
}