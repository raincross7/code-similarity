#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
#define ll long long
#define all(x) (x).begin(),(x).end()
#define rep(i, n) for(ll i = 0; i < n; i++)
const ll INF = 1LL << 60;

int main(){
    int N, M, A, B, C;
    string s1, s2;
    cin >> N;
    vector<int> P(N);
    rep(i, N) cin >> P[i];
    int Min = 1 << 30;
    int ans = 0;
    rep(i, N){
        // cout << P[i] << " " << Min << endl;
        if(P[i] < Min) ans++;
        Min = min(Min, P[i]);
    }
    cout << ans << endl;
} 