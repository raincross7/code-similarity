#include <bits/stdc++.h>
using namespace std;
#define rep(i,n)for(int i=0;i<(n);i++)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define pb push_back
using ll = long long;
using P = pair<int, int>;

int main(){
    ll n, m; cin >> n >> m;
    if(n > m) swap(n,m);
    if(n==1){
        if(m==1){
            cout << 1 << endl;
            return 0;
        }else{
            cout << m-2 << endl;
        }
    }else{
        cout << (n-2)*(m-2) << endl;
    }
}