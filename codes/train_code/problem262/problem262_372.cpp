#include <bits/stdc++.h>
using namespace std;  

int main(){
    int n, a[200000], b[200000];
    
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b+n, greater<int>());
    
    for ( int i = 0; i < n; i++ ) {
        cout << (a[i] == b[0] ? b[1] : b[0] ) << endl;
    }
    
    return (0);
}