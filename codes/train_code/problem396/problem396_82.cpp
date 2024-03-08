#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <set>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
typedef long long ll;
typedef long double ld;
int main(){
    string s;cin>>s;
    set<char> v;
    ll n=SIZE(s);
    REP(i,n){
        v.insert(s[i]);
    } 
    char c='a';
    REP(i,n){
       if(v.find(c)!=v.end()){
           c++;
       }else{
           break;
       }
    }
    string ans;
    if(c=='{'){
        ans="None";
    }else{
        ans=c;
    }
    cout<<ans<<endl;
    return 0;

}
