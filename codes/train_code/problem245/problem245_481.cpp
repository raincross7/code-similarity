/*
ID: alec3
LANG: C++14
PROG:
*/


#include <bits/stdc++.h>

#define check(x) cout<<(#x)<<": "<<x<<" ";
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ss second
#define ff first
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define ld long double
#define all(c) (c).begin(), (c).end()
#define FOR(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    io;
    int n, l;
    cin >> n >> l;
    l --;

    // in inverse p each index is actually the value and the value
    // held at that that index is actually an index
    vector<int> p(n), inv_p(n);
    for (int i = 0; i < n; i++){
        cin >> p[i];
        p[i] --;
        inv_p[p[i]] = i;
    }

    vector<ll> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];

    // minimum possible
    ll ret = -(1LL << 62);

    // loop though starting positions
    for (int i = 0; i < n; i++){
        ll s = 0;
        // prefix sum vector
        vector<ll> a;
        a.pb(s);

        // loop through the cycle
        for (int j = i; ; j = p[j]){
            // update the sum
            s += c[j];
            a.pb(s);
            // if the value is the same as starting point
            // we've completed a cylce so break out
            if (p[j] == i)
                break;
        }

        // save the length of a and copy a into b
        int m = a.size() -1;
        vector<ll> b = a;

        // find the maximum value at each point in the cycle
        for (int j = 1; j <= m; j++)
            b[j] = max(b[j], b[j-1]);

        // loop though these possible conditions
        for (int d : {0, 1, 2, l / m, l / m - 1, l / m - 2}){
            // we won't have a valid index
            if (d < 0 || d * m > l)
                continue;
            // update the result if the following is greater
            // c[the value i] (gives index) + sum * element in list + b (holds max values at each index)
            // at the min of m (the size of a) and l - d * m where l is length of the subcycle
            ret = max(ret, c[inv_p[i]] + s * d + b[min(m, l - d * m)]);
        }
    }
    cout << ret << endl;

    return 0;

}
