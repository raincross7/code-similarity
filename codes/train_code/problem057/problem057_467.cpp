#include <bits/stdc++.h>
#include <algorithm>
#define rep(i, n) for (ll i=0; i<n; ++i)
#define all(obj) (obj).begin(),(obj).end()
using namespace std;
typedef long long ll;
long long GCD(long long x, long long y) { return y ? GCD(y, x%y) : x; }

int main(){
    string s, ans="";
    cin >> s;
    for(int i=0; i<s.size(); i+=2) ans+=s[i];
    cout << ans << endl;
    return 0;
}
