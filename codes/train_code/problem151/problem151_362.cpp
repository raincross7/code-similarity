#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main(){
    int n;
    cin >> n;
    string s = "Christmas";
    rep(i, 25-n) s += " Eve";
    cout << s << endl;
    return 0;
}