#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define yorn(f) cout<<((f)?"Yes":"No")<<endl;
#define YORN(f) cout<<((f)?"YES":"NO")<<endl;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, n) for (int i = 1; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define put(x) cout << x << endl;
#define println(x) cout << x << endl;
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;

    if (k % 2 == 0) {
        ll sum = 0;
        if (n - k/2 >= 0) {
            ll m = (n - k/2) / k + 1;
            sum += m * m * m;
        }
        if (n - k >= 0) {
            ll m = (n-k)/k + 1;
            sum += m * m * m;
        }
        put(sum);
    }
    else {
        ll sum = 0;
        if (n - k >= 0) {
            ll m = (n-k)/k + 1;
            sum += m * m * m;
        }
        put(sum);
    }

    return 0;
}