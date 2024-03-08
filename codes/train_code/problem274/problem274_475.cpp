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


int main()
{
    string n;
    cin >> n;

    ll c = 1;
    ll res = 1;
    for (ll i = 1; i < 4; i++)
    {
        if (n[i] == n[i - 1])
        {
            c++;
        }
        else
        {
            res = max(res, c);
            c = 1;
        }
        
    }
    res = max(res, c);
    println((res >= 3 ? "Yes" : "No"));
}