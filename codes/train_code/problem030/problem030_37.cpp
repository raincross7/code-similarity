#include <bits/stdc++.h>
using namespace std;
int main(void){

    long long n, a, b;
    cin >> n >> a >> b ;
    
    cout << n / (a + b) * a + min(a, n % (a + b)) << endl;
    
    
    
}
