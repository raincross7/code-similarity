#include <bits/stdc++.h>
//#include <atcoder/all>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
// using namespace atcoder;
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
//マクロ
// forループ関係
//引数は、(ループ内変数,動く範囲)か(ループ内変数,始めの数,終わりの数)、のどちらか
// Dがついてないものはループ変数は1ずつインクリメントされ、Dがついてるものはループ変数は1ずつデクリメントされる
#define FOR(i, a, b) for (ll i = a; i <= (ll)(b); i++)
// xにはvectorなどのコンテナ
#define ALL(x) (x).begin(), (x).end()  // sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size())       // sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x))    //最大値を求める
#define MIN(x) *min_element(ALL(x))    //最小値を求める
//定数
#define INF 1000000000000  // 10^12:極めて大きい値,∞
#define inf 2147483647     // int値の最大値
#define MOD 1000000007     // 10^9+7:合同式の法
#define MAXR 100000        // 10^5:配列の最大のrange(素数列挙などで使用)
//略記
#define PB push_back                             // vectorヘの挿入
#define MP make_pair                             // pairのコンストラクタ
#define F first                                  // pairの一つ目の要素
#define S second                                 // pairの二つ目の要素
#define CST(x) cout << fixed << setprecision(x)  //小数点以下の桁数指定
template <class T> inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T> inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
//各桁の和
int sumDight(int x) {
    int sum = 0;
    while (x > 0) {
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}
//回文数
int divideReverse(int x) {
    int reverse = 0;
    int r;
    while (x > 0) {
        r = x % 10;
        reverse = reverse * 10 + r;
        x /= 10;
    }
    return reverse;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int w, h,n;
    cin >> w >> h >> n;
    vector<int> x(110);
    vector<int> y(110);
    vector<int> a(110);
    rep(i, n) cin >> x[i] >> y[i] >> a[i];
    int mix = 0;
    int maxx = w;
    int miy = 0;
    int may = h;

    rep(i,n){
        if(a[i]==1){
            if (mix < x[i]) mix = x[i];
        } else if (a[i] == 2) {
            if (maxx > x[i]) maxx = x[i];
        } else if (a[i] == 3) {
            if (miy< y[i]) miy = y[i];
        } else {
            if (may > y[i]) may = y[i];
        }
    }
    //cout << maxx << " " << mix << " " << may << " " << miy << endl;
    if (maxx > mix && may > miy)
        cout << (mix - maxx) * (miy - may) << endl;
    else
        cout << 0 << endl;
}
