#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b){if(a < b){ a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b){if(a > b){ a = b; return 1;} return 0;}

const int INF = 100000; 

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(c >= a && c <= b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}
