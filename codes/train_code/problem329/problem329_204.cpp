//In The Name of Allah
#include <bits/stdc++.h>

using namespace std;

const int N = 5000 + 10;

int a[N], n, k;

bool check(int x){
    bitset < N > dp;
    dp[0] = 1;
    for (int i = 1; i < x; i ++)
        dp |= dp << a[i];
    for (int i = x + 1; i <= n; i ++)
        dp |= dp << a[i];
    bool f = 0;
    for (int i = max(0, k - a[x]); i < k; i ++)
        f |= dp[i];
    return f;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i ++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int l = 0, r = n + 1;
    while (1 < r - l){
        int mid = (l + r) / 2;
        if (check(mid))
            r = mid;
        else
            l = mid;
    }
    cout << l;
    return 0;
}
