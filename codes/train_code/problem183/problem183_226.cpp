#include <bits/stdc++.h>
using namespace std;
 
#define int         long long
#define endl        "\n"
#define pii         pair<int, int>

const int mod = 1e9+7;

unsigned long long power(unsigned long long x, 
                         int y, int p) 
{ 
    unsigned long long res = 1; // Initialize result 
  
    x = x % p; // Update x if it is more than or 
    // equal to p 
  
    while (y > 0) { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res * x) % p; 
  
        // y must be even now 
        y = y >> 1; // y = y/2 
        x = (x * x) % p; 
    } 
    return res; 
} 
  
// Returns n^(-1) mod p 
unsigned long long modInverse(unsigned long long n, int p) 
{ 
    return power(n, p - 2, p); 
} 
  
// Returns nCr % p using Fermat's little 
// theorem. 
unsigned long long C(unsigned long long n, 
                                 int r, int p) 
{ 
    // Base case 
    if (r == 0) 
        return 1; 
  
    // Fill factorial array so that we 
    // can find all factorial of r, n 
    // and n-r 
    long long fac[n + 1]; 
    fac[0] = 1; 
    for (int i = 1; i <= n; i++) 
        fac[i] = (fac[i - 1] * i) % p; 
  
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
}
 
 
void solve(int TC) { 
    int x, y; cin >> x >> y;
    int sum = x+y;
    if(sum%3) {
        cout << 0 << endl; return;
    }
    int n = sum/3;
    int h = x-n;
    int v = y-n;
    if(h<0 || v<0) {
        cout << 0 << endl; return;
    }
    cout << C(n, h, mod) << endl;

}
 
signed main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cout << fixed << setprecision(12);
 
 
    int T = 1;
    //cin >> T;
    for(int i=1; i<=T; i++) {
        solve(i);
    }
    return 0;
 
}