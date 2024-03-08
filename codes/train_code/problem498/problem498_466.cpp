#include <bits/stdc++.h>
//using
using intl = long long;
using itnl = long long;//typo用
using uintl = unsigned long long;
using itn = int;//typo用
using ld = long double;
using namespace std;

//関数マクロ
#define rep(i, n) for(intl i = 0; i < (intl)(n); i++)
#define rrep(i, n) for(intl i = (intl)(n) - 1; i >= 0; i--)
#define repi(i, a, b) for(intl i = (intl)(a); i < (intl)(b); i++)
#define rrepi(i, a, b) for(intl i = (intl)(a) - 1; i >= (intl)(b); i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define m0(x) memset(x,0,sizeof(x))
#define m1(x) memset(x,1,sizeof(x))
#define fill(x,y) memset(x,y,sizeof(x))
#define alength(a) (sizeof(a) / sizeof(a[0]))
#define debug(x) cout << #x << ":" << x << endl

//定数マクロ
#define pb push_back
#define mp make_pair
#define pii pair<intl,intl>

//定数
const intl INF = 1e9;
const intl MOD = 1e9+7;
const ld EPS = 1.0e-14;//-9
const ld PI = acos(-1);

//テンプレート関数
template<class T> inline bool chmin(T& a, T b) { if (a > b) {a = b; return true;} return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) {a = b; return true;} return false; }
//intl gcd(intl a, intl b){ if(!b)return a; return gcd(b, a % b); } //c++17からある
//intl lcm(intl a,intl b){ return a / gcd(a, b) * b; } //c++17からある

//自作テンプレート関数
void fp(bool f){cout << (f ? "Yes" : "No") << endl;}//Yes,Noの出力を楽にするよう
void fp(bool f, string s, string t){cout << (f ? s : t) << endl;}//上の関数のYes,Noを任意の文字列でできるようにしたもの
intl fact(intl k){ intl a = 1; for(int i = 2; i <= k; i++){ a *= i; } return a; }//k!を求める関数,O(N)
intl digit10(intl a){ intl b = 0; do{ a /= 10; b++; }while(a); return b; }//aを10進数で表したときの桁数を求める関数,O(logN)


signed main(){
    cout << fixed << setprecision(10);
    intl n;
    cin >> n;
    intl a[n];
    intl b[n];
    rep(i,n)cin >> a[i];
    rep(i,n)cin >> b[i];
    intl cnt = 0;
    intl ans = 0;
    intl sub[n];
    m0(sub);
    rep(i,n){
        if(a[i] < b[i]){
            cnt += (b[i] - a[i]);
            ans++;
        }
        else sub[i] = (a[i] - b[i]);
    }
    //debug(cnt);
    sort(sub, sub + n, greater<>());
    intl add = 0;
    rep(i,n){
        if(cnt <= add){
            cout << ans << endl;
            return 0;
        }
        add += sub[i];
        ans++;
    }
    cout << -1 << endl;
    return 0;
}
