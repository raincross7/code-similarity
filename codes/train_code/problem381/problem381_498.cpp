#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    for(int i = 1; i <= b; i++){
        if(a * i % b == c){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}