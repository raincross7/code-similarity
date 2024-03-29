#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int getDigits(int n){
    int digits = 0;
    while(n > 0){
        n /= 10; 
        digits++;
    }
    return digits;
}

int main() {
    
    int N;
    cin >> N; 
    int ans = 0;
    for(int i = 1; i <= N; i++){
        if(getDigits(i) % 2 == 1){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}