#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    int n; cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(to_string(i).size() & 1) ans++;
    }
    cout << ans << endl;

    return 0;
}
