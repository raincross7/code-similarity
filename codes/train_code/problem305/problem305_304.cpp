#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
long long a[N], b[N];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        cin>>a[i]>>b[i];
    }

    long long add = 0;
    for (int i=n; i>0; i--) {
        a[i] += add;
        if (a[i]%b[i] != 0) add += b[i] - a[i]%b[i];
    }
    cout<<add<<endl;
}
