#include <bits/stdc++.h>
using namespace std;
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
 
#define rep(i,cc,n) for(int i=cc;i<n;++i)
#define lrep(i,cc,n) for(long long i=cc;i<n;++i)
#define sqrep(i,cc,n) for(long long i=cc;i*i<=n;++i)
#define rrep(i,cc,n) for(long i=cc;i>n;--i)
#define pii pair<int, int>
#define pll pair<long long, long long>
 
using ll = long long;
 
const vector<int> dx = {1, 0, -1, 0};
const vector<int> dy = {0, 1, 0, -1};
const ll inf = 1001001001;
const ll e9  = 1000000000;
const ll mod = 1000000007;
 
 
int main(){
    int n, m;
    cin >> n >> m;
    vector<string>a(n), b(m);
    rep(i, 0, n)cin >> a[i];
    rep(i, 0, m)cin >> b[i];
    for(int i=0; i+m-1<n; i++){
        for(int j=0; j+m-1<n; j++){
            bool p = true;
            rep(k, i, i+m){
                rep(l, j, j+m){
                    if(a[k][l]!=b[k-i][l-j])p = false;
                }
            }
            if(p){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}