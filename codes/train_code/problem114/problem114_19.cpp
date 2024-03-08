#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long INF = 1LL << 60;
using Graph = vector<vector<int>>;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

inline int gcd(int a, int b) { return (a%b == 0) ? b : gcd(b, a%b); }
inline int fac(int n) { return (n==0) ? 1 : n * fac(n - 1); }

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for (int i = 1; i < n+1; i++) {
        cin >> a[i];
    }

    int cnt = 0;
    for (int i = 1; i < n+1; i++) {
        int j = a[i];
        if (a[j] == i)
        {
            cnt++;
        }
    }

    cout << cnt / 2 << endl;

    return 0;
}
