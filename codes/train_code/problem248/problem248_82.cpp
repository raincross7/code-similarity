#include "bits/stdc++.h"
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    ll curT = 0, curX = 0, curY = 0;
    rep(i,n){
        ll t, x, y;
        cin >> t >> x >> y;
        ll dist = abs(curX - x) + abs(curY - y);
        if(t - curT >= dist && (t - curT - dist)%2 == 0){
            curT = t;
            curX = x;
            curY = y;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
