#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int, int>;
using iii = pair<ii, int>;
#define vt vector
#define pq priority_queue
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define __lcm(a, b) a * b / __gcd(a, b)
// #define multicase
const int MOD = 1e9 + 7;
const int INF = 2e9;
const int N = 2e5 + 5;

int a, b;

void solve() {
    int T = 1;
  #ifdef multicase
    cin >> T;
  #endif
    while(T--) {
        cin >> a >> b;
        if(a == 1) a += 13;
        if(b == 1) b += 13;
        cout << (a == b ? "Draw\n" : a > b ? "Alice\n" : "Bob\n");
    }
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
    
}