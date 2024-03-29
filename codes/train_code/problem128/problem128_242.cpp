#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define REP(i,n) for (int i = 1; i < (int)(n); i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define vout(x) rep(i,x.size()) cout << x[i] << " "
template<class T> bool chmin(T &a, T b) {if(a>b) {a=b;return 1;}return 0;}
template<class T> bool chmax(T &a, T b) {if(a<b) {a=b;return 1;}return 0;}
using namespace std;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
using P = pair<int,int>;
const int inf = 1e9;
const ll inf_l = 1e18;
const int MAX = 100005;

int main() {
    int a, b; cin >> a >> b;
    vector<string> field(100);
    rep(i,50) {
        string s(100,'#');
        field[i] = s;
    }
    for (int i = 50; i < 100; i++) {
        string s(100,'.');
        field[i] = s;
    }
    int ct = 0;
    for (int h = 0; h <= 48; h += 2) {
        for (int w = 0; w < 100; w += 2) {
            if (ct >= a-1) break;
            field[h][w] = '.';
            ct++;
        }
    }
    ct = 0;
    for (int h = 51; h < 100; h += 2) {
        for (int w = 0; w < 100; w += 2) {
            if (ct >= b-1) break;
            field[h][w] = '#';
            ct++;
        }
    }
    cout << 100 << " " << 100 << endl;
    rep(i,100) {
        rep(j,100) cout << field[i][j];
        cout << endl;
    }
}