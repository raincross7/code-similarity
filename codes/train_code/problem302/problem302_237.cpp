#pragma GCC optimize("Ofast")
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define PI 3.141592
#define MOD7 1000000007
#define LL_INF 9000000000000000000
#define LL_MINF -9000000000000000000
#define INT_INF 2000000000
#define INT_MINF -2000000000
#define all(a) (a).begin(), (a).end()
#define fi first
#define se second
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

int main(){
    ll L, R;
    cin >> L >> R;

    int min_n = 2020;
    if(R - L > 2020) min_n = 0;
    else{
        for(ll i = L; i < R; i++){
            for(ll j = i+1; j <= R; j++){
                min_n = min(min_n, int(i * j % 2019));
            }
        }
    }
    cout << min_n << endl;
}