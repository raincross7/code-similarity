#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n,m;
    cin >> n >> m;

    if(n>1 && m>1){
        cout << n*m-(2*n+2*(m-2)) << endl;
    }

    else{
        if(n==1){
            if(m==1) cout << 1 << endl;
            else cout << m-2 << endl;
        }
        else{
            cout << n-2 << endl;
        }
    }

    return 0;
}