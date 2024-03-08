#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define countof(array) (sizeof(array) / sizeof(array[0]))
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = (n)-1; i >= 0; --i)
#define srep(i,n,s) for(int i = s; i < (n); ++i)
#define rsrep(i,n,s) for(int i = (n)-1; i >= s; --i)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define aall(a) (a), (a)+countof(a)//for array sorting
#define raall(a) (a), (a)+countof(a), greater<>()
#define show(x) cout<<#x<<" = "<<x<<endl;
#define vfind(v, a) find(all(v), a) != v.end()
#define yn(f) { if (f) puts("YES"); else puts("NO"); }
#define yns(f) { if (f) puts("Yes"); else puts("No"); }
#define show_ary(...) { cout<<#__VA_ARGS__<<" = "; for (const auto& x : (__VA_ARGS__)) { cout<<x<<" "; } cout<<endl; }
#define out_ary(...) { for (const auto& x : (__VA_ARGS__)) { cout<<x<<" "; } cout<<endl; }
#define argmax(v) distance((v).begin(), max_element(all(v)))
#define argmin(v) distance((v).begin(), min_element(all(v)))
#define vmax(v) *max_element(all(v))
#define vmin(v) *min_element(all(v))
typedef long long int ll;
typedef vector<int> vint;
typedef vector<float> vfloat;
typedef vector<string> vstr;
typedef vector<bool> vbool;
typedef vector<vint> vvint;
typedef vector<vstr> vvstr;
const ll LINF = 2000000000000000000ll;
const int INF = 1000000100;
const ll MOD = 1e9+7;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < 2*n; i += 2) {
        if (s[i] == 'B') s[i] = 'W';
        else s[i] = 'B';
    }
    int w = 0;
    ll ans = 1;
    rep(i, 2*n) {
        if (s[i] == 'W') w++;
        else {
            if (w == 0) {
                puts("0");
                return 0;
            }
            ans *= w;
            ans %= MOD;
            w--;
        }
    }
    if (w != 0) {
        puts("0");
        return 0;
    }
    srep(i, n+1, 1) {
        ans *= i;
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}