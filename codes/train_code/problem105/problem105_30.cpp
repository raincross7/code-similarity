#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const static ll INF = 1e15;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
// __uint128_t
const ll MOD = 1e9+7;



int main(){
    ll A; 
    double B;
    cin >> A >> B;
    B *= 100.0;
    ll nB = round(B);
    //nB/=10;
    cout << setprecision(20) << (A*nB)/100<< endl;
}