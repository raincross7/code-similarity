/* Author: Dhruv Rastogi */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define all(sdk) sdk.begin(),sdk.end()
#define mll map<int, int>
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;++i)
#define repd(i,a,b) for(int i=a;i>=b;--i)
#define mp make_pair
#define hell 1000000007
#define endl '\n'
#define vvll vector<vector<int> >
#define vll vector<int>
#define mint map<int,int> 
#define sz(x) (int)x.size()
#define sll set<int>
#define pll pair<int,int>
#define F first
#define S second
const long double PI = acos(-1.0);

void solve(){  
    int h1,m1,h2,m2,k;
    cin>>h1>>m1>>h2>>m2>>k;
    cout<<(h2-h1)*60+m2-m1-k<<endl;  
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
