#include<bits/stdc++.h>
#define fi first
#define se second
#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define rrep(i, n) for (int (i) = 1; (i) <= (n); (i++))
#define rng(a) a.begin(),a.end()
#define rrng(a) a.rbegin(),a.rend()
#define pb push_back
#define eb emplace_back
#define yn {puts("Yes");}else {puts("No");}
#define printa(x, n) for(ll i = 0; i < n; i++) {cout << (x[i]) << " ";} cout << endl;
#define printd(x) printf("%.12f\n", ans);
template<class T> bool chmin(T& a, const T& b) {if (a > b) {a = b; return 1;} return 0;}
template<class T> bool chmax(T& a, const T& b) {if (a < b) {a = b; return 1;} return 0;}
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(void) {
    int h, w, a, b;
    cin >> h >> w >> a >> b;

    rep (i, b) {
        rep (j, w) {
            if (j < a) cout << 1;
            else cout << 0;
        }
        cout << endl;   
    }

    rep (i, h - b) {
        rep (j, w) {
            if (j < a) cout << 0;
            else cout << 1;
        }
        cout << endl;
    }

    return 0;
}