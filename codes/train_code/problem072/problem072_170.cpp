#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
        if(sum >= n){
            for(int j = 1; j <= i; j++){
                if(j != sum - n) cout << j << endl;
            }
            return 0;
        }
    }
    return 0;
}