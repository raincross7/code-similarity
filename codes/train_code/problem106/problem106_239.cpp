#include <bits/stdc++.h>
#include<math.h>
#define rep(i,n) for (int i = 0; i < (n) ; ++i)
using namespace std;
using ll = long long ;
using P = pair<int, int> ;
#define PI 3.14159265358979323846264338327950


int main () {
    int n ;
    cin >> n ;
    vector<int> d(n);
    rep(i, n){
        cin >> d[i];
    }
    int tot = 0;
    rep(i , n){
        rep(j , n){
            if (i == j){
                continue ;
            }
            else {
                tot += d[i] * d[j];
            }
        }
    }
    cout << tot / 2 << endl;

}
