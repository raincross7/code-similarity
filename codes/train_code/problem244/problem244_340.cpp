#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<vector<int>> Graph;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
#define pi 3.14159265359
#define inf 2147483647
#define INF 9223372036854775807
#define mod 1000000007
#define mod2 998244353

int main() {
    int N, A, B; cin >> N >> A >> B;
    int ans = 0;
    for(int i = 1; i <= N; i++) {
        int n = 0;
        int x = i;
        while(x) {
            n += x % 10;
            x /= 10;
        }
        if(n >= A && n <= B) ans += i;
    }
    cout << ans << endl;
    return 0;
}