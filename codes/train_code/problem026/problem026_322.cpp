#include <bits/stdc++.h>
#define rep(i, a) for(int i = 0; i < a; i++)
#define all(v) v.begin(), v.end()
#define dcout cout << fixed << setprecision(15)
#define arep(i, a) for(auto i : a)
#define F first
#define S second
#define VE vector<int>
#define pb(x) push_back(x)
#define MOD 1000000007
#define INF 10000000000
#define int long long
#define KETA(n) floor(log10(n) + 1)
using namespace std;
signed main() {
    int a, b;
    cin >> a >> b;
    if(a == b)
        cout << "Draw" << endl;
    else if((a > b && a != 13) || a == 1)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
    return 0;
}