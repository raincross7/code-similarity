#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define all(x) (x).begin(),(x).end()
#define endl "\n"

using ll = long long;
using P = pair<int,int>;
using mp =  map<char,int>;

const int MOD = 1e9 + 7;
const int INF = 1001001001;


int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    int ans = 0;
    rep(i, n){
        cin >> a[i];
    }

    int cnt = 1;
    rep(i, n){
        if(a[i] == a[i+1]){
            cnt++;
        }else{
            ans += cnt / 2;
            cnt = 1;
        }
    }

    cout << ans << endl;

    return 0;
}