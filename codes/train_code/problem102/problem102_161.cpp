#include <bits/stdc++.h>
typedef long long int LL;
typedef unsigned long long int ULL;
using namespace std;

// 插入此處

LL a[1005];
LL sum[1005];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    vector<LL> vec;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            vec.push_back(sum[j] - sum[i - 1]);
        }
    }
    LL ans = 0;
    for (int b = 40; b >= 0; b--) {
        LL x = ans | (1LL << b);
        int count = 0;
        for (auto v: vec) {
            if ((x & v) == x) {
                count++;
            }
        }
        if (count >= k) {
            ans = x;
        }
    }
    printf("%lld\n", ans);
}
