#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    char s[19];
    rep(i,19)cin>>s[i];
    s[5]=s[13]=' ';
    rep(i,19)cout<<s[i];
    cout<<endl;

    return 0;
}
