#include <bits/stdc++.h>
using namespace std;

// 型定義
typedef long long ll;
typedef pair<ll, ll> P;

// forループ
#define REP(i,n) for(ll i=0; i<(ll)(n); ++i)

// 定数宣言
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

// グラフ表現
using Graph = vector<vector<int>>;

// グラフの辺表現
using Edge = map<pair<int,int>,int>;

// n次元配列の初期化。第２引数の型のサイズごとに初期化していく。
template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

// 最大公約数
ll gcd(ll a,ll b){
   if (a%b == 0) return(b);
   else return(gcd(b, a%b));
}

// 最小公倍数
ll lcm(ll a, ll b){
    return a/gcd(a, b) * b;
}

int main()
{
    cout << fixed << setprecision(15);
    ll H, W;
    cin >> H >> W;

    ll ans = LINF;
    for(ll i=1; i<H; i++){
        ll A = i*W;

        ll k = H-i;

        if(k%2 == 0){
            ans = min(abs(A - k/2 * W), ans);
        }
        if(k%2 == 1){
            ll temp = max(abs(A - k/2 * W), abs(A - (k/2 +1) * W));
            ans = min(temp, ans);
        }
        if(W%2 == 0){
            ans = min(abs(A - W/2 * k), ans);
        }
        if(W%2 == 1){
            ll temp = max(abs(A - W/2 * k), abs(A - (W/2 +1) * k));
            ans = min(temp, ans);
        }
    }
    for(ll i=1; i<W; i++){
        ll A = i*H;

        ll k = W-i;

        if(k%2 == 0){
            ans = min(abs(A - k/2 * H), ans);
        }
        if(k%2 == 1){
            ll temp = max(abs(A - k/2 * H), abs(A - (k/2 +1) * H));
            ans = min(temp, ans);
        }
        if(H%2 == 0){
            ans = min(abs(A - H/2 * k), ans);
        }
        if(H%2 == 1){
            ll temp = max(abs(A - H/2 * k), abs(A - (H/2 +1) * k));
            ans = min(temp, ans);
        }
    }
    cout << ans << endl;
    return 0;
}