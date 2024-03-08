#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, n) for(int i = n-1; i >= 0; i--)
#define  all(x) (x).begin(),(x).end()     // 昇順ソート
#define  rall(v) (v).rbegin(), (v).rend() // 降順ソート
#define  FastIO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;
using P = pair<int,int>;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using VL = vector<ll>;
using VVL = vector<vector<ll>>;
using VP = vector<P>;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return true; } return false; }

int main(){
    int a,b;
    cin >> a >> b;
    vector<vector<char>> ans(100, vector<char>(100));
    rep(i,100) rep(j,100) ans[i][j] = '.';
    int i = 0;
    bool ch = false;
    a--;
    while(a){
        ch = true;
        for(int j = 0; j < 100; j += 2){                
            if (a == 0) break;
            ans[i][j] = '#';
            a--;
        }
        for(int j = 0; j < 100; j++){
            ans[i+1][j] = '#';
        }
        i += 2;
    }

    if (ch) b--;
    i++;
    while(b){
        for(int j = 0; j < 100; j+= 2){
            if (b == 0) break;
            ans[i][j] = '#';
            b--;
        }
        i += 2;
    }

    printf("100 100\n");
    rep(i,100){
        rep(j,100){
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}