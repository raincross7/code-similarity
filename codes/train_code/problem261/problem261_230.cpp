#include <bits/stdc++.h>
using namespace std;  

int main(){
    int n, ans;
    cin >> n;
    ans = 111;
    
    while ( n > ans ) {
        ans += 111;
    }
    cout << ans << endl;
    
    return (0);
}
