#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const ll INF = 1LL << 60;
const int MAX = 1000000010;
const ll MOD = 1000000007;
const double PI = acos(-1);

int main() {
    string a, b, c; cin >> a >> b >> c;
    char s1 = toupper(a.front());
    char s2 = toupper(b.front());
    char s3 = toupper(c.front());
    cout << s1 << s2 << s3 << endl;
    return 0;
}