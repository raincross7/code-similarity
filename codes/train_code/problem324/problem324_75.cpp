#include <bits/stdc++.h>
using namespace std;

#define pb	push_back
#define eb	emplace_back
#define mk	make_pair
#define fi	first
#define se	second
#define endl	'\n'

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

int main() {
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    int ans = 0;

    for(ll i = 2; i*i <= n; i++) {
        int deg = 0;
        while(n%i == 0) n /= i, deg++;
        for(int ok = 1; deg-ok >= 0; ok++) ans++, deg-=ok;
    }

    if(n > 1) ans++;
    cout << ans << endl;

    return 0;
}

