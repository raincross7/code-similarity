#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i< (n); i++)
using ll = long long;
using P = pair<int, int>;
int main()
{
    int n;
    int ans = 0;
    cin >> n;
    rep(i,n){
        int l,r;
        cin >> l >> r;
        ans += r-l +1;
    }
    cout << ans << endl;
return 0;
}