#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


int main() {
    int N, K;
    cin >> N >> K;

    vector<int> l(N);
    rep (i,N) {
        cin >> l.at(i);
    }
    sort(l.rbegin(), l.rend());

    int sum = 0;
    for (int i = 0; i < K; ++i) {
        sum += l.at(i);
    }
    cout << sum << endl;
    

}
