#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int,int>;
const long long inf = 1000000001; // const 書き換え禁止
const double PI = 3.14159265358979323846; //M_PI はライブラリ

int main(void){
    string s;
    cin >> s;
    if(s[0] != s[1] && s[1] != s[2] && s[2] != s[0]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}