#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 4e5 + 5, mod = 998244353;



int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    char a[5][5];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    if(a[0][0] != a[1][2] || a[0][1] != a[1][1] || a[0][2] != a[1][0]) cout << "NO";
    else cout << "YES";


    return 0;

}


