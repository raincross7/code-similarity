#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define MAX_N 100

using namespace std;
typedef pair<int, int> P;

int main(){
    long x, y;
    cin >> x >> y;
    long ans = 1;
    while(x * (long)(pow(2, ans)) <= y) ans++;
    cout << ans << endl;
    return 0;
}