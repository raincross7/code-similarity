#include <bits/stdc++.h>
#include <unordered_map>
typedef long long ll;
#define rep(i,m,n) for(ll i = (m); i < (n); i++)
#define rrep(i,m,n) for(ll i = (m); i >= (n); i--)
#define print(x) cout << (x) << endl;
#define print2(x,y) cout << (x) << " " << (y) << endl;
#define printa(x,n) for(ll i = 0; i < n; i++){ cout << (x[i]) << " \n"[i == n-1];}
#define printp(x,n) for(ll i = 0; i < n; i++){ cout << "(" << x[i].first << ", " << x[i].second << ") "; } cout << endl;
#define INF (1e18)
using namespace std;
const ll MOD = 1e9 + 7;
typedef pair<ll, ll> lpair;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    if(s.size() < 4){
        print("No");
    }else{
        if(s.substr(0,4) == "YAKI"){
            print("Yes");
        }else{
            print("No");
        }
    }
}
