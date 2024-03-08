#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    vector<long double> v(n);
    REP(i,n){
        cin>>v[i];
    }
    sort(ALL(v));
    long double mean=(v[0]+v[1])/2;
    FOR(i,2,n){
        mean=(mean+v[i])/2;
    }
    cout<<mean;
    return 0;
}
