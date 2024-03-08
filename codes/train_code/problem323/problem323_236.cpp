#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i]*(4*m) >= sum) count += 1;
    }

    if(count >= m) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}