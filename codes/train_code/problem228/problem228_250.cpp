
#include<bits/stdc++.h>
#define rep(i,N) for(int i=0;i<(N);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e12;
const int inf = 1e9;
const int mod = 1e9+7;
typedef long long ll;
typedef pair<ll,int> P;
typedef set<int> S;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
int main(){
    cout << fixed << setprecision(10);
    ll n,a,b;
    cin >> n >> a >> b;
    if(n == 1){
        if(a != b){
            cout << 0 << endl;
            return 0;
        }else{
            cout << 1 << endl;
            return 0;
        }
    }
    if(a > b){
        cout << 0 << endl;
        return 0;
    }
    if(a == b){
        cout << 1 << endl;
        return 0;
    }

    cout << b * (n - 1) + a - (a * (n - 1) + b) + 1 << endl;

    return 0;
}