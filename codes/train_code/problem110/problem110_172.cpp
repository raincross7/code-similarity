#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,n) for(int i=0;i<(n);++i)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define all(x) (x).begin(), (x).end()
#define PI 3.14159265358979323846264338327950L
using namespace std;
typedef long long ll;
typedef long double ld;
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    rep(i,n+1){
        rep(j,m+1){
            if(i*(m-j)+j*(n-i)==k){
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No";
}