#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
#include <utility>
#include <cstdlib>
#include <queue>
#include <stack>
#include <iomanip>
#include <cstdio>
#include <map>
#include <list>

using namespace std;

typedef long long Int;
typedef pair<Int,Int> P;

#define rep(i,x) for(Int i = 0; i < (Int)(x); i++)
#define rrep(i,x) for(Int i = ((Int)(x) - 1); i >= 0; i--)
#define _upgrade ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
#define pb push_back


template<class T1, class T2> void chmin(T1 &a, T2 b){if(a>b)a=b;}
template<class T1, class T2> void chmax(T1 &a, T2 b){if(a<b)a=b;}

//ll gcd(ll a, ll b){return b?gcd(b,a%b):a;}
//ll lcm(ll x, ll y) {return x / gcd(x, y) * y;}

Int dx[4] = {1,0,-1,0};
Int dy[4] = {0,1,0,-1};
const Int INF = 1001002003004005006ll;
const Int mod = 1e9 + 7;
const double PI = 3.14159265358979323846;


// ****************************************CODE***************************************//








int main(){
        int n;
        cin >> n;

        Int sum[200010];
        sum[0] = 0;
        Int allsum = 0;

        //累積和作る
        for(int i = 1; i <= n; i++){
                Int a;
                cin >> a;

                //ついでにすべての和も作る
                allsum += a;
                sum[i] = sum[i-1] + a;
        } 

        //答えを求める
        Int ans = INF;
        for(int i = 0; i < n-1; i++)
        {
                //ある場所までの和を求めて
                Int tmp = sum[i+1] - sum[0];
                //すべての和から引くことでその場所の和が求まる
                Int tmp2 = allsum - tmp;


                //その差の絶対値を小さかったら更新する
                Int minval = abs(tmp-tmp2);
                ans = min(minval, ans);
        }

        cout << ans << endl;
        return 0;
}


















