#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a,b,x;
    cin>>a>>b>>x;
    if(x>=a&&x<=a+b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}