#include<bits/stdc++.h>
#define rep(i,n) for (int i=0; i<n; i++)
#define REP(i,x,n) for (int i=x; i<n; i++)
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;
const int mod = 1'000'000'007;
const int INF = 1e9;

vi dp(100010, INF);

int rec(int n){
    if (dp[n] != INF) return dp[n];
    if (n == 0) return 0;
    int res = INF;
    res = min(res, rec(n-1)+1);
    for (int i=6; i<=n; i*=6){
        res = min(res, rec(n-i)+1);
    }
    for (int i=9; i<=n; i*=9){
        res = min(res, rec(n-i)+1);
    }
    return dp[n] = res;
}

int main(){
    int n;
    cin >> n;
    cout << rec(n) << endl;
    return 0;
}
