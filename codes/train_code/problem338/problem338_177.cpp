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
#define SORT(x) sort(ALL(x))
typedef long long ll;
typedef long double ld;
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    REP(i,n){
        cin>>v[i];
    }
    ll m;
    REP(i,1000){
        sort(ALL(v));
        m=v[0];
        if(m==1){
            cout<<1;
            return 0;
        }else{
            FOR(j,1,n){
                ll r=v[j]%m;
                if(r!=0){
                    v[j]=r;
                }
            }
        }
        if(m==MIN(v)){
            cout<<m;
            return 0;
        }
    }
}
