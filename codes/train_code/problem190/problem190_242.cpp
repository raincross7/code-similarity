#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<cmath>
#define REP(i,a) for (int i = 0;i < (a);++i)
#define FOR(i,a,b) for (int i = (a);i < (b); ++i)
#define FORR(i,a,b) for (int i = (a);i >= (b); --i)
#define ALL(obj) (obj).begin(),(obj).end()
#define SORT(list) sort(ALL((list)));
#define MOD 1000000007
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n%2){
        cout << "No" << endl;
        return 0;
    }
    if(s.substr(0,n/2)==s.substr(n/2,n/2)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}