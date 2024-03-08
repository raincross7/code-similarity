#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<iomanip>
#include<cmath>

#define REP(i,n) for (int i = 0; (i) < (n); ++ (i))
#define FOR(i,n) for (int i = 1; (i) <= (n); ++ (i))
#define dump(x)  cout << #x << " = " << (x) << endl;
#define pb push_back
#define int long long

const int INF = 1e18;
const int MOD = 1e9+7;
//const lint LINF = 1e18;
const double eps = 0.000000001;//もとの値の10^(-16)まで

using namespace std;

//typedef pair<int, int> P;
//priority_queue< P, vector<P>, greater<P> > q;//ダイクストラの時、greaterで小さい順
//cout << fixed << setprecision(10) << ans << endl;
//int gcd(int a,int b){return b?gcd(b,a%b):a;}

signed main(){
    int n,m;
    cin >> n >> m;
    if(n%2 == 1){
        REP(i,m){
            cout << i+1 << " " << n-i-1 << endl;
        }
    }
    else{
        REP(i,m){
            int k;
            if(i< n/4){
                cout << i+1 << " " << n/2 - i << endl;
                k = i;
            }
            else{
                cout << n/2 +1 + (i-k) << " " << n+1 - (i-k) << endl;
            }
        }

    }
    return 0;
}