#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    string s;
    set<char> st{'y', 'u', 'i', 'o', 'p', 'h', 'j', 'k', 'l', 'n', 'm'};
    while (cin >> s, s[0] != '#') {
        int ans = 0;
        rep(i, s.size() - 1) {
            ans += (st.count(s[i]) != st.count(s[i + 1]));
        }
        cout << ans << endl;
    }

}