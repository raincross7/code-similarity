#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i< (n); ++i)
#define vvec(m,n) vector<vector<int>> (int(m), vector<int>(n))
#define ALL(a) (a).begin(), (a).end()

using ll = long long;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if((abs(a-b) <= d && abs(b-c) <= d)|| abs(a-c) <= d) puts("Yes");
    else puts("No");
}