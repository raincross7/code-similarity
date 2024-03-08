#include <bits/stdc++.h>
using namespace std;
typedef long long lol;

//マクロ
//forループ関係
//引数は、(ループ内変数,動く範囲)か(ループ内変数,始めの数,終わりの数)、のどちらか
//Dがついてないものはループ変数は1ずつインクリメントされ、Dがついてるものはループ変数は1ずつデクリメントされる
#define REP(i,n) for(lol i=0;i<lol(n);i++)
#define REPD(i,n) for(lol i=n-1;i>=0;i--)
#define FOR(i,a,b) for(lol i=a;i<=lol(b);i++)
#define FORD(i,a,b) for(lol i=a;i>=lol(b);i--)
//xにはvectorなどのコンテナ
#define ALL(x) x.begin(),x.end() //sortなどの引数を省略したい
#define SIZE(x) lol(x.size()) //sizeをsize_tからllに直しておく
//定数
#define PI 3.1415926535897932385 //pi
#define INF 1000000000000 //10^12:極めて大きい値,∞
#define MOD 1000000007 //10^9+7:合同式の法
#define MAXR 100000 //10^5:配列の最大のrange(素数列挙などで使用)
//最大値最小値
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int gcd(int a,int b){return b?gcd(b,a%b):a;}

int main()
{
    lol result{0};
    lol n; cin >> n;
    int k; cin >> k;
    int a[101][101] = {}, d[101];
    /*
    vector<int> a(n);
    REP(i, n)
    {
        cin >> a[i];
    }
    */
    FOR(i, 1, k)
    {
        cin >> d[i];
        FOR(j, 1, d[i])
        {
            cin >> a[i][j];
        }
    }
    vector<int> check(n+1, 0);
    FOR(i, 1, k)
    {
        FOR(j, 1, d[i])
        {
            check[a[i][j]] = 1;
        }
    }
    FOR(i, 1, n)
    {
        if(check[i] == 1)
            result++;
    }
    result = n - result;

    cout << result << endl;
    return 0;
}