#include <bits/stdc++.h>
#define rep(i , n) for (int i = 0; i < (int)(n); i++)
const int INF = 1<<29;
using namespace std;
using ll = long long;
int main(){
    int N , X;
    cin >> N >> X;
    int ans = 0;
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        ans = gcd(ans , X - a);
    }
    cout << ans << endl;
}
