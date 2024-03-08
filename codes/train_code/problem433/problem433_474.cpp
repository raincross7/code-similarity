#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(v) v.begin(), v.end()
#define mem(arr) memset(arr, 0, sizeof(arr))
#define ff first
#define ss second
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e6 + 1;
vector<int> g[N];
void solve(){
    vector<int> ans(N + 1);
    for(int i = 1; i <= N; i++){
        for(int j = 1; i * j <= N; j++){
            ans[i * j]++;
        }
    }
    int val;
    cin >> val;
    int total = 0;
    for(int i = 1; i <= val; i++){
        total += ans[val - i];
    }
    cout << total << '\n';
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    while(tc--){
        solve();
    }
}