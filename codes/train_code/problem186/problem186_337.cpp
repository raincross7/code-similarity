#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    int count = k;
    if(n == k){
        cout << 1 << endl;
        return 0;
    }
    for(int i = 1; ; i++){
        count += k-1;
        if(count >= n){
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}