#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

typedef long long ll;
using namespace std;
int mod = 1000000007;

int main(void){
    int a, b, c, d; cin >> a >> b >> c >> d;
    if(abs(a-c) <= d || (abs(a-b) <= d && abs(b-c) <= d)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}