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
    int n;
    cin>>n;
    vector<int> d(n);
    rep(i,n) cin>>d[i];
    int ans=0;
    rep(i,n-1){
        repi(j,i+1,n){
            ans+=d[i]*d[j];
        }
    }
    cout<<ans;
}