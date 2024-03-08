#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, n) for(int i = n-1; i >= 0; i--)
#define  all(x) (x).begin(),(x).end()     // 昇順ソート
#define  rall(v) (v).rbegin(), (v).rend() // 降順ソート
#define  FastIO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(x) ((int)(x).size())
typedef long long ll;
using P = pair<int,int>;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using VL = vector<ll>;
using VVL = vector<vector<ll>>;
using VP = vector<P>;
template<typename T> void view(T e){std::cout << e << std::endl;}
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return true; } return false; }

const int inf = 1 << 30;
const ll INF = 1LL << 60;

int main(){
    int x;
    cin >> x;
    int mx = 0;
    rep(i,21) rep(j,21) rep(k,21) rep(l, 21) rep(m, 21) rep(n,21){
        int mon = 100 * i + 101 * j + 102 * k + 103 * l + 104 * m + 105 * n;
        if (mon == x){
            cout << 1 << endl;
            return 0;
        }
        chmax(mx, mon);
    }

    if (x < mx){
        cout << 0 << endl; 
    }else{
        cout << 1 << endl;
    }
    return 0;
}