#include"bits/stdc++.h"

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, n) for (int i = 1; i <= (int)(n); i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using pi = pair<int, int>;
const ll INF = 1LL << 60;


int main() {
    int n;
    cin >> n;
    vector<int>diffarr(n);
    rep(i, n)cin >> diffarr[i];
    sort(all(diffarr));
    int diff = diffarr[n / 2] - diffarr[(n / 2) - 1];
    cout << diff << endl;
    return 0;
}