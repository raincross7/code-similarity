#include "bits/stdc++.h"

using namespace std;
typedef long long int ll;
typedef pair<ll, ll > pi;  
typedef pair<pair<ll, ll >, ll > pii;  
vector<ll > vec;
vector<vector<ll > > vec2;
ll MOD = 1000000007;
ll INF = 1145141919454519;

int main(){

    ll K, A, B;
    cin >> K >> A >> B;

    //叩き続けたほうが良い時
    ll ans = 0;
    if(A >= B || B - A == 1){
        ans = 1 + K;
        cout << ans << endl;
    }else{
        K -= A - 1;
        ans = (B - A) * (K / 2) + A;
        if(K % 2 > 0){
            ans++;
        }
        cout << ans << endl;
    }

}