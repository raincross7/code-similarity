#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> ans(n);
    int a;
    rep(i,n) {
        cin >> a;
        a--;
        ans[a] = i+1;
    }

    rep(i,n) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    return 0;
}