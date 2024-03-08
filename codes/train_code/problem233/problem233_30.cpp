#include<bits/stdc++.h>
using namespace std;

#define int long long int
int const M = 1e9 + 7, N = 2e5 + 1;

int a[N];

signed main() {
    int n, k, ans = 0;
    map<int, vector<int>> mp;
    cin >> n >> k;
    int sum = 0;
    mp[0ll].push_back(0ll);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        // k = 8
        // i = 11, mp[val] => { 1, 2, 6, 8, 9 }
        int val = (sum - (i + 1)) % k;
        int pos = lower_bound(mp[val].begin(), mp[val].end(), max(i - k + 2, 0ll)) - mp[val].begin();
        int cnt = (mp[val].size() - pos);
        ans += cnt;
        mp[val].push_back(i + 1);
    }
    cout << ans << endl;
}