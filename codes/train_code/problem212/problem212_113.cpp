#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define per1(i,n) for(int i=n;i>0;i--)
#define all(v) v.begin(), v.end()
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> vec;
typedef vector<vec> mat;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,ans=0;
    cin>>n;
    rep1(i,n){
        if(i%2==0) continue;
        int a=0;
        rep1(j,i){
            if(i%j==0) a++;
        }
        if(a==8) ans++;
    }
    cout<<ans;
}