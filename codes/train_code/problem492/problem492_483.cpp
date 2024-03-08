#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
using namespace std;
#define INF ((1<<30)-1)
#define LINF (1LL<<60)
#define EPS (1e-10)
typedef long long ll;
typedef pair<ll, ll> P;
const int MOD = 1000000007;
const int MOD2 = 998244353;


int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = 0, c = 0;

    rep(i, n){
        if (s[i] == '(') l++;
        else r++;
        if (l < r) c++, l++;
    }
    rep(i, c) cout << '(';
    cout << s;
    rep(i, l - r) cout << ')';
    cout << endl;

    return 0;
}
