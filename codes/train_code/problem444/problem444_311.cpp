#include "bits/stdc++.h"
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    map<int, int> wa;
    set<int> ac;
    int pena = 0;
    rep(i,m){
        int p;
        string s;
        cin >> p >> s;
        if(s == "AC"){
            if(ac.find(p) != ac.end()) continue;
            pena += wa[p];
            ac.insert(p);
        }
        else{
            wa[p]++;
        }
    }
    cout << ac.size() << " " << pena << endl;
    return 0;
}