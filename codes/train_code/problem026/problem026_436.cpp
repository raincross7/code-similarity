#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repr(i, n) for(int i = (n-1); i >= 0; --i)

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

typedef long long ll;
typedef pair<int, int> P;

const int MAX = 200005;
const int INF = 1001001001;
const int MOD = 1000000007;

int main(){
    int A, B;
    cin >> A >> B;

    if (A == B) {
        puts("Draw");
        return 0;
    }

    string ans = A > B ? "Alice" : "Bob";
    if (A == 1) ans = "Alice";
    if (B == 1) ans = "Bob";

    cout << ans << endl;
}