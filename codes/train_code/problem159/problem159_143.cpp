#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define repr(i,n) for(int i = (int)(n); i >= 0; i--)
#define all(v) v.begin(),v.end()
typedef long long ll;

int main(){
    int X;
    cin >> X;
    for (int i = 1; i <= 360; i++){
        if ((i * X) % 360 == 0){
            cout << i << endl;
            break;
        }
    }
}