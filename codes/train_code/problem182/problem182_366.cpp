#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef vector<ll> vel;
typedef vector<str> ves;
#define REP(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define rep(i, b) REP(i, 0, b)
const ll mod = 1000000007;
const double pi = 3.14159265358979;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll L = a + b, R = c + d;
    if (L < R) {
        cout << "Right" << endl;
    }
    else if (L == R) {
        cout << "Balanced" << endl;
    }
    else {
        cout << "Left" << endl;
    }
}
