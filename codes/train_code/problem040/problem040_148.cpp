#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    
    int n; cin >> n; int a[n]; for(int &i : a) cin >> i;
    sort(a, a+n);
    cout << a[n/2] - a[n/2 - 1];    
}