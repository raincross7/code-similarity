#include <bits/stdc++.h>
#define rep3(i, s, n, a) for (int i = (s); i < (int)(n); i += a)
#define rep2(i, s, n) rep3(i, s, n, 1)
#define rep(i, n) rep2(i, 0, n)

using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    vector<double> v;
    rep(i, n){
        double x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    rep(i, n-1){
        double now = v[i] + v[i+1];
        v[i+1] = now / 2.0;
    }
    cout << v[n-1] << endl;
    return 0;
}