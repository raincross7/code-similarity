#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int ans = 1;
    while(ans <= n){
        ans *= 2;
    }
    cout << ans / 2 << endl;
}