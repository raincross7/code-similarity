#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define all(x) (x).begin(),(x).end()
#define pll pair<ll,ll>
#define pii pair<int,int>
#define rep(i,n) for(int i=0;i<n;i++)
#define sz(x) ((ll)(x).size())
#define pb push_back
#define mp make_pair
#define bit(n) (1LL<<(n))
#define F first
#define S second
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
const ll INF = 1LL<<60;
const ll mod = (int)1e9 + 7;

/*
テストケース全てに目を通す
テストケースが2個以下だったらなんかある
N最小のコーナーケースがないか調べる
制約をしっかりと確認する（1からNまでの順列、全て異なる値などの制約も含め）
制約のn*mとn,mを読み違えない
操作の逆順を考える
オーバーフローしないか確かめる
Codeforcesではscanfを使う
modの引き算には+modをする
エラー出力は消す
エラー出力を消せ！！！！！
数値の区切り位置を誤読しない
cout << fixed;
cout << setprecision(n) << ans;
 */

int main() {
    int n;
    cin >> n;
    int sum=0;
    int a[n];
    int len=1;
    rep(i,n){
        cin >> a[i];
        if(i!=0){
            if(a[i]==a[i-1]){
                len++;
            }
            else{
                sum+=len/2;
                len=1;
            }
            if(i==n-1){
                sum+=len/2;
            }
        }
      	//cerr << len << ' ' << sum << endl;
    }
    cout << sum;


    
}

/*
*/

