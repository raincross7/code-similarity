#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <random>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repp(i,n,m) for (int i = m; i < (n); ++i)
#define repl(i,n) for (long long i = 0; i < (n); ++i)
#define reppl(i,n,m) for (long long i = m; i < (n); ++i)
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<int, int>;
using PL = pair<long long, long long>;
using Pxy = pair<double, double>;
using T = tuple<int, int, bool>;
const int INF = 1001001007;
const int mod = 1000000007;
const int MOD = 998244353;
const ll inf = 1e18;
template <typename AT>
void printvec(vector<AT> &ar){
    rep(i,ar.size()-1) cout << ar[i] << " ";
    cout << ar[ar.size()-1] << endl;
}
template <typename Q>
void printvvec(vector<vector<Q>> &ar){
    rep(i,ar.size()){
        rep(j,ar[0].size()-1) cout << ar[i][j] << " ";
        cout << ar[i][ar[0].size()-1] << endl;
    }
}
template <typename S>
bool range(S a, S b, S x){
    return (a <= x && x < b);
}

void yn(int o){
    if (o == 0) cout << "No" << endl;
    else cout << "Yes" << endl;
}

struct point {
    vector<int> to;
};

int main() {
    int n, m; cin >> n >> m;
    vector<point> ar(n);
    rep(i,m){
        int a, b; cin >> a >> b;
        a--; b--;
        ar[a].to.emplace_back(b);
        ar[b].to.emplace_back(a);
    }
    bool t = false;
    rep(i,ar[0].to.size()){
        int p = ar[0].to[i];
        rep(j,ar[p].to.size()){
            if (ar[p].to[j] == n - 1) t = true;
        }
    }
    if (t) cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;
}