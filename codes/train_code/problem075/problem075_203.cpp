#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int x;
    cin>>x;

    int q = x/100;
    int r = x%100;

    cout<<(r<=q*5)<<endl;
    return 0;
}