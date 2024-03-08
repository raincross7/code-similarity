#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <numeric>
#include <array>
#include <cmath>
#include <memory>
using namespace std;
//変数デバッグ
#define DEB(variable) cout << #variable << '=' << variable << endl

//for簡易表記(引数ミス防止)
#define FOR(LoopVariable,numberOFbegin,numberOFend) for (int LoopVariable = (numberOFbegin); (LoopVariable) < (numberOFend); (LoopVariable)++)
#define DEFOR(LoopVariable,numberOFbegin,numberOFend) for (int LoopVariable = (numberOFbegin)-1; (LoopVariable) >= (numberOFend); (LoopVariable)--)
#define REP(LoopVariable,numberOFend) for(int LoopVariable = 0;(LoopVariable)<(numberOFend);LoopVariable++)

constexpr long long int linf = numeric_limits<long long int>::max()-5;
constexpr int inf= numeric_limits<int>::max()-5;
constexpr long long int mod = 1000000007;

int main(){

    int n;
    cin>>n;
    vector<long long int> v(n);
    REP(i,n){
        cin>>v[i];
    }

    FOR(i,1,n){
        v[i]+=v[i-1];
    }
    /*
    REP(i,n){
        cout << v[i] << endl;
    }*/
    long long int result=linf;
    FOR(i,1,n){
        result=min(result,abs((v[n-1]-v[i-1])-(v[i-1])));
       // cout << result << endl;
    }
    cout<<result<<endl;

    return 0;
}
