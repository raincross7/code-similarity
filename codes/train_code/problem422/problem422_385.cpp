#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

//#define int long long
//signed main(){
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a;
    cin >> n >> a;
    if(a>=n%500) cout << "Yes" << "\n";
    else cout << "No" << "\n";

    return 0;
}