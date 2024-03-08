#include <bits/stdc++.h>

using namespace std;
 
//#define int long long
using ll = long long;
#define all(v) (v).begin(), (v).end()
#define rep(i,n) for(ll i=0;i<n;i++)
#define reps(i,n) for(ll i=0;i<=n;i++)


ll MOD = 1000000007;
const long long L_INF = 1LL << 60;
const int INF = 2147483647; // 2^31-1
const double PI = acos(-1);
 
const ll dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const ll dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(){
    ios_base::sync_with_stdio(false);

    ll ans,mini=INF;
    string s,t;

    cin >> s >> t;

    for(int i=0;i<=(s.size()-t.size());i++){
        ans=0;
        for(int j=0;j<t.size();j++){
            if(s[j+i]!=t[j]){
                ans++;
            }
        }
        mini = min(ans,mini);
    }

    cout << mini << endl;

    return 0;
}
