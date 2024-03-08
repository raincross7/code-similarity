#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define FOR(i, a, b) for (int i = a; i <= (b); i++)
#define ROF(i, a, b) for (int i = a; i >= (b); i--)

using pii = pair<int, int>; using vpii = vector<pii>;
using vi = vector<int>; using vvi = vector<vi>;
using ll = long long;
using pll = pair<ll, ll>; using vpll = vector<pll>;
using vll = vector<ll>; using vvll = vector<vll>;

int main() {
    string s; cin >> s;
    int ans = 0;
    stack <char> st;
    FOR(i, 0, s.size() - 1) {
        if (!st.empty() && s[i] != st.top()) {
            ans += 2;
            st.pop();
        }
        else st.push(s[i]);
    }
    cout << ans << endl;
}