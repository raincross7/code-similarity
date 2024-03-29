#include <bits/stdc++.h>
//#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
//using namespace atcoder;
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
//マクロ
//forループ関係
//引数は、(ループ内変数,動く範囲)か(ループ内変数,始めの数,終わりの数)、のどちらか
//Dがついてないものはループ変数は1ずつインクリメントされ、Dがついてるものはループ変数は1ずつデクリメントされる
#define FOR(i, a, b) for (ll i = a; i <= (ll)(b); i++)
//xにはvectorなどのコンテナ
#define ALL(x) (x).begin(), (x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size())      //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x))   //最大値を求める
#define MIN(x) *min_element(ALL(x))   //最小値を求める
//定数
#define INF 1000000000000 //10^12:極めて大きい値,∞
#define inf 2147483647    //int値の最大値
#define MOD 1000000007    //10^9+7:合同式の法
#define MAXR 100000       //10^5:配列の最大のrange(素数列挙などで使用)
//略記
#define PB push_back                            //vectorヘの挿入
#define MP make_pair                            //pairのコンストラクタ
#define F first                                 //pairの一つ目の要素
#define S second                                //pairの二つ目の要素
#define CST(x) cout << fixed << setprecision(x) //小数点以下の桁数指定
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int n, d;
    cin >> n >> d;
    vector<vector<double>> x(n, vector<double>(d));
    rep(i, n) rep(j, d) cin >> x[i][j];
    
    int total = 0;
    vector<int> ans;

    rep(i, n-1){ for (int j = i + 1; j < n; j++){int sum = 0;
    rep(k, d) {
        
        sum += (x[j][k] - x[i][k]) * (x[j][k] - x[i][k]);
        
    }
    ans.push_back(sum);
        }}

   rep(i,ans.size()){
       rep(j,10000){
           if (ans[i] == j * j) {
               total++;
               break;
           }
       }
   }
   cout << total << endl;
}
