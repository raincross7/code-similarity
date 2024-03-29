#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()

int n;
const int maxn = 2e5 + 5;
ll a[maxn];

map<ll, int> cnt;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    cnt[0] = 1;
    ll sum = 0;
    ll ans = 0;
    for(int i = 1;i <= n;i++){
        sum += a[i];
        ans += cnt[sum];
        cnt[sum]++;
    }
    cout << ans << endl;
    return 0;
}
