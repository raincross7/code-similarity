#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    n = n+n;
    vector<int> a(n);
    for (int i=0; i<n; i++)     cin>>a[i];
    sort(a.begin(), a.end());

    int ans = 0;
    for (int i=0; i<n; i+=2)    ans += a[i];

    cout<<ans<<endl;
}
