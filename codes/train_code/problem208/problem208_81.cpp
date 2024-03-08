#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define REP(i, n) for (int i = 0; i < (n); i++)
#define RREP(i, n) for (int i = (n) - 1; i >= 0; i--)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define RFOR(i, a, b) for (int i = (a); i > (b); i--)
#define ALL(a) (a).begin(), (a).end()

int main() {
    ll K, N = 50;
    cin >> K;
    cout << N << endl;
    ll base = K / N;
    REP(i, N) {
        if (i < K % N) cout << N + base - i << " ";
        else           cout << N + base - i - 1 << " ";
    }
    cout << endl;
    return 0;
}