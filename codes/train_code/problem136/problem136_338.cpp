#include <bits/stdc++.h>
using namespace std;

#ifdef _DEBUG
    #include "/home/v-o_o-v/deb.h"
    #define deb(x...)cerr << "[" << #x << "] = [";_print(x);
#else
    #define deb(x...)
#endif

#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    string s, t;
    cin >> s >> t;
    sort(all(s));
    sort(rall(t));
    if(s < t)puts("Yes");
    else puts("No");
    return 0;
}
// Write Here
