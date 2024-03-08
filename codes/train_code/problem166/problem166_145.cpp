#include <bits/stdc++.h>

using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ldouble = long double;
 
const ll inf = 1ll << 60;
const ll mod = (ll)1e9 + 7;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define print(s) cout << s;
#define println(s) cout << s << endl;
#define printd(s) cout << fixed << setprecision(10) << s << endl;

ll res;

int main()
{
    ll a, b;
    cin >> a >> b;

    res = 1;
    for (ll i = 0; i < a; i++)
    {
        res = min(res * 2, res + b);
    }

    println(res);
}
