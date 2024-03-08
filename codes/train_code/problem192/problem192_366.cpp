#include <bits/stdc++.h>
#include <cmath>
#include <numeric>
using namespace std;
#define rep(i,a,b) for(int64_t i=(a);i<(b);++i) // a ≦ i < b 
#define Rrep(i,a,b) for(int64_t i=(a);i>=(b);--i) // reverse repeat. a から b まで減少．
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend() //逆イテレータ
#define RANGE(a,b,c) (a).begin()+(b),(a).begin()+(c) // [b,c) イテレータ
#define INF 1000000000000000
#define MOD 1000000007
using PII = pair<int64_t, int64_t>;
using VI = vector<int64_t>;
using VVI = vector<VI>;
using VS = vector<string>;
using VP = vector<PII>;
using i64 = int64_t;
template<typename T> void invec(vector<T> &A){for(T& a : A) cin >> a;} 


int main() {
cin.tie(0);
ios::sync_with_stdio(false);

int N, K; cin >> N >> K;
VI x(N), y(N); 
rep(i, 0, N) {
    cin >> x[i] >> y[i];
}
VI X = x, Y = y;
sort(ALL(X));
sort(ALL(Y));

i64 ans = (X[N-1] - X[0]) * (Y[N-1] - Y[0]);

rep(xi, 0, N) rep(xj, xi + 1, N) rep(yi, 0, N) rep(yj, yi + 1, N){
    int num = 0;
    i64 lx = X[xi], rx = X[xj];
    i64 by = Y[yi], uy = Y[yj];

    rep(i, 0, N){
        if (lx <= x[i] && x[i] <= rx && by <= y[i] && y[i]<= uy)
            ++num;
    }
    if (num >= K) ans = min(ans, (rx - lx) * (uy - by));
}


cout << ans << "\n";

return 0;
}
// 書いて考える．場合分け．情報整理．
// 単純に分かる量から．愚直解を実装して研究．
// 境界，出力文字列 チェック．行末にスペース入れない．
// 可読性優先．高速化次点．
// まずは全探索，分割，次にDP
// 制限を見る．境界に注意．求めたい量の変域．動かせる量．
// 偶奇，逆から，ソート，出現回数，出現位置，DP， 余事象，包除
// データ構造． 問題の特徴量．単調性，二分探索
// 存在判定：構成方法，入力の特徴
// gcd, lcm ,素因数分解．
// 例外を十分に含む一般化．想像力の限界
// 小さい系から例示
// 代数的処理．前処理によるクエリ高速化．
// 始めは過剰に例示・場合分けしてもいい．各場合を確実に対処．
// 自明な例から処理，除外．
// 小数のときは，精度の設定する．doubel 変数に数値を入力するときは 123. とする．
// テストケース作成は数表あり
// 実行エラー：vector添え字超え．0割り．

