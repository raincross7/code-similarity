#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main() {
    int n, a;
    cin >> n >> a;
    int mod = n%500;
    if (mod <= a) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}